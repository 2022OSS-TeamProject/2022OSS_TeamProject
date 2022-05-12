#include <stdio.h>
#include <string.h>
     
typedef struct Worker{
    char name[20];       //직원의 이름
    char position[20];   //직원의 직급
    int iHour;           //직원 출입 시
    int iMin;            //직원 출입 분
    int oHour;           //직원 퇴근 시
    int oMin;            //직원 퇴근 분
    int totalWorked;     //직원 총 하루 근무시간 (시까지만 표출)
} worker;
   
int selectWorker();                               // 원하는 기능을 고르게 하는 함수 (기본 출력)
int selectDataNo(worker *s, int count);          // 함수 구현을 위해 특정 직원의 데이터 위치를 선정하기 위한 함수 (listWorker()로 보여주고 입력값을 받음)
void listWorker(worker *s, int count);            // readWorker()전에 삭제된 값을 제외한 직원을 알려주는 함수

int createWorker(worker *s);                      // 직원 생성 함수
void readWorker(worker s);                        // 삭제된 직원을 제외한 다른 직원들 출력
int deleteWorker(worker *s);                      // 특정 직원 삭제 함수
int updateWorker(worker* s);                      // 특정 직원 수정 함수

void saveData(worker *s, int count);              // 직원 데이터 값 파일 저장 함수
int loadData(worker *s, int count);               // 직원 데이터 걊 파일 불러오기 함수

void searchWorkerName(worker *s, int count);      // 직원 검색 기능 함수 (직원 이름)
void searchWorkerPosition(worker *s, int count);  // 직원 검색 기능 함수 (직원 직급)
void searchWorkerTotalTime(worker *s, int count); // 직원 검색 기능 함수 (직원 총 근무 시간)
