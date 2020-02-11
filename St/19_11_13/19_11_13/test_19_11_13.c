#include<stdio.h>
#include<assert.h>
char* strncpy(char* dest, const char* src, size_t num) {
	assert(dest && src);
	char* findex = dest;
	while (num--) {
		*dest++ = *src++;
	}
	*dest = '\0';
	return findex;
}
char* strncat(char* dest, const char* src, size_t num) {
	assert(dest && src);
	char* findex = dest;
	while (*dest != '\0') {
		dest++;
	}
	while (num--) {
		*dest++ = *src++;
	}
	*dest = '\0';
	return findex;
}
int strncmp(const unsigned char* str1,const unsigned char* str2, size_t num) {
	while ((*str1 != '\0' || *str2 != '\0') && num != 0){
		if (*str1 > * str2) {
			return 1;
		}
		else if (*str1 < *str2) {
			return -1;
		}
		else {
			str1++;
			str2++;
			num--;
		}
	}
	if (*str1 == *str2 && *str1 == '\0')
		return 0;
	else if (*str2 == '\0')
		return 1;
	else
		return -1;
}
int main() {
	char ch[50] = "to be1";
	char ch1[50] = "to be2";
	
	printf("%d", strncmp(ch, ch1, 5));
}