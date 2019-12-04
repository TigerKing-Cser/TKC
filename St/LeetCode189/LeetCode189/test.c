void reverseint(int* start, int* end) {
	while (start < end) {
		int tmp = *start;
		*start = *end;
		*end = tmp;
		start++;
		end--;
	}
}
void rotate(int* nums, int numsSize, int k) {
	if (k >= numsSize) {
		k %= numsSize;
	}
	if (k % numsSize == 0) {
		return;
	}
	else {
		reverseint(nums, nums + numsSize - k - 1);
		reverseint(nums + numsSize - k, nums + numsSize - 1);
		reverseint(nums, nums + numsSize - 1);
	}
}