/* PART1 Chapter8 연습문제 4
1부터 100까지 수 중에서 홀수만 출력하는 프로그램을 작성하세요. 반복문의 경우에는 for문을 사용하고,
1부터 100까지 증가하는 숫자 중 짝수의 출력을 방지하기 위해 continue를 이용하세요.
*/
#include <stdio.h>
int main(){
    for(int i=0;i<100;i++){
        if((i+1)%2 == 1){
            printf("%d ",i+1);
        }
        else
            continue;
    }

    printf("\n");
    return 0;
}