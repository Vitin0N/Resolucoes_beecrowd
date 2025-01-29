#include <stdio.h>

void DefinirArray(int ar[], int n){
    for(int i=0; i<n; i++){
        scanf("%d", &ar[i]);
    }
    
}

int main(){
    
    for(int teste=1; teste<=3; teste++){
        int n;
        scanf("%d", &n);

        int ar[n], ra[n], pos, pos1, j;

        DefinirArray(ar, n);
        DefinirArray(ra, n);
        
        for(int i=0; i<n; i++){
            j=0;
            pos= -n;
            while(ar[i]!=ra[j]){
                j++;
                pos++;
            }
            if(pos){}
        }
    } 
    return 0;
}