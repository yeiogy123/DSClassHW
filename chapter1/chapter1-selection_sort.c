/*selection_sort*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define max_size 101
#define swap(x,y,t) ((t)=(x),(x)=(y),(y)=(t))
void sort(int [], int);
void main(void)
{
    int num,i,list[max_size];
    printf("enter the size of array\n");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {

        list[i]=rand()%1000;
        printf("%d\t",list[i]);
    }
    sort(list,num);
    printf("sort array\n");
    for(i=0;i<num;i++)
    {
        printf("%d",list[i]);
        printf("\n");
    }


}
void sort(int list[],int num)
{
    int i,j,min,temp;
    for(i=0;i<num-1;i++)
    {
        min=i;//第i個位置為最小值
        for(j=i+1;j<num;j++)
        if(list[j]<list[min])//如果最小值大於下一個位數
            min=j;//第J個位置為變成最小值
        swap(list[i],list[min],temp);//將第J帶入SWAP
    }
}
