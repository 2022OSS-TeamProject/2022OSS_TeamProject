#include "worker.h"

void saveData(worker *s, int count) {
    FILE *fp;
    fp=fopen("worker.txt", "wt");
    for (int i=0; i< count; i++) {
        if(s[i].iHour==-1 || s[i].oHour==-1) continue;
        fprintf(fp, "%s, %s, %d %d %d %d %d\n", s[i].name, s[i].position, s[i].iHour, s[i].iMin, s[i].oHour, s[i].oMin, s[i].totalWorked);
    }
    fclose(fp);
    printf("=> 저장됨! \n");    
}
              
int loadData(worker *s, int number) {
    int count=0, i=0;
    FILE *fp;
    fp=fopen("worker.txt", "rt");
    printf("=> 데이터 가져오는 중...\n");
    if (fp==NULL) {
        printf("=> 파일 없음 \n");
    }
    else {
    for (;i<number;i++) {
        fscanf(fp, " %[^,], %[^,], %d %d %d %d %d", s[i].name, s[i].position, &s[i].iHour, &s[i].iMin, &s[i].oHour, &s[i].oMin, &s[i].totalWorked);
        if (feof(fp)) break;
        count++;
    }
    printf("=> %d 명의 직원 정보를 읽었습니다!\n", count);
    }
    fclose(fp);
    return i;
}

void searchWorkerName(worker *s, int count) {
    int scnt=0;
    char search[20];
    printf("검색할 직원 이름? ");
    scanf(" %[^\n]s", search);
    printf("\n********* 직원 출근 기록 **********\n");
    printf("\n번호\t직원이름\t직원직급\t직원 출근 시간\t직원 퇴근 시간\t직원 총 근무 시간(시간만 계산)\n");
    printf("=============================================================================================\n");
    for (int i=0; i<count; i++) {
        if (s[i].iHour==-1) continue;
        if (strstr(s[i].name, search)) {
             printf("%2d", i+1);
            readWorker(s[i]);
            scnt++;
        }
    }
    printf("\n총 %d명의 직원이 있습니다.\n", scnt);
    if (scnt==0) printf("=> 검색된 데이터 없음!\n");
}   

void searchWorkerPosition(worker *s, int count){
    int scnt=0;
    char search[20];
    printf("검색할 직원 직급 ? ");
    scanf(" %[^\n]s", search);
    printf("\n********* 직원 출근 기록 **********\n");
    printf("\n번호\t직원이름\t직원직급\t직원 출근 시간\t직원 퇴근 시간\t직원 총 근무 시간(시간만 계산)\n");
    printf("=============================================================================================\n");
    for (int i=0; i<count; i++) {
        if (s[i].iHour==-1) continue;
        if (strstr(s[i].position, search)) {
            printf("%2d", i+1);
            readWorker(s[i]);
            scnt++;
        }
    }
    printf("\n총 %d명의 직원이 있습니다.\n", scnt);
    if (scnt==0) printf("=> 검색된 데이터 없음!\n");   
} 

void searchWorkerTotalTime(worker *s, int count){
    int scnt=0;
    int search;
    printf("검색할 직원 총 근무 시간? (시만 입력, 예) 10 입력 시 10:00~11:00까지 일한 사람들을 알려드립니다) ");
    scanf(" %d", &search);
    printf("\n********* 직원 출근 기록 **********\n");
    printf("\n번호\t직원이름\t직원직급\t직원 출근 시간\t직원 퇴근 시간\t직원 총 근무 시간(시간만 계산)\n");
    printf("=============================================================================================\n");
    for (int i=0; i<count; i++) {
        if (s[i].iHour==-1) continue;
        if (s[i].totalWorked==search) {
            printf("%2d", i+1);
            readWorker(s[i]);
            scnt++;
        }
    }
    printf("\n총 %d명의 직원이 있습니다.\n", scnt);
    if (scnt==0) printf("=> 검색된 데이터 없음!\n");
}
