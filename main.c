#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <graphics.h>
#include <math.h>
#include <stddef.h>
struct nokta
{
    int x;
    int y;
};
struct dnokta
{

    double x;
    double y;
};

double iki_nokta_arasi_uzaklik(double x1,double x2,double y1,double y2)
{

    return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}
double uc_noktasi_verilen_cemberin_merkezi_x(double a, double b, double c, double d, double e,double f )
{
    return (((a*a)+(b*b))*(f-d)+((c*c)+(d*d))*(b-f)+((e*e)+(f*f))*(d-b))/(2*(a*(f-d)+c*(b-f)+e*(d-b)));

}
double uc_noktasi_verilen_cemberin_merkezi_y(double a, double b, double c, double d, double e, double f )
{

    return (((a*a)+(b*b))*(e-c)+((c*c)+(d*d))*(a-e)+((e*e)+(f*f))*(c-a))/(2*(b*(e-c)+d*(a-e)+f*(c-a)));

}
int main()
{
    FILE*dosya;
    char c;
    int satir=0;
    dosya=fopen("input.txt","r");
    if(dosya==NULL)
    {
        printf("dosya acilamadi");
        return 0;
    }
    c=getc(dosya);
    while(!feof(dosya))
    {
        if(c=='\n')
            satir+=1;
        c=getc(dosya);
        if(c==EOF)
            satir+=1;
    }
    rewind(dosya);//konum iþaretçisini basa döndürür

    struct nokta dizi[satir];
    int i;
    for(i=0; i<satir; i++)
    {
        fscanf(dosya,"%d",&dizi[i].x);
        fscanf(dosya,"%d",&dizi[i].y);

    }
    int gdriver = DETECT, gm;
    int midx,midy;

    initgraph(&gdriver,&gm,"C:\\TC\\BGI");
    initwindow(700,700);

    midx=getmaxx()/2;
    midy=getmaxy()/2;

    //KOORDİNAT  X Y OLUŞTURMA
    setlinestyle(0,0,1);
    line(0,midy,getmaxx(),midy);
    setlinestyle(0,0,1);
    line(midx,0,midx,getmaxy());
    outtextxy ( midx+(20), midy+1,"1" );
    outtextxy ( midx+1,midy+(300),"-15" );
    outtextxy ( midx+1,midy-(20),"1" );
    outtextxy ( midx-(20), midy+1,"-1" );
    outtextxy ( midx+(40), midy+1,"2" );
    outtextxy ( midx+1,midy+(280),"-14" );
    outtextxy ( midx+1,midy-(40),"2" );
    outtextxy ( midx-(40), midy+1,"-2" );
    outtextxy ( midx+(60), midy+1,"3" );
    outtextxy ( midx+1,midy+(20),"-1" );
    outtextxy ( midx+1,midy-(60),"3" );
    outtextxy ( midx-(60), midy+1,"-3" );
    outtextxy ( midx+(80), midy+1,"4" );
    outtextxy ( midx+1,midy+(40),"-2" );
    outtextxy ( midx+1,midy-(80),"4" );
    outtextxy ( midx-(80), midy+1,"-4" );
    outtextxy ( midx+(100), midy+1,"5" );
    outtextxy ( midx+1,midy+(60),"-3" );
    outtextxy ( midx+1,midy-(100),"5" );
    outtextxy ( midx-(100), midy+1,"-5" );
    outtextxy ( midx+(120), midy+1,"6" );
    outtextxy ( midx+1,midy+(80),"-4" );
    outtextxy ( midx+1,midy-(120),"6" );
    outtextxy ( midx-(120), midy+1,"-6" );
    outtextxy ( midx+(140), midy+1,"7" );
    outtextxy ( midx+1,midy+(100),"-5" );
    outtextxy ( midx+1,midy-(140),"7" );
    outtextxy ( midx-(140), midy+1,"-7" );
    outtextxy ( midx+(160), midy+1,"8" );
    outtextxy ( midx+1,midy+(120),"-6" );
    outtextxy ( midx+1,midy-(160),"8" );
    outtextxy ( midx-(160), midy+1,"-8" );
    outtextxy ( midx+(180), midy+1,"9" );
    outtextxy ( midx+1,midy+(140),"-7" );
    outtextxy ( midx+1,midy-(180),"9" );
    outtextxy ( midx-(180), midy+1,"-9" );
    outtextxy ( midx+(200), midy+1,"10" );
    outtextxy ( midx+1,midy+(160),"-8" );
    outtextxy ( midx+1,midy-(200),"10" );
    outtextxy ( midx-(200), midy+1,"-10" );
    outtextxy ( midx+(220), midy+1,"11" );
    outtextxy ( midx+1,midy+(180),"-9" );
    outtextxy ( midx+1,midy-(220),"11" );
    outtextxy ( midx-(220), midy+1,"-11" );
    outtextxy ( midx+(240), midy+1,"12" );
    outtextxy ( midx+1,midy+(200),"-10" );
    outtextxy ( midx+1,midy-(240),"12" );
    outtextxy ( midx-(240), midy+1,"-12" );
    outtextxy ( midx+(260), midy+1,"13" );
    outtextxy ( midx+1,midy+(220),"-11" );
    outtextxy ( midx+1,midy-(260),"13" );
    outtextxy ( midx-(260), midy+1,"-13" );
    outtextxy ( midx+(280), midy+1,"14" );
    outtextxy ( midx+1,midy+(240),"-12" );
    outtextxy ( midx+1,midy-(280),"14" );
    outtextxy ( midx-(280), midy+1,"-14" );
    outtextxy ( midx+(300), midy+1,"15" );
    outtextxy ( midx+1,midy+(260),"-13" );
    outtextxy ( midx+1,midy-(300),"15" );
    outtextxy ( midx-(300), midy+1,"-15" );
    // GIRILEN NOKTALARI EKRANA BASTIRIYORUZ
    i=0;
    printf("GIRILEN NOKTALAR: \n");
    for(i; i<satir-1; i++)
    {

        printf("%d  %d \n",dizi[i].x,dizi[i].y);
    }
//BİRBİRİNE EN UZAK NOKTALAR
    int k;
    double gecici_buyuk;
    i=0;
    double enbuyuk=0;
    struct nokta enuzak[2];
    for(i; i<satir-1; i++)
    {
        for(k=0; k<satir-1; k++)
        {
            gecici_buyuk=sqrt(((dizi[i].x-dizi[k].x)*(dizi[i].x-dizi[k].x) + (dizi[i].y-dizi[k].y)*(dizi[i].y-dizi[k].y)));
            if(gecici_buyuk>enbuyuk)
            {
                enbuyuk=gecici_buyuk;
                enuzak[0].x =dizi[i].x;
                enuzak[1].x =dizi[k].x;
                enuzak[0].y =dizi[i].y;
                enuzak[1].y =dizi[k].y;
            }
        }

    }
//printf(" en uzak iki nokta: %d %d %d %d \n",enuzak[0].x,enuzak[0].y,enuzak[1].x,enuzak[1].y);

    struct dnokta gecici_merkez[1];
    gecici_merkez[0].x=(enuzak[0].x+enuzak[1].x)/2.0;
    gecici_merkez[0].y=(enuzak[0].y+enuzak[1].y)/2.0;
    double gecici_yaricap=enbuyuk/2.0;
// printf("gecici merkez= %f %f  gecici yaricap =%.2f ",gecici_merkez[0].x,gecici_merkez[0].y,gecici_yaricap);
    int j=0;
//SAYILARI EKRANA GÖSTERİYORUZ
    for(j; j<satir-1; j++)
        circle(midx+(20*(dizi[j].x)),midy-(20*dizi[j].y),2);

//EN UZAK NOKTA ACABA TÜM NOKTALARI İÇERİYOR MU KONTROLÜ
//EĞER İÇERİYORSA BAYRAK 0 YANİ SORUN ÇÖZÜLDÜ
    int bayrak=0,sayac=0;
    for(j=0; j<satir-1 ; j++)
    {
        if( gecici_yaricap<iki_nokta_arasi_uzaklik(dizi[j].x, gecici_merkez[0].x, dizi[j].y,gecici_merkez[0].y ))
        {
            bayrak=1;
            sayac+=1;
            // printf(" yaricaptan buyuk olanlar %d , %d\n ",dizi[j].x,dizi[j].y);
        }

    }

    if(bayrak == 0)
    {
        line(midx + 20*enuzak[0].x,midy - 20*enuzak[0].y,midx+ 20*gecici_merkez[0].x,midy - 20*gecici_merkez[0].y);
        circle(midx + 20*gecici_merkez[0].x,midy-20*gecici_merkez[0].y,20*gecici_yaricap);

        printf("YARICAP : %.2f \n",gecici_yaricap );
        printf("CEMBERIN MERKEZI : x = %.2f y= %.2f \n",gecici_merkez[0].x,gecici_merkez[0].y);
        getch();
        closegraph();
        fclose(dosya);
        return 0;
    }
    //CEMBERIN DISINDAKİ NOKTALARA BAKICAZ EGER VARSA EN UZAK OLANI ALICAZ
    struct nokta cemberin_disi[sayac];
    int m=0;

    for(j=0; j<satir-1 ; j++)
    {
        if( gecici_yaricap< iki_nokta_arasi_uzaklik(dizi[j].x, gecici_merkez[0].x, dizi[j].y,gecici_merkez[0].y ))
        {

            cemberin_disi[m].x = dizi[j].x;
            cemberin_disi[m].y = dizi[j].y;
            m++;
        }
    }


    m=0;
    int ucuncu_nokta;
    double buyuk_uzaklik=0;
    int z;
    for (m; m<sayac; m++ )
    {

        z=iki_nokta_arasi_uzaklik(cemberin_disi[m].x, gecici_merkez[0].x,  cemberin_disi[m].y, gecici_merkez[0].y);
        if(z>buyuk_uzaklik)
        {
            buyuk_uzaklik=z;
            ucuncu_nokta=m;
        }
    }

    // printf(" t nin degeri =%d \n",t);
    // printf("en uzak nokta : %d  %d \n",cemberin_disi[t].x,cemberin_disi[t].y);
//printf("  ===%d , %d ,%d , %d , %d , %d  ",enuzak[0].x,enuzak[0].y,enuzak[1].x,enuzak[1].y,cemberin_disi[t].x,cemberin_disi[t].y);
    gecici_merkez[0].x = uc_noktasi_verilen_cemberin_merkezi_x(enuzak[0].x,enuzak[0].y,enuzak[1].x,enuzak[1].y,cemberin_disi[ucuncu_nokta].x,cemberin_disi[ucuncu_nokta].y);

    gecici_merkez[0].y = uc_noktasi_verilen_cemberin_merkezi_y(enuzak[0].x,enuzak[0].y,enuzak[1].x,enuzak[1].y,cemberin_disi[ucuncu_nokta].x,cemberin_disi[ucuncu_nokta].y);

    gecici_yaricap= (iki_nokta_arasi_uzaklik(enuzak[0].x,gecici_merkez[0].x,enuzak[0].y,gecici_merkez[0].y));

    /*printf(" 3 NOKTAMIZI BARINDIRAN GECICI MERKEZIMIZ = X: %.2f  Y: %.2f \n",gecici_merkez[0].x,gecici_merkez[0].y);


    printf("YARICAPI = %.2f\n",gecici_yaricap);
    */
// BU SEFER ÖNCEKI IKI UZAK NOKTAYLA BU CEMBERIMIZIN DISINDAKİ NOKTAYI BARINDIRAN CEMBER ICIN KONTROL YAPIYORUZ
// DISARIDA NOKTA VAR MI DIYE
    bayrak=0,sayac=0;
    for(j=0; j<satir-1 ; j++)
    {
        if( gecici_yaricap<iki_nokta_arasi_uzaklik(dizi[j].x, gecici_merkez[0].x, dizi[j].y,gecici_merkez[0].y ))
        {
            bayrak=1;
            sayac+=1;
        }

    }

    if(bayrak == 0)
    {
        line(midx + 20*enuzak[0].x,midy - 20*enuzak[0].y,midx + 20*gecici_merkez[0].x,midy - 20*gecici_merkez[0].y);
        circle(midx + 20*gecici_merkez[0].x,midy-20*gecici_merkez[0].y,20*gecici_yaricap);

        printf("CEMBERIN MERKEZI : x = %.2f y= %.2f \n",gecici_merkez[0].x,gecici_merkez[0].y);
        printf("YARICAP : %.2f \n",gecici_yaricap );

        getch();
        closegraph();
        fclose(dosya);
        return 0;
    }

//EGER DISARIDA NOKTA VAR ISE O NOKTA ILE ONCEKİ 2 NOKTA ICIN  CEMBER DUSUNULUYOR
    struct nokta cemberin_disi_1[sayac];
    m=0;

    for(j=0; j<satir-1 ; j++)
    {
        if( gecici_yaricap<iki_nokta_arasi_uzaklik(dizi[j].x, gecici_merkez[0].x, dizi[j].y,gecici_merkez[0].y ))
        {

            cemberin_disi_1[m].x = dizi[j].x;
            cemberin_disi_1[m].y = dizi[j].y;
            m++;
        }
    }

    int dorduncu_nokta;
    m=0;
    buyuk_uzaklik=0;
    z=0;
    for (m; m<sayac; m++ )
    {

        z=iki_nokta_arasi_uzaklik(cemberin_disi_1[m].x, gecici_merkez[0].x,  cemberin_disi_1[m].y, gecici_merkez[0].y);
        if(z>buyuk_uzaklik)
        {
            buyuk_uzaklik=z;
            dorduncu_nokta=m;
        }
    }
    //NOKTALAR ARASI UZAKLIKLARI BULUNACAK
    // 3 ile 1 ve 2 sonra 4 ile 1 ve 2 bulunup en küçük olmayan 1 VEYA 2. NOKTA seçilir
    double d1 = iki_nokta_arasi_uzaklik(enuzak[0].x, cemberin_disi[ucuncu_nokta].x, enuzak[0].y, cemberin_disi[ucuncu_nokta].y);
    double d2 = iki_nokta_arasi_uzaklik(enuzak[1].x, cemberin_disi[ucuncu_nokta].x, enuzak[1].y, cemberin_disi[ucuncu_nokta].y );
    double d3 = iki_nokta_arasi_uzaklik(enuzak[0].x, cemberin_disi_1[dorduncu_nokta].x, enuzak[0].y, cemberin_disi_1[dorduncu_nokta].y);
    double d4 = iki_nokta_arasi_uzaklik(enuzak[1].x, cemberin_disi_1[dorduncu_nokta].x, enuzak[1].y, cemberin_disi_1[dorduncu_nokta].y);
    double  enkucuk_d=0;
    if(d1<d2 && d1<d3 && d1<d4)
        enkucuk_d=d1;
    else if(d2<d1 && d2<d3 && d2<d4)
        enkucuk_d=d2;
    else if(d3<d1 && d3<d2 && d3<d4)
        enkucuk_d=d3;
    else
        enkucuk_d=d4;



    if(enkucuk_d==d1 || enkucuk_d==d3) //enuzak0 noktasi , 3. ve 4. noktalari barindiran cember cizilir
    {
        gecici_merkez[0].x = uc_noktasi_verilen_cemberin_merkezi_x(enuzak[1].x,enuzak[1].y,cemberin_disi[ucuncu_nokta].x,cemberin_disi[ucuncu_nokta].y,cemberin_disi_1[dorduncu_nokta].x,cemberin_disi_1[dorduncu_nokta].y);

        gecici_merkez[0].y = uc_noktasi_verilen_cemberin_merkezi_y(enuzak[1].x,enuzak[1].y,cemberin_disi[ucuncu_nokta].x,cemberin_disi[ucuncu_nokta].y,cemberin_disi_1[dorduncu_nokta].x,cemberin_disi_1[dorduncu_nokta].y);

        gecici_yaricap= (iki_nokta_arasi_uzaklik(enuzak[1].x,gecici_merkez[0].x,enuzak[1].y,gecici_merkez[0].y));
        line(midx + 20*enuzak[1].x,midy - 20*enuzak[1].y,midx + 20*gecici_merkez[0].x,midy - 20*gecici_merkez[0].y);
        circle(midx + 20*gecici_merkez[0].x,midy-20*gecici_merkez[0].y,20*gecici_yaricap);

        printf("CEMBERIN MERKEZI : x = %.2f y= %.2f \n",gecici_merkez[0].x,gecici_merkez[0].y);
        printf("YARICAP : %.2f \n",gecici_yaricap );
        getch();
        closegraph();
        fclose(dosya);
        return 0;

    }
    else if(enkucuk_d==d2 || enkucuk_d==d4 ) //enuzak1 noktasi ,3 ve 4. noktalari barindiran cember cizilir
    {

        gecici_merkez[0].x = uc_noktasi_verilen_cemberin_merkezi_x(enuzak[0].x,enuzak[0].y,cemberin_disi[ucuncu_nokta].x,cemberin_disi[ucuncu_nokta].y,cemberin_disi_1[dorduncu_nokta].x,cemberin_disi_1[dorduncu_nokta].y);

        gecici_merkez[0].y = uc_noktasi_verilen_cemberin_merkezi_y(enuzak[0].x,enuzak[0].y,cemberin_disi[ucuncu_nokta].x,cemberin_disi[ucuncu_nokta].y,cemberin_disi_1[dorduncu_nokta].x,cemberin_disi_1[dorduncu_nokta].y);

        gecici_yaricap= (iki_nokta_arasi_uzaklik(enuzak[0].x,gecici_merkez[0].x,enuzak[0].y,gecici_merkez[0].y));

        line(midx + 20*enuzak[0].x,midy - 20*enuzak[0].y,midx + 20*gecici_merkez[0].x,midy - 20*gecici_merkez[0].y);
        circle(midx + 20*gecici_merkez[0].x,midy-20*gecici_merkez[0].y,20*gecici_yaricap);

        printf("CEMBERIN MERKEZI : x = %.2f y= %.2f \n",gecici_merkez[0].x,gecici_merkez[0].y);
        printf("YARICAP : %.2f \n",gecici_yaricap );

        getch();
        closegraph();
        fclose(dosya);
        return 0;




    }
    else
        printf("EROR");

    getch();

    closegraph();
    fclose(dosya);

    return 0;
}




