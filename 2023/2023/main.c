#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n, m; //n个学生 m个科目
    while(scanf("%d %d", &n, &m) == 2 && n<=50 && m<=5){
        int score[50][5]; //n行m列
        for(int i=0; i<n; i++){ //处理输入
            for(int j=0; j<m; j++){
                scanf("%d", &score[i][j]);
            }
        }
        //计算每个学生的平均成绩
        double average_score_student[50];
        for(int i=0; i<n; i++){
            int sum_score_student = 0; //一个学生的所有科目的总成绩
            for(int j=0; j<m; j++){
                sum_score_student += score[i][j];
            }
            average_score_student[i] = (double)sum_score_student / m;
        }
        //计算每门课程的平均成绩
        double average_score_course[5];
        for(int j=0; j<m; j++){
            int sum_score_course = 0; //一个课程 所有学生的总成绩
            for(int i=0; i<n; i++){
                sum_score_course += score[i][j];
            }
            average_score_course[j] = (double)sum_score_course / n;
        }
        //计算各科成绩均大于等于平均成绩的学生数量
        int count_student = 0;
        for(int i=0; i<n; i++){  //先遍历每个学生再遍历科目
            int count_course = 0; //初始化该名学生符合条件的科目数量
            for(int j=0; j<m; j++){
                if(score[i][j] >= average_score_course[j]){
                    count_course++;
                }
            }
            if(count_course == m){
                count_student++;
            }
        }
        //输出n个学生的平均成绩
        for(int i=0; i<n; i++){
            printf("%.2lf ", average_score_student[i]);
        }
        printf("\n");
        //输出m个科目的平均成绩
        for(int j=0; j<m; j++){
            printf("%.2lf ", average_score_course[j]);
        }
        printf("\n");
        //输出各科成绩均大于等于平均成绩的学生数量
        printf("%d", count_student);
    }
    return 0;
}
//38840485    2023-08-28 14:08:22    Accepted    2023    31MS    1696K    1915 B    C    HanRain
