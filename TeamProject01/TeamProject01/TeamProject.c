#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	char name[10];
	int height, weight;
	float fatness;		//비만도


	//1. 사용자 정보 입력받기
	printf("\n*******************\n");				//구분선
	printf("안녕하세요!\n일상 운동 루틴 추천 프로그램을 이용해주셔서 감사합니다.\n");
	printf("사용자의 이름을 입력해주세요. : ");
	scanf("%s", name);

	//1-1. 신체 정보 입력(키, 몸무게)
	printf("\n*******************\n");				//구분선
	printf("반갑습니다, %s님!\n", name);				//환영문구
	printf("신체 정보를 입력해주세요.\n");

	printf("키는 얼마입니까?(cm) : ");
	scanf("%d", &height);

	printf("몸무게는 얼마입니까?(kg) : ");
	scanf("%d", &weight);


	//1-2. 기록하기(텍스트 파일로 저장하기  <-- 나중에 불러와야할 때)

	//----------------------------------------------------------------------------
	//2. 운동 루틴 추천하기
	// --> 비만도 계산
	
	//카우프 지수에 따르면 "비만도" = 체중(kg) / (신장(m) * 신장(m))
	fatness = (float)weight / ((float)height * 0.01 * (float)height * 0.01);	//미터값을 기준으로 하기 때문에 키에 각각 0.01을 곱해줌.

	//18.5 이하 저체중, 18.5~22.9 정상, 23.0~24.9 과체중, 25 이상 비만
	if (fatness >= 23.0) {
		//2-1. 비만, 또는 과체중이라면?
		//  --->체중 감량 위주의 운동 루틴 추천

		//과체중일 경우와, 비만일 경우를 나눠서 표시함.
		if (fatness < 24.0) {
			printf("\n과체중입니다. 건강에 유의해주세요.\n");
		}
		else {
			printf("\n비만입니다. 건강에 유의해주세요.\n");
		}


	}
	else if (fatness >= 18.5 && fatness <= 22.9) {
		//2-2. 정상 체중이라면?
		//  --->관심 있는 목표 설정 후 운동 루틴 추천

		printf("\n정상체중입니다.\n");

	}
	else if (fatness <= 18.5) {
		//2-3. 저체중이라면?
		//  --->근육 증량 위주의 운동 루틴 추천
		printf("\n저체중입니다. 건강에 유의해주세요.\n");


	}

	//2-4. 기록(신체정보 변화, 및 개인 만족도 측정)


	//----------------------------------------------------------------------------
	//etc.(그 외: 필수 구현 부분은 아님)
	//3. 누적 기록 화면에 출력하기
	//3-1. 이전 기록이 존재하면, 막대그래프 형식으로 출력하기




	return 0;
}