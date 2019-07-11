#include <stdio.h>
#define Title_MAX 40
#define Movie_Max 5
struct film{
char title[Title_MAX];
int rating;
};

int main(int argc, const char *argv[])
{
	struct film movie[Movie_Max];
	int i = 0;
	printf("please enter title&rating\n");
	for(i = 0;i < Movie_Max;i++)
	{
		printf("please %d movie title\n",i+1);
		scanf("%s",&movie[i].title[0]);
		printf("plese %d movie rating\n",i+1);
		scanf("%d",&movie[i].rating);
	}

	for(i = 0;i < Movie_Max;i++)
	{
		printf("%d movie title:%s\n",i+1,movie[i].title);
		printf("%d movie rating:%d\n",i+1,movie[i].rating);
	}
	return 0;
}
