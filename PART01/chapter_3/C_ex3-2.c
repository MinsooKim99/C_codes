/* PART1 Chapter3 연습문제 2
다음 시나리오에 맞게 코드의 빈칸을 채우세요.
-정민이는 과수원에서 아르바이트하고 돈을 받았습니다. 받은 돈으로 인터넷 쇼핑몰에서
청바지를 사려고 합니다. 청바지 하나를 고르고 구매 완료를 누르려고 했으나, 친구 현상이도
같은 청바지를 사겠다고 부탁을 했습니다. 현상이를 위해서 정민이는 청바지의 수량을 두 개로 하고
구매 완료를 눌렀습니다.
void main(){
    jean 이름의 변수 선언과 동시에 0으로 초기화
    jean의 수량을 1로 설정
    구매할 청바지 수량을 1 증가
    구매할 청바지 수량 출력
    printf("구매 완료 \n");
}
*/
#include <stdio.h>

void main(){
    int jean = 0;
    jean = 1;
    jean = jean + 1;
    printf("청바지 개수: %d\n",jean);
    printf("구매 완료 \n");
}