#include "worker.h"

int selectWorker(){
    int Worker;
    printf("\n****** 출퇴근 관리 시스템 ******\n1. 직원 조회\n2. 직원 추가\n3. 직원 수정\n4. 직원 삭제\n0. 종료\n");
    printf("\n=> 원하는 메뉴는? ");
    scanf("%d", &Worker);
    return Worker;
}

void readWorker(worker s) {
    printf("\t%s \t\t%s \t\t%d시 %2d분 \t%d시 %2d분\t약 %d시간", s.name, s.position, s.iHour, s.iMin, s.oHour, s.oMin, s.totalWorked);
}