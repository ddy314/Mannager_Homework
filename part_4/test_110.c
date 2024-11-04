/*编写学生管理系统，其中学生的信息有姓名（汉语拼音，最多20个字符，长度21的字符数组），
性别（男/女，用1表示男，2表示女，整数）、生日（19850101（年月日），整数）、身高（以m为单位，实数），
还需要处理C语言、微积分两门课的成绩（整数），请编写程序实现功能：
输入学生的人数和每个学生的信息；输出每门课程的总平均成绩、最高分和最低分，以及获得最高分的学生的信息。
需要注意的是某门课程最高分的学生可能不只一人。
输入输出格式要求：
身高输出时保留两位小数，请按照例子中进行输出，请勿输出其他字符
例如：
输入：3 zhangsan 1 19910101 1.85 85 90 lisi 1 19920202 1.56 89 88 wangwu 2 19910303 1.6 89 90回车
输出：
C_average:87回车
C_max:89回车
lisi 1 19920202 1.56 89 88回车
wangwu 2 19910303 1.60 89 90回车
C_min:85回车
Calculus_average:89回车
Calculus_max:90回车
zhangsan 1 19910101 1.85 85 90回车
wangwu 2 19910303 1.60 89 90回车
Calculus_min:88回车*/
#include <stdio.h>

struct student
{
    char name[21];
    int gender;
    int birthday;
    float height;
    int score1;
    int score2;
};

typedef struct student Student;

int max(Student stu[], int n, int subject)
{
    int max = 0;
    if (subject == 1)
    {
        for (int i = 0; i < n; i++)
        {
            if (stu[i].score1 > max)
                max = stu[i].score1;
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (stu[i].score2 > max)
                max = stu[i].score2;
        }
    }
    return max;
}

int min(Student stu[], int n, int subject)
{
    int min = 100;
    if (subject == 1)
    {
        for (int i = 0; i < n; i++)
        {
            if (stu[i].score1 < min)
                min = stu[i].score1;
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (stu[i].score2 < min)
                min = stu[i].score2;
        }
    }
    return min;
}

int main()
{
    int n;
    scanf("%d", &n);
    Student stu[5];
    for (int i = 0; i < n; i++)
        scanf("%s %d %d %f %d %d",
              &stu[i].name, &stu[i].gender, &stu[i].birthday,
              &stu[i].height, &stu[i].score1, &stu[i].score2);
    int total1 = 0;
    int total2 = 0;
    for (int i = 0; i < n; i++)
    {
        total1 += stu[i].score1;
        total2 += stu[i].score2;
    }
    int C_average = total1 / n;
    int Calculus_average = total2 / n;
    int c_max = max(stu, n, 1);
    int c_min = min(stu, n, 1);
    int Calculus_max = max(stu, n, 2);
    int Calculus_min = min(stu, n, 2);
    printf("C_average:%d\n", C_average);
    printf("C_max:%d\n", c_max);
    for (int i = 0; i < n; i++)
    {
        if (stu[i].score1 == c_max)
            printf("%s %d %d %0.2f %d %d\n",
                   stu[i].name, stu[i].gender, stu[i].birthday, stu[i].height, stu[i].score1, stu[i].score2);
    }
    printf("C_min:%d\n", c_min);
    printf("Calculus_average:%d\n", Calculus_average);
    printf("Calculus_max:%d\n", Calculus_max);
    for (int i = 0; i < n; i++)
    {
        if (stu[i].score2 == Calculus_max)
            printf("%s %d %d %0.2f %d %d\n",
                   stu[i].name, stu[i].gender, stu[i].birthday, stu[i].height, stu[i].score1, stu[i].score2);
    }
    printf("Calculus_min:%d\n", Calculus_min);
    return 0;
}
