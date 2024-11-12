struct   node {
    int Wv3y1AO;
    int Rw3etf;
};
void  main () {
    struct   node gaTOYu [102] [102];
    int bXRp76I;
    int heng;
    int zong;
    int vSrYVEu;
    int jK95NsGjSRc0;
    int g1oDJOIMC;
    int ZYyuCw9gB;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    bXRp76I = (692 - 691);
    heng = (254 - 254);
    zong = (822 - 822);
    scanf ("%d%d", &vSrYVEu, &jK95NsGjSRc0);
    for (g1oDJOIMC = (563 - 563); g1oDJOIMC < vSrYVEu; g1oDJOIMC++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (ZYyuCw9gB = (431 - 431); ZYyuCw9gB < jK95NsGjSRc0; ZYyuCw9gB = ZYyuCw9gB +1) {
            scanf ("%d", &gaTOYu[g1oDJOIMC][ZYyuCw9gB].Rw3etf);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            gaTOYu[g1oDJOIMC][ZYyuCw9gB].Wv3y1AO = 1;
        };
    }
    printf ("%d\n", gaTOYu[0][0].Rw3etf);
    gaTOYu[0][0].Wv3y1AO = 0;
    for (g1oDJOIMC = 1; g1oDJOIMC < (vSrYVEu * jK95NsGjSRc0);) {
        if (bXRp76I % 4 == 1) {
            if (gaTOYu[heng][zong + 1].Wv3y1AO == 1 && (zong + 1) < jK95NsGjSRc0) {
                g1oDJOIMC++;
                zong = zong + 1;
                printf ("%d\n", gaTOYu[heng][zong].Rw3etf);
                gaTOYu[heng][zong].Wv3y1AO = 0;
            }
            else
                bXRp76I++;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        if (bXRp76I % 4 == 2) {
            if (gaTOYu[heng + 1][zong].Wv3y1AO == 1 && (heng + 1) < vSrYVEu) {
                g1oDJOIMC++;
                heng++;
                printf ("%d\n", gaTOYu[heng][zong].Rw3etf);
                gaTOYu[heng][zong].Wv3y1AO = 0;
            }
            else
                bXRp76I++;
        }
        if (bXRp76I % 4 == 3) {
            if (gaTOYu[heng][zong - 1].Wv3y1AO == 1 && (zong - 1) >= 0) {
                g1oDJOIMC++;
                zong--;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int temp = 0;
                        while (temp < 10) {
                            printf ("%d\n", temp);
                            temp = temp + 1;
                            if (temp == 9)
                                break;
                        }
                    }
                }
                printf ("%d\n", gaTOYu[heng][zong].Rw3etf);
                gaTOYu[heng][zong].Wv3y1AO = 0;
            }
            else
                bXRp76I++;
        }
        if (bXRp76I % 4 == 0) {
            if (gaTOYu[heng - 1][zong].Wv3y1AO == 1 && (heng - 1) >= 0) {
                g1oDJOIMC++;
                heng = heng - 1;
                printf ("%d\n", gaTOYu[heng][zong].Rw3etf);
                gaTOYu[heng][zong].Wv3y1AO = 0;
            }
            else
                bXRp76I++;
        };
    };
}

