# Dev‑C++ 使用 MinGW 编译器，不需要配置 json，**编辑‑编译‑运行‑调试**是图形按钮操作。
# 功能包含：变量、数组、函数、指针、结构体，用来熟悉 Dev‑C++ 全套操作。

#include <stdio.h>

typedef struct Student
{
    int id;
    char name[20];
    double score;
}Student;

//指针修改结构体分数
void setScore(Student *s, double sc)
{
    s->score = sc;
}

//求数组平均值
double avg(int arr[], int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return (double)sum / n;
}

int main(void)
{
    int nums[4] = {60,72,85,93};
    Student st = {101,"Tom",78.5};

    printf("数组数据：");
    for(int i=0;i<4;i++)
    {
        printf("%d ",nums[i]);
    }
    double a = avg(nums,4);
    printf("\n数组平均值：%.2f\n",a);

    printf("\n学生：id=%d name=%s score=%.1f\n",st.id, st.name, st.score);
    setScore(&st,90.0);
    printf("指针修改后分数：%.1f\n",st.score);

    printf("\n请输入一个整数：");
    int x;
    scanf("%d",&x);
    printf("你输入的是：%d\n",x);

    system("pause");   // 暂停，防止窗口闪退
    return 0;
}