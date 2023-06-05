#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define CLASSMATE_NUM 22

char *name[CLASSMATE_NUM]={
"邹金岐",
"由长智",
"贺彦伟",
"闫中浩",
"巴永琦",
"胡炳昊",
"付德军",
"刘顺利",
"魏欧阳",
"刘新宇",
"李新宇",
"李卓欣",
"薛羽",
"燕鹏",
"焦天宇",
"王森",
"梁世豪",
"刘坤杭",
"郭聪",
"冯安琪",
"时云飞",
"钟明宏"};
int main()
{
	int numbers_now,numbers_needed=1,id,i,count;
    printf("****************************\n");
	printf("济南23051大家庭专属冤种生成器\n\n\n\n");
    if(numbers_needed>CLASSMATE_NUM)
    {
    	puts("Not so many classmates!");
    	exit(0);
	}
    printf("本次冤种结果为:\n");
    printf("\t人数\t班级排号\t姓名\n");
    
    int list[numbers_needed+1];
    list[0]=0;
    for(numbers_now=1;numbers_now<=numbers_needed;)
    {
    	srand((int)time(0));
	    id=rand()%CLASSMATE_NUM;
        if(id!=0)
        {
        	for(i=0,count=0;i<numbers_now;i++)
        	{
        		if(id!=list[i])
        			count++;
			}
			if(count==numbers_now)
			{
				list[numbers_now]=id;
				printf("\t%d\t%d\t\t%s\n\n",numbers_now,id,name[id-1]);
				numbers_now++;
			}
		}
    }
    printf("抽签结束,恭喜以上同学!!!\n\n\n\n") ; 
    getchar();
    getchar();
    getchar();
return 0; 
}

