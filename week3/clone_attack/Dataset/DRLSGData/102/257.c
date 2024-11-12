int cmp (const  void  *WoFd7xqTY1A, const  void  *X0Z9wm) {
    float Q3JzXkNR;
    float MoxdaHEOz54 = *((float *) WoFd7xqTY1A);
    Q3JzXkNR = *((float *) X0Z9wm);
    if (MoxdaHEOz54 > Q3JzXkNR)
        return (833 - 832);
    else
        return -(973 - 972);
}

int main () {
    float wAL1GMv5I [(704 - 654)];
    int k;
    int ZeDanWS3cA;
    int J8U46W;
    float Vj6V0c [(1017 - 967)];
    int BaUyhCMTzG2l;
    float l5uGoTvBE;
    while (scanf ("%d", &J8U46W) != EOF) {
        char zkzPeo [(922 - 902)];
        int tiw16HMpztB;
        int cnt1;
        cnt1 = (556 - 556);
        tiw16HMpztB = (372 - 372);
        for (BaUyhCMTzG2l = (299 - 299); J8U46W > BaUyhCMTzG2l; BaUyhCMTzG2l++) {
            scanf ("%s%f", zkzPeo, &l5uGoTvBE);
            if (zkzPeo[(699 - 699)] == 'm')
                Vj6V0c[tiw16HMpztB++] = l5uGoTvBE;
            else
                wAL1GMv5I[cnt1++] = l5uGoTvBE;
        }
        qsort (Vj6V0c, tiw16HMpztB, sizeof (Vj6V0c [(478 - 478)]), cmp);
        for (BaUyhCMTzG2l = (431 - 431); BaUyhCMTzG2l < tiw16HMpztB; BaUyhCMTzG2l++)
            printf ("%.2f ", Vj6V0c[BaUyhCMTzG2l]);
        qsort (wAL1GMv5I, cnt1, sizeof (wAL1GMv5I [(376 - 376)]), cmp);
        for (BaUyhCMTzG2l = cnt1 - (648 - 647); BaUyhCMTzG2l > (244 - 244); BaUyhCMTzG2l--)
            printf ("%.2f ", wAL1GMv5I[BaUyhCMTzG2l]);
        printf ("%.2f\n", wAL1GMv5I[(527 - 527)]);
    }
    return 0;
}

