#include <iostream>
using namespace std;

int binary_search(int list[], int lo, int hi, int key)
{
    int mid;

    if (lo > hi)
    {
//        printf("Key not found\n");
        return -1;
    }
    mid = (lo + hi) / 2;
    if (list[mid] == key)
    {
        return mid;
    }
    else if (list[mid] > key)
    {
        binary_search(list, lo, mid - 1, key);
    }
    else if (list[mid] < key)
    {
        binary_search(list, mid + 1, hi, key);
    }
}
int search_k(int a[],int l, int h,int size)
{
	int mid = (l + h )/2;
    printf("%d %d %d\n",l,mid,h);
	
	if(a[(mid + 1)%size] < a[mid] && a[(mid - 1) % size] < a[mid])
	{
		return mid;	
	}
    else if(l == h && h == 0)
    {
        return -1;
    }
	else if(a[(mid + 1)%size] > a[mid] && a[(mid) % size] > a[h])
	{
		search_k(a,mid,h,size);
	}
	else
	{
		search_k(a,l,mid,size);
	}
	
}
int main() {
	
	//{5,6,7,8,9,10,2,3};//{3 ,4 , 5,6, 1, 2};
	int size   = 10;//6;
	int a[] = {11,2,3,4,5,6,7,8,9,10};//{9,13,16,18,19,23,28,31,37,42,0-4,0,2,5,7,8};
	printf("%d\n",search_k(a,0,size - 1,size) + 1);
	int b[] = {11,12,3,4,5,6,7,8,9,10};//{9,13,16,18,19,23,28,31,37,42,0-4,0,2,5,7,8};
	printf("%d\n",search_k(b,0,size - 1,size) + 1);
	int c[] = {11,12,13,4,5,6,7,8,9,10};//{9,13,16,18,19,23,28,31,37,42,0-4,0,2,5,7,8};
	printf("%d\n",search_k(c,0,size - 1,size) + 1);
	int d[] = {11,12,13,14,5,6,7,8,9,10};//{9,13,16,18,19,23,28,31,37,42,0-4,0,2,5,7,8};
	printf("%d\n",search_k(d,0,size - 1,size) + 1);
	int e[] = {11,12,13,14,15,6,7,8,9,10};//{9,13,16,18,19,23,28,31,37,42,0-4,0,2,5,7,8};
	printf("%d\n",search_k(e,0,size - 1,size) + 1);
	int f[] = {11,12,13,14,15,16,7,8,9,10};//{9,13,16,18,19,23,28,31,37,42,0-4,0,2,5,7,8};
	printf("%d\n",search_k(f,0,size - 1,size) + 1);
	int g[] = {11,12,13,14,15,16,17,8,9,10};//{9,13,16,18,19,23,28,31,37,42,0-4,0,2,5,7,8};
	printf("%d\n",search_k(g,0,size - 1,size) + 1);
	int h[] = {11,12,13,14,15,16,17,18,9,10};//{9,13,16,18,19,23,28,31,37,42,0-4,0,2,5,7,8};
	printf("%d\n",search_k(h,0,size - 1,size) + 1);
	int i[] = {11,12,13,14,15,16,17,18,19,10};//{9,13,16,18,19,23,28,31,37,42,0-4,0,2,5,7,8};
	printf("%d\n",search_k(i,0,size - 1,size) + 1);
	int j[] = {11,12,13,14,15,16,17,18,19,20};//{9,13,16,18,19,23,28,31,37,42,0-4,0,2,5,7,8};
	printf("%d\n",search_k(j,0,size - 1,size) + 1);

int v;
	int k[] = {11,12,13,14,5,6,7,8,9,10};//{9,13,16,18,19,23,28,31,37,42,0-4,0,2,5,7,8};
	 v =search_k(k,0,size - 1,size);
     int lfound,rfound ;
     lfound = binary_search(k,0,v,6);
     rfound = binary_search(k,v+1,size,6);
     if(lfound != -1)
     {
        printf("l%d\n",lfound);
     }
     else if(rfound != -1)
     {
        printf("r%d\n",rfound);
     }
     else
     {
        printf("element not found");
     }
     lfound = binary_search(k,0,v,114);
     rfound = binary_search(k,v+1,size,114);
     if(lfound != -1)
     {
        printf("l%d\n",lfound);
     }
     else if(rfound != -1)
     {
        printf("r%d\n",rfound);
     }
     else
     {
        printf("element not found");
     }
     lfound = binary_search(k,0,v,10);
     rfound = binary_search(k,v+1,size,10);
     if(lfound != -1)
     {
        printf("l%d\n",lfound);
     }
     else if(rfound != -1)
     {
        printf("r%d\n",rfound);
     }
     else
     {
        printf("element not found");
     }
     lfound = binary_search(k,0,v,11);
     rfound = binary_search(k,v+1,size,11);
     if(lfound != -1)
     {
        printf("l%d\n",lfound);
     }
     else if(rfound != -1)
     {
        printf("r%d\n",rfound);
     }
     else
     {
        printf("element not found");
     }
     lfound = binary_search(k,0,v,14);
     rfound = binary_search(k,v+1,size,14);
     if(lfound != -1)
     {
        printf("l%d\n",lfound);
     }
     else if(rfound != -1)
     {
        printf("r%d\n",rfound);
     }
     else
     {
        printf("element not found");
     }
     lfound = binary_search(k,0,v,5);
     rfound = binary_search(k,v+1,size,5);
     if(lfound != -1)
     {
        printf("l%d\n",lfound);
     }
     else if(rfound != -1)
     {
        printf("r%d\n",rfound);
     }
     else
     {
        printf("element not found");
     }
	return 0;
}
