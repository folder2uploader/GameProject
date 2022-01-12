#include <stdio.h>
#include <string.h>
struct Specie {
	char name;
	int i;
	int j;
	long int Energy;
	int EnergyPerMove;
	int EnergyPerMating;
	int Attack;
	int Defense;
	int Heaven;
	int Alive;
};
struct Food {
	int Energy;
	int i;
	int j;
};

int charToInt(char c){
	int num = 0;
	num = c - '0'; 					// turns character into an integer
	return num;
}

int main() {
	
	int x,y,n,m,i,j,end;
	long int energy;
	char word;
	
	printf("Enter The Size Of The Map: ");
	scanf("%d",&m);
	char Map[m][m];
	for(x=0;x<m;x++) { 						// makes the map
		for(y=0;y<m;y++) {
			Map[x][y] = '.';
		}
	}
	
	for(x=0;x<m;x++) {
		for(y=0;y<m;y++) {
			printf("%c	",Map[x][y]);		// prints the map
		}
		printf("\n\n");
	}
	
	printf("Enter The Amount Of Blocked Rooms: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++) {
		printf("Enter The Location Of The Blocked Room In X Y Format: ");
		scanf("%d %d",&x,&y);
		Map[x][y] = 'B';
	}
	printf("Enter The Amount Of Heavens: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++) {
		printf("Enter The Location Of The Heaven In X Y Format: ");
		scanf("%d %d",&x,&y);
		Map[x][y] = 'H';
	}
	
	return 0;
}

