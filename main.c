#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void makeItNull(char array1[], int array2[]);
void split(char enter[], char name[], int memb[], int all[], int *p);
void remove_d(int arr[]);
void print_sets(int ar[]);
void S_Of_O(char a[], int w, char f[], char s[]);


int main (){

    char name1[5], name2[5], name3[5], name4[5], name5[5];
    int memb1[20], memb2[20], memb3[20], memb4[20], memb5[20], u[20];
    makeItNull(name1, memb1);
    makeItNull(name2, memb2);
    makeItNull(name3, memb3);
    makeItNull(name4, memb4);
    makeItNull(name5, memb5);
    int o1[20], o2[20], o3[20];
    char fi[2];
    char se[2];
    int u_count=0;
    int i=1;
    for(int x=0; x<20; x++)
        u[x] = '\0';
    char entrance[50];
    for(int x=0; x<50; x++)
        entrance[x] = NULL;

    mainhome:
    printf(">>>");
    gets(entrance);

    if(strchr(entrance, '=')!= NULL){

    while(i<=5){

        if(i==1){
            split(entrance, name1, memb1, u, &u_count);
            remove_d(memb1);
            i++;
            break;
            }
        if(i==2){
            split(entrance, name2, memb2, u, &u_count);
            remove_d(memb2);
            i++;
            break;
            }
        if(i==3){
            split(entrance, name3, memb3, u, &u_count);
            remove_d(memb3);
            i++;
            break;
            }
        if(i==4){
            split(entrance, name4, memb4, u, &u_count);
            remove_d(memb4);
            i++;
            break;
            }
        if(i==5){
            split(entrance, name5, memb5, u, &u_count);
            remove_d(memb5);
            i++;
            break;
            }
    }
        goto mainhome;
    }

    else if(strchr(entrance, '+')!= NULL){
        S_Of_O(entrance, 1, fi, se);
        for(int x=0; x<20; x++)
        o1[x] = NULL;
        int flag = 0;
        int c = 0;
        if(name1[0]==fi[0] || name1[0]==se[0]){
            flag =1;
            for(int x=0; x<20; x++){
                if(memb1[x] != '\0'){
                    o1[x] = memb1[x];
                    c = c+1;}
            }
}

        if(name2[0]==fi[0] || name2[0]==se[0]){
            if(flag == 1){
            for(int x=c, y=0; x<20; x++, y++){
                if(memb2[y] != '\0')
                    o1[x] = memb2[y];
            }
        }
        else {
                flag =1;
            for(int x=0; x<20; x++){
                if(memb2[x] != '\0'){
                    o1[x] = memb2[x];
                    c = c+1;}

        }
    }
}

        if(name3[0]==fi[0] || name3[0]==se[0]){
            if(flag == 1){
            for(int x=c, y=0; x<20; x++, y++){
                if(memb3[y] != '\0')
                    o1[x] = memb3[y];
            }
        }
        else {
                flag =1;
            for(int x=0; x<20; x++){
                if(memb3[x] != '\0'){
                    o1[x] = memb3[x];
                    c = c+1;}

        }
    }
}

        if(name4[0]==fi[0] || name4[0]==se[0]){
            if(flag == 1){
            for(int x=c, y=0; x<20; x++, y++){
                if(memb4[y] != '\0')
                    o1[x] = memb4[y];
            }
        }
        else {
                flag =1;
            for(int x=0; x<20; x++){
                if(memb4[x] != '\0'){
                    o1[x] = memb4[x];
                    c = c+1;}

        }
    }
}

        if(name5[0]==fi[0] || name5[0]==se[0]){
            if(flag == 1){
            for(int x=c, y=0; x<20; x++, y++){
                if(memb5[y] != '\0')
                    o1[x] = memb5[y];
            }
        }
        else {
                flag =1;
            for(int x=0; x<20; x++){
                if(memb5[x] != '\0'){
                    o1[x] = memb5[x];
                    c = c+1;}

        }
    }
}

int n=20;
int r=0;
for(int x=0; x<n; x++){
    for(int y=x+1; y<n; y++){
        if(o1[x]==o1[y]&& o1[x]>0){
            r = r+1;
            for(int z=y; z<n; z++){
                o1[z] = o1[z+1];
            }
            n--;
            y--;
        }
    }
  }

int cont=0;
 for(int z=0 ; z<20 ; z++){
      if(o1[z]>0 && o1[z]<100)
        cont++;}
if(cont > 0){
         int z=0;
printf("{");
for(z=0 ; z<cont-1-r ; z++){
         printf("%d,", o1[z]);}
    printf("%d", o1[z]);
    printf("}\n");
  }
  else{
    printf("{}\n");
  }
        goto mainhome;
    }

    else if(strchr(entrance, '-')!= NULL){
        S_Of_O(entrance, 3, fi, se);
        int o3_1[20];
        for(int x=0; x<20; x++){
        o3[x] = NULL;
        o3_1[x] = NULL;}
        int flag = 0;
        int c = 0;
        if(name1[0]==fi[0]){
            for(int x=0; x<20; x++){
                if(memb1[x] != '\0'){
                    o3[x] = memb1[x];
                    c = c+1;}
            }
}

        else if(name2[0]==fi[0]){
            for(int x=0; x<20; x++){
                if(memb2[x] != '\0'){
                    o3[x] = memb2[x];
                    c = c+1;}
        }
}


        else if(name3[0]==fi[0]){
            for(int x=0; x<20; x++){
                if(memb3[x] != '\0'){
                    o3[x] = memb3[x];
                    c = c+1;}
        }
}

        else if(name4[0]==fi[0]){
            for(int x=0; x<20; x++){
                if(memb4[x] != '\0'){
                    o3[x] = memb4[x];
                    c = c+1;}
        }
}

        else if(name5[0]==fi[0]){
            for(int x=0; x<20; x++){
                if(memb5[x] != '\0'){
                    o3[x] = memb5[x];
                    c = c+1;}
        }
}

        else if('U'==fi[0]){
            for(int x=0; x<20; x++){
                if(u[x] != '\0'){
                    o3[x] = u[x];
                    c = c+1;}
        }
}

if(name1[0]==se[0])
{
for(int x=c, y=0; x<20; x++, y++){
    if(memb1[y] != '\0')
    o3[x] = memb1[y];
            }
}
else if(name2[0]==se[0])
{
for(int x=c, y=0; x<20; x++, y++){
    if(memb2[y] != '\0')
    o3[x] = memb2[y];
            }
}
else if(name3[0]==se[0])
{
for(int x=c, y=0; x<20; x++, y++){
    if(memb3[y] != '\0')
    o3[x] = memb3[y];
            }
}
else if(name4[0]==se[0])
{
for(int x=c, y=0; x<20; x++, y++){
    if(memb4[y] != '\0')
    o3[x] = memb4[y];
            }
}
else if(name5[0]==se[0])
{
for(int x=c, y=0; x<20; x++, y++){
    if(memb5[y] != '\0')
    o3[x] = memb5[y];
            }
}

int m=0;
      for(int x=0; x<c; x++){
        for(int y=c; y<20; y++){
            if(o3[x] == o3[y]){
            o3[x] = NULL;
            o3[y] = NULL;}
            }
    }
      for(int x=0; x<c; x++){
            if(o3[x] != NULL){
            o3_1[m] = o3[x];
            m = m +1;}
    }

        print_sets(o3_1);
        goto mainhome;
    }

    else if(strchr(entrance, '*')!= NULL){
        S_Of_O(entrance, 2, fi, se);
        int o2_1[20];
        for(int x=0; x<20; x++){
        o2[x] = NULL;
        o2_1[x] = NULL;}
        int flag = 0;
        int c = 0;
        if(name1[0]==fi[0] || name1[0]==se[0]){
            flag =1;
            for(int x=0; x<20; x++){
                if(memb1[x] != '\0'){
                    o2[x] = memb1[x];
                    c = c+1;}
            }
}

        if(name2[0]==fi[0] || name2[0]==se[0]){
            if(flag == 1){
            for(int x=c, y=0; x<20; x++, y++){
                if(memb2[y] != '\0')
                    o2[x] = memb2[y];
            }
        }
        else {
                flag =1;
            for(int x=0; x<20; x++){
                if(memb2[x] != '\0'){
                    o2[x] = memb2[x];
                    c = c+1;}

        }
    }
}

        if(name3[0]==fi[0] || name3[0]==se[0]){
            if(flag == 1){
            for(int x=c, y=0; x<20; x++, y++){
                if(memb3[y] != '\0')
                    o2[x] = memb3[y];
            }
        }
        else {
                flag =1;
            for(int x=0; x<20; x++){
                if(memb3[x] != '\0'){
                    o2[x] = memb3[x];
                    c = c+1;}

        }
    }
}

        if(name4[0]==fi[0] || name4[0]==se[0]){
            if(flag == 1){
            for(int x=c, y=0; x<20; x++, y++){
                if(memb4[y] != '\0')
                    o2[x] = memb4[y];
            }
        }
        else {
                flag =1;
            for(int x=0; x<20; x++){
                if(memb4[x] != '\0'){
                    o2[x] = memb4[x];
                    c = c+1;}

        }
    }
}

        if(name5[0]==fi[0] || name5[0]==se[0]){
            if(flag == 1){
            for(int x=c, y=0; x<20; x++, y++){
                if(memb5[y] != '\0')
                    o2[x] = memb5[y];
            }
        }
        else {
                flag =1;
            for(int x=0; x<20; x++){
                if(memb5[x] != '\0'){
                    o2[x] = memb5[x];
                    c = c+1;}

        }
    }
}
int m=0;
      for(int x=0; x<20; x++){
        for(int y=x+1; y<20; y++){
            if(o2[x] == o2[y] && o2[y] != NULL && o2[x] != NULL){
            o2_1[m] = o2[x];
            m = m+1;}
        }
      }
        print_sets(o2_1);
        goto mainhome;
    }

    else if(strchr(entrance, '^Z')!= NULL){
        printf("\nHave a nice day\n");
        EOF;
    }

    else{
         if(entrance[0] == name1[0] && entrance[1] == name1[1] && name1[0] != NULL){
            print_sets(memb1);
            goto mainhome;}

         if(entrance[0] == name2[0] && entrance[1] == name2[1] && name2[0] != NULL){
            print_sets(memb2);
            goto mainhome;}

         if(entrance[0] == name3[0] && entrance[1] == name3[1] && name3[0] != NULL){
            print_sets(memb3);
            goto mainhome;}

         if(entrance[0] == name4[0] && entrance[1] == name4[1] && name4[0] != NULL){
            print_sets(memb4);
            goto mainhome;}

         if(entrance[0] == name5[0] && entrance[1] == name5[1] && name5[0] != NULL){
            print_sets(memb5);
            goto mainhome;}

         if(entrance[0] == 'U' || entrance[0] == 'u'){
            remove_d(u);
            print_sets(u);
            goto mainhome;}

            else{
                printf("Incorrect input\n");
                goto mainhome;
            }

    }

}



