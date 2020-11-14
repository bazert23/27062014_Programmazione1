#include <stdio.h>
int ricerca (int* vet1,int* vet2,int d1,int d2);

int main() {
    setbuf(stdout,0);
    int vet1[8]={0,15,12,21,7,25,32,1};
    int vet2[3]={15,12,21};
    int d1=8;
    int d2=3;
    int check;
    check=ricerca(vet1,vet2,d1,d2);
    printf("TROVATO = INDICE // NON TROVATO=-1\n");
    printf("%d",check);

    return 0;
}

int ricerca (int* vet1,int* vet2,int d1,int d2)
{
    int i,j,k;
    int check=0;
    int prim_pos;


    i=0;
    j=0;
    while(i<d1)
    {
        if(vet1[i]==vet2[j])
        {
            prim_pos=i;
            j++;
            i++;
            check++;
            while(j<d2)
            {
                if(vet1[i]==vet2[j])
                {
                    i++;
                    j++;
                    check++;
                    if(check==d2)
                        return prim_pos;
                }
                else
                    break;
            }

        } else
            i++;

    }


    return -1;
}