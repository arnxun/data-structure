#include <stdio.h>

typedef int ElemType;
typedef struct SSTable
{
    ElemType *elem;
    int TableLen;
} SSTable;

typedef struct SeqList
{
    ElemType *elem;
    int TableLen;
} SeqList;


int Search_Seq();

int main()
{
    return 0;
}

//顺序查找
int Search_Seq(SSTable ST, ElemType key)
{
    int i;
    ST.elem[0] = key; //哨兵
    for (i=ST.TableLen; ST.elem[i] != key; i--);
    return i;
}

// 二分查找/折半查找， 仅仅适用于有序的顺序表
int Binary_Search(SeqList L, ElemType key)
{
    int low=0, high=L.TableLen, mid;
    while (low < high)
    {
        mid = (low + high) / 2;
        if (L.elem[mid] == key)
        {
            return mid;
        }
        else if (L.elem[mid] > key)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }        
    }
    return -1;  
}