void S_Of_O(char a[], int w, char f[], char s[]){
int indexOfSign;
switch(w){

case 1:
{
    for(int j=0 ; j<=50; j++) {
    if (a[j] == '+' ) {
        indexOfSign = j;
        break;
            }
          }
    for(int j=0; j<2; j++)
            f[j] = a[j];
            int d = 0;
    for(int y=indexOfSign+1; y<=indexOfSign+2; y++){
            s[d] = a[y];
            d = d +1;}
}
case 2:
{
    for(int j=0 ; j<=50; j++) {
    if (a[j] == '*' ) {
        indexOfSign = j;
        break;
            }
          }
    for(int j=0; j<2; j++)
            f[j] = a[j];
            int d = 0;
    for(int y=indexOfSign+1; y<=indexOfSign+2; y++){
            s[d] = a[y];
            d = d +1;}
}
case 3:
{
    for(int j=0 ; j<=50; j++) {
    if (a[j] == '-' ) {
        indexOfSign = j;
        break;
            }
          }
    for(int j=0; j<2; j++)
            f[j] = a[j];
            int d = 0;
    for(int y=indexOfSign+1; y<=indexOfSign+2; y++){
            s[d] = a[y];
            d = d +1;}
}
   }
}



void print_sets(int ar[]){
int cont=0;
 for(int z=0 ; z<20 ; z++){
      if(ar[z]>0 && ar[z]<100)
        cont++;}
if(cont > 0){
         int z=0;
printf("{");
for(z=0 ; z<cont-1 ; z++){
         printf("%d,", ar[z]);}
    printf("%d", ar[z]);
    printf("}\n");
  }
  else{
    printf("{}\n");
  }
}


