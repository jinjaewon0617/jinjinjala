#include <stdio.h>
main() {

  int a;
  printf("1번 오렌지, 2번 레몬, 3번 복숭아, 4번 망고\n");
  printf("너가 좋아하는 과일을 번호로 선택해봐라!");
  scanf("%d", &a);
  
  if(a == 1)
    printf("오렌지를 좋아하는구나!");
    
  else if(a == 2)
    printf("레몬을 좋아하는구나!");

   else if(a == 3)
    printf("복숭아를 좋아하는구나!");

   else if(a ==4)
    printf("망고를 좋아하는구나!");

  else
     printf("넌 과일 싫어하냐?");

  printf("좋아하는 과일조사 끝!");

}