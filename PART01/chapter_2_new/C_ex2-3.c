/* PART1 Chapter2 연습문제 3
직사각형의 가로와 세로 길이를 입력받아서 넓이를 구하는 프로그램을 작성하려 합니다.
다음 코드에서 빈칸을 채우세요.
#include <stdio.h>

int main(){

    int a, b;

    printf("가로 길이를 입력하세요 : \n");
    ㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁ
    printf("세로 길이를 입력하세요 : \n");
    ㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁ
    
    printf("직사각형의 넓이는 %d입니다.\n",a*b);

    
    return 0;
}
변형 - 0 이하의 수가 입력되기 전까지 계속 입력받기
*/
#include <stdio.h>

int main(){

    int a, b;

    while(1){
    printf("가로길이와 세로길이를 입력하세요(0 입력시 종료): \n");
    scanf("%d %d",&a,&b);

    if(((a>0) && (b>0)) == 0){
        break;
    }
    printf("직사각형의 넓이는 %d입니다.\n",a*b);
    }    
    
    return 0;
}
