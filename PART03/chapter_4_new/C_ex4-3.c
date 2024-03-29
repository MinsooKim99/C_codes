/* PART3 Chapter4 연습문제 3
다음은 malloc() 함수를 사용하여 메모리 공간을 동적으로 할당하는 것을 의미하는 프로그램입니다.
이 프로그램을 calloc()함수를 사용하여 다시 작성하세요.
변형 - 데이터 입력까지 받고 메모리 얼마나 썼는지 출력하기
*/
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
void ErrorHandling(char*);
void main(){
    int i, j, k;
    int* ip = NULL; char* cp = NULL; float* fp = NULL;

    printf("필요한 메모리 공간 : ");
    scanf("%d",&i);
    printf("저장 데이터 유형 (1)int, (2)char, (3)float : ");
    scanf("%d",&j);

    if(j==1){
        // ip = (int*)malloc(i*sizeof(int));        // malloc
        ip = (int*)calloc(i,sizeof(int));           // calloc
        printf("메모리 시작 주소 : %d \n",ip);
        printf("할당된 전체 메모리 공간 : %d바이트\n",i*sizeof(int));
        for(k=0;k<i;k++){
            printf("%d번째 데이터 입력: ",k+1);
            scanf(" %d",&ip[k]);
            printf("%d / %d\n",(k+1)*sizeof(int),_msize(ip));
        //  _msize() -> 포인터가 가리키는 메모리의 크기를 알려주는 함수
        }
        printf("입력한 데이터\n");
        for(k=0;k<i;k++){
            printf("%d ",ip[k]);
        }
        free(ip);
    }
    else if(j==2){
        // cp = (char*)malloc(i*sizeof(char));      // malloc
        cp = (char*)calloc(i,sizeof(char));         // calloc
        printf("메모리 시작 주소 : %d \n",cp);
        printf("할당된 전체 메모리 공간 : %d바이트\n",i*sizeof(char));
        for(k=0;k<i;k++){
            printf("%d번째 데이터 입력: ",k+1);
            scanf(" %c",&cp[k]);
            printf("%d / %d\n",(k+1)*sizeof(char),_msize(cp));
        //  _msize() -> 포인터가 가리키는 메모리의 크기를 알려주는 함수
        }
        printf("입력한 데이터\n");
        for(k=0;k<i;k++){
            printf("%c ",cp[k]);
        }
        free(cp);
    }
    else if(j==3){
        // fp = (float*)malloc(i*sizeof(float));    // malloc
        fp = (float*)calloc(i,sizeof(float));       // calloc
        printf("메모리 시작 주소 : %d \n",fp);
        printf("할당된 전체 메모리 공간 : %d바이트\n",i*sizeof(float));
        for(k=0;k<i;k++){
            printf("%d번째 데이터 입력: ",k+1);
            scanf(" %f",&fp[k]);
            printf("%d / %d\n",(k+1)*sizeof(int),_msize(fp));
        //  _msize() -> 포인터가 가리키는 메모리의 크기를 알려주는 함수
        }
        printf("입력한 데이터\n");
        for(k=0;k<i;k++){
            printf("%.2f ",fp[k]);
        }
        free(fp);
    }
    else
        printf("잘못된 입력 \n");
}
void ErrorHandling(char *message)
{
	fputs(message, stderr);
	fputc('\n', stderr);
	exit(1);
}