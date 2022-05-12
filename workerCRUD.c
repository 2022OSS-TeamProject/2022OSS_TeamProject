#include "worker.h"
    
int selectWorker(){
    int Worker;
    printf("\n****** 출퇴근 관리 시스템 ******\n1. 직원 조회\n2. 직원 추가\n3. 직원 수정\n4. 직원 삭제\n5. 직원 저장\n6. 직원 찾기 (이름)\n7. 직원 찾기 (직급)\n8. 직원 찾기 (총 근무 시간)\n0. 종료\n");
    printf("\n=> 원하는 메뉴는? ");
    scanf("%d", &Worker);
    return Worker;
}.   
       
void readWorker(worker s) {
    printf("\t%s \t\t%s \t\t%d시 %2d분 \t%d시 %2d분\t약 %d시간\n", s.name, s.position, s.iHour, s.iMin, s.oHour, s.oMin, s.totalWorked);
}

void listWorker(worker *s, int count) {
    printf("\n********* 직원 출근 기록 **********\n");
    printf("\n번호\t직원이름\t직원직급\t직원 출근 시간\t직원 퇴근 시간\t직원 총 근무 시간(시간만 계산)\n");
    printf("=============================================================================================\n");
    int a=count;
    for (int i=0; i<count; i++) {
        if (s[i].iHour==-1 || s[i].oHour==-1) {
                a--;
                continue;
        }
        printf("%2d", i+1);
        readWorker(s[i]);
    }
    printf("\n총 %d명의 직원이 있습니다.\n", a);
}

int selectDataNo (worker *s, int count) {
    int no;
    listWorker(s, count);
    printf("번호는 (취소 : 0)? ");
    scanf("%d", &no);
    return no;
}

int createWorker(worker *s) {
    printf("\n직원 이름 ? ");
    scanf(" %[^\n]s", s->name);
    printf("직원 직급 ? ");
    scanf(" %[^\n]s", s->position);
    printf("출근 시 ? ");
    scanf(" %d", &s->iHour);
    printf("출근 분 ? ");
    scanf(" %d", &s->iMin);
    printf("퇴근 시 ? ");
    scanf(" %d", &s->oHour);
    printf("퇴근 분 ? ");
    scanf(" %d", &s->oMin);
    if (s->iMin>s->oMin) s->totalWorked=s->oHour-s->iHour-1;
    else s->totalWorked=s->oHour-s->iHour;
    return 1;
}

int updateWorker(worker* s) {
    printf("\n새 직원이름 ? ");
    scanf(" %[^\n]s", s->name);
    printf("새 직원 직급 ? ");
    scanf(" %[^\n]s", s->position);
    printf("새 출근 시 ? ");
    scanf(" %d", &s->iHour);
    printf("새 출근 분 ? ");
    scanf(" %d", &s->iMin);
    printf("새 퇴근 시 ? ");
    scanf(" %d", &s->oHour);
    printf("새 퇴근 분 ? ");
    scanf(" %d", &s->oMin);
    if (s->iMin>s->oMin) s->totalWorked=s->oHour-s->iHour-1;
    else s->totalWorked=s->oHour-s->iHour;
    printf("=> 직원 변경 완료 ! \n");
    return 1;
}

int deleteWorker(worker *s) {
    s->iHour=-1;
    s->oHour=-1;
    printf("=> 삭제됨!\n");
    return 1;
}
