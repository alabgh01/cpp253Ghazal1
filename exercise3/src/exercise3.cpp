/**
 * @file exercise3.cpp
 * @author 
 * @brief Exercise 3 implementation
 * @version 2022.2
 * @date 
 *
 * @copyright Copyright (c) 2022
 *
 */
#include "exercise3.hpp"
// 9
void task1(int grades[], int size) 
{
  int cutrA = 0;
  int cutrB = 0;
  int cutrC = 0;
  int cutrD = 0;
  int cutrF = 0;
  for (int i = 0; i < size; ++i)
  {
    if (grades[i] <= 59)
      cutrF += 1;
    else if (grades[i] > 59 && grades[i] <= 69)
      cutrD += 1;
    else if (grades[i] > 69 && grades[i] <= 79)
      cutrC += 1;
    else if (grades[i] > 79 && grades[i] <= 89)
      cutrB += 1;
    else if (grades[i] > 89 && grades[i] <= 100)
      cutrA += 1;
  }
  cout << "A    " << cutrA << endl;
  cout << "B    " << cutrB << endl;
  cout << "C    " << cutrC << endl;
  cout << "D    " << cutrD << endl;
  cout << "F    " << cutrF << endl;
  return; 
}

void task2(int grades[], int size) 
{
  int largest = 0;
  for (int i = 0; i < size; ++i)
  {
    // if (grades[i] > largest && grades[i] < 100)
    if (grades[i] > largest)
    {
      largest = grades [i];
    }
  }
  int diff = 100 - largest;
  for (int i = 0; i < size; ++i)
  {
    int nnew = grades[i] + diff;
    if (nnew <= 100)
    {
      grades[i] = nnew;
    }
  }
  cout << endl;
  return; 
}

int task3(list<int> aList) 
{ 
  int sum = 0;
  for (auto it = aList.begin(); it != aList.end(); ++it)
  {
    sum += *it;
  }
  return sum; 
}

bool task4(list<int> aList, int number)
{ 
  for (auto it = aList.begin(); it != aList.end(); ++it)
  {
    if (*it == number)
    {
      return true; 
    }
  }
  return false; 
}

bool task5(string aWord) 
{ 
  string ns = aWord;
  int len = aWord.length();
  vector<int> vLetter;
  for (int i = 0; i < len; ++i)
  {
    vLetter.push_back(aWord[i]);
  }
  sort(aWord.begin(), aWord.end());
  if (ns == aWord)
  {
    return true;
  }
  return false; 
}

bool task6(vector<int> aVector, int number) 
{
  for (auto it = aVector.begin(); it != aVector.end(); ++it)
  {
    if (*it == number)
    {
      return true;
    }
  } 
  return false; 
}

vector<int> task7(int size) {
  vector<int> result;
  for (int i = 0; i < size; ++i){
    int rn = ((rand() % 50) + 50); 
    result.push_back(rn);
  }
  return result;
}

int task8(vector<int> grades, int threshold)
{ 
  int sum = 0;
  for (auto it = grades.begin(); it != grades.end(); ++it)
  {
    if (*it < threshold)
    {
      sum += 1;
    }
  }
  return sum; 
}

vector<int> task9(vector<int> aVector) {
  vector<int> result;
  // reverse(aVector.begin(), aVector.end());
  for (auto i = --aVector.end(); i >= aVector.begin(); i--) {
    result.push_back(*i);
}
  return result;
}

vector<int> task10(int threshold) {
  vector<int> result;
  // 1 - create a list of all numbers until threshold
  // loop througth the list
  // if divisable by 2, 3, 5, 7, elemenate except 2,3,4,5,7
  // the left is primes
  // vector<int> nums;
  // for (int i = 2; i <= threshold; ++i)
  // {
  //   nums.push_back(i);
  // }
  // for (auto it = nums.begin(); it != nums.end(); ++it)
  // {
  //   if (*it == 2 or *it == 3 or *it == 5 or *it == 7){
  //     result.push_back(*it);
  //   }
  // }
  //   for (int i = 5; i < threshold; ++i)
  //   {
  //     if (nums[i] % 2 != 0 && nums[i] % 3 != 0 && nums[i] % 5 != 0 && nums[i] % 7 != 0)
  //     {
  //       result.push_back(nums[i]);
  //     }
  //   }

  bool arr[threshold];
	for(int i = 0; i < threshold; i++)
  {
		arr[i] = true;
  }
	for(int i = 2; i < threshold; i++)
	{
		for(int j = i * i; j < threshold; j += i)
		{
			arr[j - 1] = false;
		}
	}
	for(int i = 2; i < threshold; i++)
	{
		if(arr[i - 1] == true)
      result.push_back(i);
	}
  return result;
}
