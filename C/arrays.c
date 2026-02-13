// Two dimensional Array 

#include <stdio.h>
int main() {
    int marks[3][3]={
    {85,90,78},
    {78,94,95},
    {56,78,34}
};
printf("students marks table\n");
printf("----------\n");
printf("Students|Sub1|Sub2|Sub3|\n");
printf("-----------\n");
for(int i=0;i<3;i++){
    printf("S%d |", i+1);
  for (int j=0;j<3;j++){
    printf("%d |",marks[i][j]);
  }
  printf("\n");
}
printf("--------------\n");
return 0;
  }

/* Output 
Students marks table
----------
Students|Sub1|Sub2|Sub3|
-----------
S1 |85 |90 |78 |
S2 |78 |94 |95 |
S3 |56 |78 |34 |
-------------- */



// Three dimensional Array demonstration 
#include <stdio.h>
int main() {
    int cube[2][3][3]={
        {
            {1,2,3},
        {2,5,6},
        {7,8,9}
    },
    {
        {10,11,12},
    {13,14,15},
    {16,17,18}
    }
};
printf("Displaying 3D array cube element:\n");
for(int i=0;i<2;i++){
    printf("\n---Layer%d--\n",i);
    for(int j=0;j<3;j++){
        for(int k=0;k<3;k++){
            printf("%d\t",cube[i][j][k]);
        }
        printf("\n");
    }
}
return 0;
}

/* Output 
Displaying 3D array cube element:

---Layer0--
1	2	3	
2	5	6	
7	8	9	

---Layer1--
10	11	12	
13	14	15	
16	17	18	
*/
      


