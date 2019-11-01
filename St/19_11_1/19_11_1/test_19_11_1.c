#include<stdio.h>
int my_strlen(char* ch) {
	int len = 0;
	while (*ch++) {
		len++;
	}
	return len;
}
void reverse_str(char* start, char* end) {
	while (start < end) {
		char tmp = *start;
		*start = *end;
		*end = tmp;
		start++;
		end--;
	}
}
void reverse(char* ch) {
	char* cur = ch;
	int len = my_strlen(ch);
	reverse_str(ch, ch + len - 1);
	while (*cur) {
		char* start = cur;
		while (*cur != ' ' && *cur != '\0')
			cur++;
		reverse_str(start, cur - 1);
		while (*cur == ' ')
			cur++;
	}
}
int main() {
	int i = 0;
	char ch[] = "student a am i";
	reverse(ch);
	printf("%s", ch);
}