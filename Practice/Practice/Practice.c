char * toLowerCase(char * str){
	char* p = str;
	while (*p)
	{
		if ((*p) >= 'A' && (*p) <= 'Z')
		{
			(*p) += 32;
		}
		p++;
	}
	return str;
}

void reverse(int* nums, int start, int end)
{
	while (start < end)
	{
		int tmp = nums[start];
		nums[start] = nums[end];
		nums[end] = tmp;
		end--;
		start++;
	}
}

void rotate(int* nums, int numsSize, int k){
	k = k % numsSize;
	reverse(nums, 0, numsSize - 1);
	reverse(nums, 0, k - 1);
	reverse(nums, k, numsSize - 1);
}




int removeElement(int* nums, int numsSize, int val){
	int first1 = 0;
	int first2 = 0;
	while (first1 < numsSize)
	{
		if (nums[first1] == val)
		{
			first1++;
		}
		else
		{
			nums[first2] = nums[first1];
			first2++;
			first1++;
		}
	}
	return first2;
}



int searchInsert(int* nums, int numsSize, int target){
	int start = 0;
	while (start < numsSize)
	{
		if (nums[start] < target)
		{
			start++;
		}
		else
		{
			break;
		}
	}
	return start;
}


bool canConstruct(char * ransomNote, char * magazine){
	char* ransomNoteStart = ransomNote;
	char* magazineStart = magazine;
	while (*ransomNoteStart && *magazineStart)
	{
		if (*ransomNoteStart == *magazineStart)
		{
			ransomNoteStart++;
			*magazineStart = '*';
			magazineStart = magazine;
		}
		else
		{
			magazineStart++;
		}
	}
	if (*ransomNoteStart == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}



bool isPalindrome(int x){
	if (x < 0 || (x % 10 == 0 && x != 0))
	{
		return false;
	}
	int number = 0;
	while (x > number)
	{
		number = x % 10 + number * 10;
		x = x / 10;
	}
	if (number == x || number / 10 == x)
	{
		return true;
	}
	else
	{
		return false;
	}
}


int lengthOfLastWord(char * s){
	int len = strlen(s);
	int i = len - 1;
	int count = 0;
	while (i != -1 && s[i] == ' ')
	{
		i--;
	}
	while (i != -1 && s[i] != ' ')
	{
		count++;
		i--;
	}
	return count;
}



void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
	int end1 = m - 1;
	int end2 = n - 1;
	int ends = m + n - 1;
	while (end1 >= 0 && end2 >= 0)
	{
		if (nums1[end1] > nums2[end2])
		{
			nums1[ends] = nums1[end1];
			end1--;
			ends--;
		}
		else
		{
			nums1[ends] = nums2[end2];
			end2--;
			ends--;
		}
	}
	if (end1 < 0)
	{
		while (end2 >= 0)
		{
			nums1[ends] = nums2[end2];
			ends--;
			end2--;
		}
	}
}



bool containsDuplicate(int* nums, int numsSize){
	if (nums == NULL)
		return false;
	int start1 = 0;
	int start2 = 0;
	while (start1 < numsSize)
	{
		start2 = start1 + 1;
		while ((start2 < numsSize) && (nums[start1] != nums[start2]))
		{
			start2++;
		}
		if (start2 == numsSize)
			start1++;
		else
			return true;
	}
	return false;

}



bool isLongPressedName(char * name, char * typed){
	if (*name != *typed)
	{
		return false;
	}
	char* pname = name;
	char* ptyped = typed;
	while (*pname && *ptyped)
	{
		if (*pname == *ptyped && *pname && *ptyped)
		{
			pname++;
			ptyped++;
		}
		else
		{
			if (*ptyped != *(pname - 1))
				return false;
			else
				ptyped++;
		}
	}
	if ((*ptyped == NULL && *pname == NULL) || *ptyped)
		return true;
	else
		return false;

}




/**
* Note: The returned array must be malloced, assume caller calls free().
*/
int* sortedSquares(int* A, int ASize, int* returnSize){
	int start = 0;
	int end = ASize - 1;
	int i = 0;
	int len = ASize;
	while (i <= ASize - 1)
	{
		A[i] = A[i] * A[i];
		i++;
	}
	int* arr = (int*)malloc(sizeof(int)*ASize);
	while (start <= end)
	{
		if (A[start] > A[end])
		{
			arr[--ASize] = A[start];
			start++;
		}
		else
		{
			arr[--ASize] = A[end];
			end--;
		}
	}
	*returnSize = len;
	return arr;
}



char * reverseOnlyLetters(char * S){
	int i = 0;
	int j = strlen(S) - 1;
	if (j == 0 || j == -1)
		return S;
	while (i <= j)
	{
		if (((*(S + i) >= 'A' && *(S + i) <= 'Z') || (*(S + i) >= 'a' && *(S + i) <= 'z')) &&
			((*(S + j) >= 'A' && *(S + j) <= 'Z') || (*(S + j) >= 'a' && *(S + j) <= 'z')))
		{
			char* t = S[i];
			S[i] = S[j];
			S[j] = t;
			i++;
			j--;
		}
		if (!((*(S + i) >= 'A' && *(S + i) <= 'Z') || (*(S + i) >= 'a' && *(S + i) <= 'z')))
		{
			i++;
		}
		if (!((*(S + j) >= 'A' && *(S + j) <= 'Z') || (*(S + j) >= 'a' && *(S + j) <= 'z')))
		{
			j--;
		}
	}
	return S;
}



