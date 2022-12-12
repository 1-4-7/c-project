//
//  main.cpp
//  fonksiyon
//
//  Created by Eon147 on 12.12.2022.
//

#include <stdio.h>

int ucgen(int s1,int s2){
    int sonuc;
    sonuc=(s1*s2)/2;
    return sonuc;
}
int dikdorgen(int s1,int s2){
    int sonuc;
    sonuc=s1*s2;
    return sonuc;
}

int factoriyal(int s1){
    int sonuc=1;
    for(;s1>0;s1--){
        sonuc*=s1;
    }
    return sonuc;
}

int main() {
    printf("\n\n1-ucgen alan hesap\n2-dikdorgen alan hesap\n3-faktoriyel bulma\n");
    printf("----------------------\n");
    printf("Islem seciniz\n");
    int a;
    scanf("%d",&a);
    if(a==1){
        printf("\nUcgenin yuksekligini ve kenarini gir:\n");
        int u1,u2;
        scanf("%d %d",&u1,&u2);
        printf("Ucgenin alani :%d\n",ucgen(u1,u2));
    }
    else if(a==2){
        printf("\nDikdorgenin kisa ve uzun kenarini gir:\n");
        int uk,kk;
        scanf("%d %d",&uk,&kk);
        printf("Dikdorgenin alani:%d\n",dikdorgen(uk, kk));
    }
    else if(a==3){
        printf("\nFaktoriyelini bulmak istedigin sayiyi gir:");
        int f;
        scanf("%d",&f);
        printf("\n%d Nin faktoriyeli %d\n",f,factoriyal(f));
    }
    else{
        printf("error");
    }
    
    
    return 0;
}
