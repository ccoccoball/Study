#pragma warning(disable:4996)
#include <stdio.h>
typedef enum _Area { MOK = 1, BONG = 2, KANGBUK = 3, DANG = 4, DRAGON = 5, JUNG = 6, CHUN = 7, SUNG = 8, NONE = 9 } Area;
int main(void)
{
	Area area = MOK;
	int food = 0;

	printf("\n");
	printf("                                                             \n");
	printf("                                 ! :''                       \n");
	printf("                               ,;    I^  ^                   \n");
	printf("                              !      `,,,I                   \n");
	printf("                           ^,^        `  ^;,^^I              \n");
	printf("                          ;`       .^..       ^^             \n");
	printf("                         ;` ....    ^        ^ :^^.          \n");
	printf("                    `^^^,.`.`  ^``.^        ^     ;^`        \n");
	printf("                    ^^        ^.^`  .     .`        l        \n");
	printf("            .^       l       .`  `.^`    `^       ^,^        \n");
	printf("      :^^, ;^:i^^   `^      `.     `     ^       !           \n");
	printf("     :,`:;:    I;~ii-        ^  ..`^^..``^`      ^^          \n");
	printf("      l>^:!    ^l   >, .``..`^      `      ^     i;          \n");
	printf("  ^I>!; ^;;!^  .!   :~^      ^^;:^,: 6      ^ `   I          \n");
	printf("      I^ .:;    _  ,^,:::.  :^^,   I.      `` .`  I:,,^      \n");
	printf("        .  ``^,: <:   ^^;:^,,      ;^;..   `   ````    ,^^,` \n");
	printf("         +;^+<;,^;,    ,:`` 1, 2, 3`.:  . ,..             `;:\n");
	printf("          ^^``^.^:,   ; 7 :;       .;;..^.  `            ,;  \n");
	printf("           ii.    !   !: ^ ^^``..^ 4  ^      ``   ...`.^  l  \n");
	printf("            .  ^ ^I^,<. ...`^ .`^.`.,.`^``   .^.`.       !   \n");
	printf("`;           ^^ ,:`,^:>:i^ .^:`  ``      ^ ``    .`      l   \n");
	printf(" <,I   ^!!^ !;; < :, . < ^   ^ `  ``.  5  .^     `       l   \n");
	printf(" `I,!::      .  I;::~           `...`.     ``    ^ .    ;^   \n");
	printf("      ^>+         ^,i,         .` .``        `^   ..`;.l     \n");
	printf("          `; ;  I    l         `...^. `` `.`.``.`    I.      \n");
	printf("                      ,;   .`..`   ,           `:;^;,        \n");
	printf("                       ^~` .        ^   8    `,,             \n");
	printf("                         I!        ;,^^    .::               \n");
	printf("                          ?<;^^^^^^   .,^;:`                 \n");
	printf("                                         .                   \n");
	printf("\n");
	/* 사용자에게 정보 입력 받기 */
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("어느 지역의 정보를 원하시나요?(숫자를 입력해주세요)\n");
	printf("\n1.목동 2.도봉구 3.강북구 4.분당\n5.용인 6.의정부 7.부천 8.안성\n9.끝내기\n선택: ");
	scanf("%d", &area);
	printf("\n");
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("무슨 종류의 음식을 원하시나요?(숫자를 입력해주세요)\n");
	printf("\n11.한식 12.중식 13.일식 14.양식\n");
	printf("선택: ");
	scanf("%d", &food);

	switch (area)
	{
		/* 목동을 선택했을 경우 */
	case MOK:
		printf("\nㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
		printf("선택하신 목동 맛집입니다!");

		if (food == 11)
		{
			printf("\n\n1. 목동역 사또닭갈비");
			printf("\n구글맵에서 찾아보기: https://goo.gl/maps/djj7szojiPbE6ve66");
			printf("\n\n2. 주순희찌개마을");
			printf("\n구글맵에서 찾아보기: https://goo.gl/maps/47ro9xoYkY8Kvc1p9");
			printf("\n\n맛있는 하루 보내세요^ㅁ^!\n\n");
			break;
		}
		if (food == 12)
		{
			printf("\n\n1. 목동역 금석궁");
			printf("\n구글맵에서 찾아보기: https://goo.gl/maps/GQALZCLbwwWQbq1j7");
			printf("\n\n2. 목동역 징차이짜장");
			printf("\n구글맵에서 찾아보기: https://goo.gl/maps/3t7YvvA2NGRitnLj8");
			printf("\n\n맛있는 하루 보내세요^ㅁ^!\n\n");
			break;
		}
		if (food == 13)
		{
			printf("\n\n1. 목동역 하나미");
			printf("\n구글맵에서 찾아보기: https://goo.gl/maps/hVrzLNptqruXVXqy6");
			printf("\n\n2. 목동역 밥초");
			printf("\n구글맵에서 찾아보기: https://goo.gl/maps/6TK9jF9AVvysL13B8");
			printf("\n\n맛있는 하루 보내세요^ㅁ^!\n\n");
			break;
		}
		if (food == 14)
		{
			printf("\n\n1. 서가앤쿡");
			printf("\n구글맵에서 찾아보기: https://goo.gl/maps/5w22oM58dogaFJvKA");
			printf("\n\n2. 발산역 도쿄 파스타");
			printf("\n구글맵에서 찾아보기: https://goo.gl/maps/ATTqvFw1xp8sVjzE6");
			printf("\n\n맛있는 하루 보내세요^ㅁ^!\n\n");
			break;
		}
		/* 도봉구를 선택했을 경우 */
	case BONG:
		printf("\nㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
		printf("선택하신 도봉구 맛집입니다!");

		if (food == 11)
		{
			printf("\n\n1. 소문난 보배곱창");
			printf("\n구글맵에서 찾아보기: https://goo.gl/maps/BDYLhxHVLq3asLEL9");
			printf("\n\n2. 흥부네 한방족발");
			printf("\n구글맵에서 찾아보기: https://goo.gl/maps/DQaVxuLheSXEPqap6");
			printf("\n\n맛있는 하루 보내세요^ㅁ^!\n\n");
			break;
		}
		if (food == 12)
		{
			printf("\n\n1. 미각");
			printf("\n구글맵에서 찾아보기: https://goo.gl/maps/BnMS324eoHtgF8X67");
			printf("\n\n2. 요리왕");
			printf("\n구글맵에서 찾아보기: https://goo.gl/maps/87wENbvz6SJ7NpK36");
			printf("\n\n맛있는 하루 보내세요^ㅁ^!\n\n");
			break;
		}
		if (food == 13)
		{
			printf("\n\n1. 스시혼");
			printf("\n구글맵에서 찾아보기: https://goo.gl/maps/5BwNbF9tAhSp4mnWA");
			printf("\n\n2. 사이코우스시");
			printf("\n구글맵에서 찾아보기: https://goo.gl/maps/6H1GSf3U9dx5VZWaA");
			printf("\n\n맛있는 하루 보내세요^ㅁ^!\n\n");
			break;
		}
		if (food == 14)
		{
			printf("\n\n1. 노말키친");
			printf("\n구글맵에서 찾아보기: https://goo.gl/maps/ispf9NDbK4CPcwrD9");
			printf("\n\n2. 맘즈무라 돈까스");
			printf("\n구글맵에서 찾아보기: https://goo.gl/maps/8uqUZZk3yEP4gNtm8");
			printf("\n\n맛있는 하루 보내세요^ㅁ^!\n\n");
			break;
		}

		/* 강북구를 선택했을 경우 */
	case KANGBUK:
		printf("\nㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
		printf("선택하신 강북구 맛집입니다!");

		if (food == 11)
		{
			printf("\n\n1. 이설 함흥냉면");
			printf("\n구글맵에서 찾아보기: https://goo.gl/maps/4mS4j2zSUMNbfBXa9");
			printf("\n\n2. 착한식당");
			printf("\n구글맵에서 찾아보기: https://goo.gl/maps/TnqnKR5qH428N95W7");
			printf("\n\n맛있는 하루 보내세요^ㅁ^!\n\n");
			break;
		}
		if (food == 12)
		{
			printf("\n\n1. 스타짬뽕");
			printf("\n구글맵에서 찾아보기: https://goo.gl/maps/HF7EtLnmidRrw4EE8");
			printf("\n\n2. 연화 양꼬치");
			printf("\n구글맵에서 찾아보기: https://goo.gl/maps/vHRwXXuheKGnjTHK9");
			printf("\n\n맛있는 하루 보내세요^ㅁ^!\n\n");
			break;
		}
		if (food == 13)
		{
			printf("\n\n1. 산책");
			printf("\n구글맵에서 찾아보기: https://goo.gl/maps/iHduwwqV1cf2yXW36");
			printf("\n\n2. 상미 규카츠");
			printf("\n구글맵에서 찾아보기: https://goo.gl/maps/URjoEMyWBJvUEuji7");
			printf("\n\n맛있는 하루 보내세요^ㅁ^!\n\n");
			break;
		}
		if (food == 14)
		{
			printf("\n\n1. 호야");
			printf("\n구글맵에서 찾아보기: https://goo.gl/maps/EwJPBSJvJhX5wqpk9");
			printf("\n\n2. 안녕 돈까스");
			printf("\n구글맵에서 찾아보기: https://goo.gl/maps/MVfRLfbP49T2n6pQ7");
			printf("\n\n맛있는 하루 보내세요^ㅁ^!\n\n");
			break;
		}

		/* 분당을 선택했을 경우 */
	case DANG:
		printf("\nㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
		printf("선택하신 분당 맛집입니다!");

		if (food == 11)
		{
			printf("\n\n1. 봄날에 청국장");
			printf("\n구글맵에서 찾아보기: https://goo.gl/maps/7N1tD28JPEpUitJN6");
			printf("\n\n2. 일면식");
			printf("\n구글맵에서 찾아보기: https://goo.gl/maps/U5xHYB9TmeFBidji6");
			printf("\n\n맛있는 하루 보내세요^ㅁ^!\n\n");
			break;
		}
		if (food == 12)
		{
			printf("\n\n1. 니하오");
			printf("\n구글맵에서 찾아보기: https://goo.gl/maps/kLGuLZsTdsy5JJzD7");
			printf("\n\n2. 연경");
			printf("\n구글맵에서 찾아보기: https://goo.gl/maps/z3zvrzMXcACcxNv78");
			printf("\n\n맛있는 하루 보내세요^ㅁ^!\n\n");
			break;
		}
		if (food == 13)
		{
			printf("\n\n1. 쏘렐라");
			printf("\n구글맵에서 찾아보기: https://goo.gl/maps/dDojcyLPrgjk2jZ9A");
			printf("\n\n2. 피맥컴퍼니");
			printf("\n구글맵에서 찾아보기: https://goo.gl/maps/D8tK1TG1EjzhrdKT7");
			printf("\n\n맛있는 하루 보내세요^ㅁ^!\n\n");
			break;
		}
		if (food == 14)
		{
			printf("\n\n1. 맛있는 초밥집");
			printf("\n구글맵에서 찾아보기: https://goo.gl/maps/zskG3rD6wN9mTFkG7");
			printf("\n\n2. 카츄마마");
			printf("\n구글맵에서 찾아보기: https://goo.gl/maps/8sjdKra4p13xnAgf8");
			printf("\n\n맛있는 하루 보내세요^ㅁ^!\n\n");
			break;
		}

		/* 용인을 선택했을 경우 */
	case DRAGON:
		printf("\nㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
		printf("선택하신 용인 맛집입니다!");

		if (food == 11)
		{
			printf("\n\n1. 큰마당 감자탕");
			printf("\n구글맵에서 찾아보기: https://goo.gl/maps/e6bNcRYx2ex8wCiu9");
			printf("\n\n2.양부자 훔친 뒷고기");
			printf("\n구글맵에서 찾아보기: https://goo.gl/maps/mMXAcGfnJkETCPBK9");
			printf("\n\n맛있는 하루 보내세요^ㅁ^!\n\n");
			break;
		}
		if (food == 12)
		{
			printf("\n\n1. 드래곤 짬뽕");
			printf("\n구글맵에서 찾아보기: https://goo.gl/maps/qegxVwXxG9p3Jufz7");
			printf("\n\n2. 도원");
			printf("\n구글맵에서 찾아보기: https://goo.gl/maps/ncSPzPFRsSRKYSBy8");
			printf("\n\n맛있는 하루 보내세요^ㅁ^!\n\n");
			break;
		}
		if (food == 13)
		{
			printf("\n\n1. 오 이탈리안");
			printf("\n구글맵에서 찾아보기: https://goo.gl/maps/UvV7vaFa6caQguAL6");
			printf("\n\n2. 제이콥스");
			printf("\n구글맵에서 찾아보기: https://goo.gl/maps/A6ozwg3CDKqXj5Wx7");
			printf("\n\n맛있는 하루 보내세요^ㅁ^!\n\n");
			break;
		}
		if (food == 14)
		{
			printf("\n\n1. 조은 스시");
			printf("\n구글맵에서 찾아보기: https://goo.gl/maps/pAyBNUmoj6PffknA9");
			printf("\n\n2. 오와스시");
			printf("\n구글맵에서 찾아보기: https://goo.gl/maps/x7S6Xzb3ifsNWdUr5");
			printf("\n\n맛있는 하루 보내세요^ㅁ^!\n\n");
			break;
		}

		/* 의정부를 선택했을 경우 */
	case JUNG:
		printf("\nㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
		printf("선택하신 의정부 맛집입니다!");

		if (food == 11)
		{
			printf("\n\n1. 착한낙지");
			printf("\n구글맵에서 찾아보기: https://goo.gl/maps/3A1DJ8Kg3DW1Xha78");
			printf("\n\n2. 솔가원");
			printf("\n구글맵에서 찾아보기: https://goo.gl/maps/3oXnpcmT25qJBxpC7");
			printf("\n\n맛있는 하루 보내세요^ㅁ^!\n\n");
			break;
		}
		if (food == 12)
		{
			printf("\n\n1. 지동관");
			printf("\n구글맵에서 찾아보기: https://goo.gl/maps/mRhCCQSMR93ki1qp8");
			printf("\n\n2. 젠틀차이나");
			printf("\n구글맵에서 찾아보기: https://goo.gl/maps/d72u4KqETWoom8CJ6");
			printf("\n\n맛있는 하루 보내세요^ㅁ^!\n\n");
			break;
		}
		if (food == 13)
		{
			printf("\n\n1. 청담");
			printf("\n구글맵에서 찾아보기: https://goo.gl/maps/f5R57JPx48SRfEZb8");
			printf("\n\n2. 스타가츠");
			printf("\n구글맵에서 찾아보기: https://goo.gl/maps/FMzqyGXeoMrm8i7j9");
			printf("\n\n맛있는 하루 보내세요^ㅁ^!\n\n");
			break;
		}
		if (food == 14)
		{
			printf("\n\n1. 스테이크 레이브");
			printf("\n구글맵에서 찾아보기: https://goo.gl/maps/1HgqPtfD5HK57Aaa6");
			printf("\n\n2. 까르보네");
			printf("\n구글맵에서 찾아보기: https://goo.gl/maps/YRFkv6is4ZcLuvCHA");
			printf("\n\n맛있는 하루 보내세요^ㅁ^!\n\n");
			break;
		}

		/* 부천을 선택했을 경우 */
	case CHUN:
		printf("\nㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
		printf("선택하신 부천 맛집입니다!");

		if (food == 11)
		{
			printf("\n\n1. 곤드레밥집 중동점");
			printf("\n구글맵에서 찾아보기: https://goo.gl/maps/FC18NudX5am43zFM9");
			printf("\n\n2. 고주몽화로구이 중동점");
			printf("\n구글맵에서 찾아보기: https://goo.gl/maps/BHRZU54NqDmediY88");
			printf("\n\n맛있는 하루 보내세요^ㅁ^!\n\n");
			break;
		}
		if (food == 12)
		{
			printf("\n\n1. 중동짬뽕24시");
			printf("\n구글맵에서 찾아보기: https://goo.gl/maps/g8EyqnFkRbafJhKz9");
			printf("\n\n2. 베이징");
			printf("\n구글맵에서 찾아보기: https://goo.gl/maps/KTtZvhnnGSz8NW7b6");
			printf("\n\n맛있는 하루 보내세요^ㅁ^!\n\n");
			break;
		}
		if (food == 13)
		{
			printf("\n\n1. 칸지돈부리");
			printf("\n구글맵에서 찾아보기: https://goo.gl/maps/1wXnHF8FgRDgJG7c8");
			printf("\n\n2. 고메야");
			printf("\n구글맵에서 찾아보기: https://goo.gl/maps/tNRwvUm2nXSk7zGm7");
			printf("\n\n맛있는 하루 보내세요^ㅁ^!\n\n");
			break;
		}
		if (food == 14)
		{
			printf("\n\n1. 크라이치즈버거 부천대점");
			printf("\n구글맵에서 찾아보기: https://goo.gl/maps/AtchEJctc2381kZA9");
			printf("\n\n2. 아띠오아나폴리 핏제리아 부천2호점");
			printf("\n구글맵에서 찾아보기: https://goo.gl/maps/Hi2YoFP6mbLtJd7T7");
			printf("\n\n맛있는 하루 보내세요^ㅁ^!\n\n");
			break;
		}

		/*안성 선택했을 경우 */
	case SUNG:
		printf("\nㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
		printf("선택하신 안성 맛집입니다!");

		if (food == 11)
		{
			printf("\n\n1. 장터 국밥");
			printf("\n구글맵에서 찾아보기: https://goo.gl/maps/kSXY1JuCC8t34w54A");
			printf("\n\n2. 소문난 감자탕");
			printf("\n구글맵에서 찾아보기: https://goo.gl/maps/EQbu3H8LAdzuRTpR7");
			printf("\n\n맛있는 하루 보내세요^ㅁ^!\n\n");
			break;
		}
		if (food == 12)
		{
			printf("\n\n1. 루차이");
			printf("\n구글맵에서 찾아보기: https://goo.gl/maps/BxghMALGfx6MAN3S7");
			printf("\n\n2. 등초 마라탕");
			printf("\n구글맵에서 찾아보기: https://goo.gl/maps/ejQqxCiwF7GraNfr9");
			printf("\n\n맛있는 하루 보내세요^ㅁ^!\n\n");
			break;
		}
		if (food == 13)
		{
			printf("\n\n1. 마로니에");
			printf("\n구글맵에서 찾아보기:https://goo.gl/maps/LZCsDYUgM1BxTQBe8");
			printf("\n\n2. 스시대장");
			printf("\n구글맵에서 찾아보기: https://goo.gl/maps/1Xjg6Atpek3gZQVa6");
			printf("\n\n맛있는 하루 보내세요^ㅁ^!\n\n");
			break;
		}
		if (food == 14)
		{
			printf("\n\n1. 한스델리");
			printf("\n구글맵에서 찾아보기: https://goo.gl/maps/Z3eDMaq3q2LVfnJ8A");
			printf("\n\n2. 엘불리");
			printf("\n구글맵에서 찾아보기: https://goo.gl/maps/PssUvZkLJXfKq8sZ7");
			printf("\n\n맛있는 하루 보내세요^ㅁ^!\n\n");
			break;
		}
	case NONE:
		return 0;
	}

	return 0;
}