/**
* Note: The returned array must be malloced, assume caller calls free().
*/
int* sortArrayByParity(int* A, int ASize, int* returnSize){
	int* arr = (int*)malloc(sizeof(int)*ASize);
	int i = 0;
	int j = 0;
	while (i <= ASize - 1)
	{
		if (A[i] % 2 == 0)
		{
			arr[j] = A[i];
			i++;
			j++;
		}
		else
		{
			i++;
		}
	}
	i = 0;
	while (i <= ASize - 1)
	{
		if (A[i] % 2 != 0)
		{
			arr[j] = A[i];
			i++;
			j++;
		}
		else
		{
			i++;
		}
	}
	*returnSize = ASize;
	return arr;
}



int pivotIndex(int* nums, int numsSize){
	int i = 0;
	int sum = 0;
	while (i <= numsSize - 1)
	{
		sum += nums[i];
		i++;
	}
	i = 0;
	int sumleft = 0;
	while (i <= numsSize - 1)
	{
		if (sumleft == sum - nums[i] - sumleft)
			return i;
		else
			sumleft += nums[i];
		i++;
	}
	return -1;
}



/**
* Note: The returned array must be malloced, assume caller calls free().
*/
int* plusOne(int* digits, int digitsSize, int* returnSize){
	int* arr = (int*)malloc(sizeof(int)*(digitsSize + 1));
	int i = digitsSize - 1;
	while (i >= 0)
	{
		if (digits[i] < 9)
		{
			digits[i]++;
			*returnSize = digitsSize;
			return digits;
		}
		else
		{
			digits[i] = 0;
			i--;
		}
	}
	arr[0] = 1;
	i = 1;
	while (i <= digitsSize)
	{
		arr[i] = 0;
		i++;
	}
	*returnSize = digitsSize + 1;
	return arr;
}


int thirdMax(int* nums, int numsSize){
	long first = LONG_MIN;
	long second = LONG_MIN;
	long third = LONG_MIN;
	if (numsSize == 1)
	{
		return *nums;
	}
	if (numsSize == 2)
	{
		return nums[0] > nums[1] ? nums[0] : nums[1];
	}
	for (int i = 0; i <= numsSize - 1; i++)
	{
		if (nums[i] > first)
		{
			third = second;
			second = first;
			first = nums[i];
		}
		if (first > nums[i] && nums[i] > second)
		{
			third = second;
			second = nums[i];
		}
		if (nums[i] < second && nums[i] > third)
		{
			third = nums[i];
		}
	}
	if (third == LONG_MIN)
	{
		return first;
	}
	return third;
}


/**
* Note: The returned array must be malloced, assume caller calls free().
*/
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
	int* arr = (int*)malloc(sizeof(int)* 2);
	for (int i = 0; i <= numsSize - 1; i++)
	{
		for (int j = i + 1; j <= numsSize - 1; j++)
		{
			if (nums[i] + nums[j] == target)
			{
				arr[0] = i;
				arr[1] = j;
				*returnSize = 2;
				return arr;
			}
		}
	}
	return false;
}


int myAtoi(char * str){
	int sign = 0;
	long num = 0;
	char* p = str;
	while (*p == ' ')
	{
		p++;
	}
	sign = (*p == '-') ? -1 : 1;
	if (*p == '-' || *p == '+')
		p++;
	while ((*p >= '0') && (*p <= '9'))
	{
		num = num * 10 + (*p - '0');
		p++;
		if ((int)num != num)
			return sign == 1 ? INT_MAX : INT_MIN;

	}
	num = sign*num;
	return num;
}




/**
* Note: The returned array must be malloced, assume caller calls free().
*/
int* searchRange(int* nums, int numsSize, int target, int* returnSize){
	int* arr = (int*)malloc(sizeof(int)* 2);
	if (!numsSize)
	{
		arr[0] = -1;
		arr[1] = -1;
		*returnSize = 2;
		return arr;
	}
	int left = 0;
	int right = numsSize - 1;
	while (left < right)
	{
		int middle = (left + right) / 2;
		if (nums[middle] >= target)
			right = middle;
		else
			left = middle + 1;

	}

	if (nums[left] != target)
	{
		arr[0] = -1;
		arr[1] = -1;
		*returnSize = 2;
		return arr;
	}
	arr[0] = left;
	right = numsSize - 1;
	while (left < right)
	{
		int middle = (left + right + 1) / 2;
		if (nums[middle] == target)
			left = middle;
		else
			right = middle - 1;

	}
	arr[1] = right;
	*returnSize = 2;
	return arr;

}


