/* PART1 Chapter6 연습문제 5
다음 프로그램은 사용자에게 두 숫자를 입력 받아 나눗셈을
연산하는 프로그램 입니다. 프로그램의 문제점을 찾고 수정하세요.
#include <stdio.h>
int main(){
    int result;
    int input1;
    int input2;

    printf("input 2 numbers = ");
    scanf("%d %d",&input1, &input2);

    result = input1 / input2;
    printf("나눗셈 결과 = %d \n",result);

    return 0;
}
*/
#include <stdio.h>
int main(){
    double result;
    double input1;
    double input2;

    printf("input 2 numbers = ");
    scanf("%lf %lf",&input1, &input2);

    result = input1 / input2;
    printf("나눗셈 결과 = %.2lf \n",result);

    return 0;
}