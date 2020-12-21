#ifndef _COROUTINE_H_
#define _COROUTINE_H_ 

#include<ucontext.h>

#define CORSZ 1024 //协程最多个数
#define STACKSZ (1024*64) //协程栈大小
//声明
struct schedule;

enum State{
  DEAD,
  READY,
  RUNNING, 
  SUSPEND 
};
//协程结构体
typedef struct coroutine{
  void *(*call_back)(struct schedule* s, void* args); //回调函数
  void* args; //回调函数参数
  ucontext_t ctx; //协程上下文
  char stack[1024*64]; //协程栈
  enum State state;
}coroutine_t;

//协程调度器
typedef struct schedule{
  coroutine_t** coroutines;  //所有协程
  int current_id; //当前正在运行的协程ID,如果没有正在运行的协程-1
  int max_id; //最大个数
  ucontext_t ctx_main;  //主流程上下文
}schedule_t;

schedule_t* schedule_creat();
int coroutine_creat(schedule_t* s, void* (*call_back)(schedule_t*, void* args), void* args);
void coroutine_yield(schedule_t* s);
void coroutine_resume(schedule_t* s, int id);
void delete_coroutine(schedule_t* s, int id);
void schedule_destroy(schedule_t* s);

#endif /* _COROUTINE_H_ */
