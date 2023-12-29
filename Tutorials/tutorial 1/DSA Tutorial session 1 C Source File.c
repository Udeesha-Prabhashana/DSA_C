#include<stdio.h>
void main()
{
	int arr1[]={67,75,87,65,55,78,87,95,56,83};
	int arr2[]={98,45,25,87,92,45,34,78,82,73};
	
	int totalarr1,totalarr2,i;
	float avg1,avg2;
	for(i=0;i<10;i++){
		totalarr1 =totalarr1 + arr1[i];
	}
	for(i=0;i<10;i++){
		totalarr2=totalarr2 + arr2[i];
	}
	    avg1=totalarr1/10.0;
	    avg2=totalarr2/10.0;
	    printf("totalarr1= %d\n",totalarr1);
	    printf("averagearr1= %.1f\n\n",avg1);
	    printf("totalarr2= %d\n",totalarr2);
	    printf("averagearr2= %.1f\n\n",avg2);
	    
	    int SubjectMarks[10][3]={ {1213,67,98},{1345,75,45},{1654,87,25},{1567,65,87},{1432,55,92},{1256,78,45},{1347,87,34},{1298,95,78},{1467,56,82},{1389,83,73} };
	    for(int j=0;j<10;j++){
		printf("Index: %d  Subject 1: %d  subject 2: %d\n", SubjectMarks[j][0],SubjectMarks[j][1],SubjectMarks[j][2]);
	    }
	    return 0;	    
}