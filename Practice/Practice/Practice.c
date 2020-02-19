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