void remove_d(int arr[]){
int n=20;
for(int x=0; x<n; x++){
    for(int y=x+1; y<n; y++){
        if(arr[x]==arr[y]&& arr[x]>0){
            for(int z=y; z<n; z++){
                arr[z] = arr[z+1];
            }
            n--;
            y--;
        }
    }
  }
}



void makeItNull(char array1[], int array2[]){
          for(int x=0; x<5; x++)
                array1[x] = NULL;

          for(int x=0; x<20; x++)
            array2[x] = NULL;
}



void split(char enter[], char name[], int memb[], int all[], int *p){

int indexOfEqualSign;
int e;

for(e=0 ; e<=50; e++) {
    if (enter[e] == '=' ) {
        indexOfEqualSign = e;
        break;
            }
          }

for(e=0; e<indexOfEqualSign ; e++)
{
name[e]= enter[e];
    if (enter[e]=='='){
        break;
              }
}
int IndexOfStart = indexOfEqualSign+1;
int IndexOfEnd = 0;
int colomindex = 0;
int temp[5]={0,0,0,0,0};

for (e= indexOfEqualSign+2 ; e<50; e++) {
    if( enter[e] == ',' || enter[e] == '}'){
            IndexOfEnd = e;
                int k=4;
                for(int j=IndexOfEnd-1 ; j>IndexOfStart; j--){
                    temp[k] =(int)(enter[j]-48);
                    k--;
                }

                memb[colomindex] = temp[4] + (10*temp[3]) + (100*temp[2]) + (1000*temp[1]) + (10000*temp[0]);
                colomindex++;
                all[*p] = temp[4] + (10*temp[3]) + (100*temp[2]) + (1000*temp[1]) + (10000*temp[0]);
                *p = *p + 1;
                IndexOfStart = IndexOfEnd;

      }

  }
}
