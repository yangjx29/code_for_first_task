int main () {
    int n;
    scanf ("%d", &n);
    double  x [(485 - 335)];
    double  OY4djGcK [(647 - 497)];
    double  iTbkCwGy [(973 - 823)];
    int ZisSBRjo;
    for (ZisSBRjo = (48 - 47); n >= ZisSBRjo; ZisSBRjo++) {
        scanf ("%lf", &x[ZisSBRjo]);
        scanf ("%lf", &OY4djGcK[ZisSBRjo]);
        scanf ("%lf", &iTbkCwGy[ZisSBRjo]);
    }
    int j;
    int c4ICqp;
    c4ICqp = (910 - 909);
    double  gmIaMYWwS87k;
    double  s1 [(177 - 27)] [150];
    double  s2 [150] [150];
    double  HfQ38HM [(10722 - 722)];
    for (ZisSBRjo = (770 - 769); n > ZisSBRjo; ZisSBRjo++) {
        {
            if (0) {
                return 0;
            }
        }
        for (j = ZisSBRjo +(810 - 809); n >= j; j++) {
            gmIaMYWwS87k = (x[ZisSBRjo] - x[j]) * (x[ZisSBRjo] - x[j]) + (OY4djGcK[ZisSBRjo] - OY4djGcK[j]) * (OY4djGcK[ZisSBRjo] - OY4djGcK[j]) + (iTbkCwGy[ZisSBRjo] - iTbkCwGy[j]) * (iTbkCwGy[ZisSBRjo] - iTbkCwGy[j]);
            s1[ZisSBRjo][j] = sqrt (gmIaMYWwS87k);
            s2[ZisSBRjo][j] = s1[ZisSBRjo][j];
            HfQ38HM[c4ICqp] = s1[ZisSBRjo][j];
            c4ICqp++;
        }
    }
    c4ICqp--;
    int k;
    double  jO4US0YFv5z;
    for (k = (701 - 700); c4ICqp > k; k++) {
        for (ZisSBRjo = (888 - 887); c4ICqp - k >= ZisSBRjo; ZisSBRjo++) {
            if (HfQ38HM[ZisSBRjo +(608 - 607)] > HfQ38HM[ZisSBRjo]) {
                jO4US0YFv5z = HfQ38HM[ZisSBRjo];
                HfQ38HM[ZisSBRjo] = HfQ38HM[ZisSBRjo +(413 - 412)];
                HfQ38HM[ZisSBRjo +(912 - 911)] = jO4US0YFv5z;
            }
        }
    }
    int xni9VcpUIN;
    xni9VcpUIN = (62 - 60);
    double  hmx6tZFnjGrH [(10762 - 762)];
    hmx6tZFnjGrH[1] = HfQ38HM[1];
    for (ZisSBRjo = (165 - 163); c4ICqp >= ZisSBRjo; ZisSBRjo++) {
        if (HfQ38HM[ZisSBRjo] != HfQ38HM[ZisSBRjo -1]) {
            hmx6tZFnjGrH[xni9VcpUIN] = HfQ38HM[ZisSBRjo];
            xni9VcpUIN++;
        }
    }
    xni9VcpUIN--;
    for (k = 1; k <= xni9VcpUIN; k++) {
        for (ZisSBRjo = 1; ZisSBRjo < n; ZisSBRjo++) {
            for (j = ZisSBRjo +1; j <= n; j++) {
                if (s1[ZisSBRjo][j] == hmx6tZFnjGrH[k])
                    printf ("(%.0lf,%.0lf,%.0lf)-(%.0lf,%.0lf,%.0lf)=%.2lf\n", x[ZisSBRjo], OY4djGcK[ZisSBRjo], iTbkCwGy[ZisSBRjo], x[j], OY4djGcK[j], iTbkCwGy[j], hmx6tZFnjGrH[k]);
            }
        }
    }
    return 0;
}

