#include<stdio.h>
int main()
{
	int score;
	printf("enterscore(0-100):");
	scanf("%d",&score);
	switch(score/10)
	{
		case 10:
			printf("grade:o");
			break;
			case 9:
				printf("grade:a");
				break;
				case 8:
					printf("grade:b");
					break;
					case 7:
						printf("grade:c");
						break;
						case 6:
							printf("grade:d");
							break;
							case 5:
								printf("grade:e");
								break;
								default:
									printf("grade:f");
									break;
				
	}
}
