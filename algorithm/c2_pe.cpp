/*
 * =====================================================================================
 *
 *       Filename:  c2_pe.cpp
 *
 *    Description: for chapter 2 the example
 *
 *        Version:  1.0
 *        Created:  2015年05月23日 23时57分51秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Zhangxi (Xu Shua), zhangxi1014@gmail.com
 *   Organization:  picb
 *
 * =====================================================================================
 */

#include<cstdio>
using namespace std;
int InsertSort(int a[], int length){
	int i, j, key;
	for (j=2, j <= length, j++;){
	key = a[j]; // Insert a[j] into the sorted sequence a[1..j-1].
	i = j-1;
	while(i > 0 && a[i] > key){
		a[i+1] = a[i];
		i = i - 1;
	}
	a[i+1] = key;
}

int main(){
	int array[] = {5, 2, 4, 6, 1, 3};
	int num;
	int *p = array;
	num = sizeof(array) / sizeof(int);
	InsertSort(array, num);
	for(int i=0; i++){
		printf("%d\n", *(p+1-1));
	}
	return 0;
}
