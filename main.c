#include "worker.h"

int main(void){
    int n=50;
    worker sp[n];
    int count = 0;
    int a;
    int index=0;

    // count = loadData(sp, 50);
    // index = count;

    while (1){
        a = selectWorker();
        if (a == 0) break;
        if ( a == 1 || a == 3 || a == 4 || a == 5 || a == 6 || a == 7 || a == 8) {
           if (count==0) continue;
        }
        if (a == 1) {
            listWorker(sp, index);
        }
        else if (a == 2) {
                count += createWorker(&sp[index++]);
                #ifdef DEBUG
                printf("\nDEBUG MODE: Count added is: %d\n", count);
                #endif
        }
        else if (a == 3) {
            int no=selectDataNo(sp, index);
            if (no==0) {
                printf("=> 취소됨!\n");
                continue;
            }
            updateWorker(&sp[no-1]);
        }
        else if (a == 4) {
            int no=selectDataNo(sp, index);
            if (no==0) {
                printf("=> 취소됨!\n");
                continue;  
            }
            int deleteok;
            printf("정말로 삭제하시겠습니까? (삭제 : 1)");
            scanf("%d", &deleteok);
            if (deleteok == 1) {
                if (deleteWorker(&sp[no-1])) {
                        #ifdef DEBUG
                        printf("DEBUG MODE: Previous Count Number: %d\n", count);
                        #endif
                        count--;
                        #ifdef DEBUG
                        printf("DEBUG MODE: After Count Number: %d\n", count);
                        #endif
                }
            }
        }
        /*else if (a==5) {
            saveData(sp, index);
        }
        else if (a==6) {
            searchWorkerName(sp, count);
        }
        else if (a==7) {
            searchWorkerPosition(sp, count);
        }
        else if (a==8) {
            searchWorkerTotalTime(sp, count);
        }*/
    }
    printf("종료됨!\n");
    return 0;
}
