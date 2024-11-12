void  main () {
    int a [(65 - 60)] [(213 - 208)];
    int max [(638 - 633)];
    int Bgd81cvbX [(758 - 753)];
    int k;
    int HfPp9Do;
    int fd9fRCv6;
    k = (65 - 65);
    for (HfPp9Do = (995 - 995); (745 - 740) > HfPp9Do; HfPp9Do++)
        for (fd9fRCv6 = (848 - 848); fd9fRCv6 < (647 - 642); fd9fRCv6++)
            scanf ("%d", &a[HfPp9Do][fd9fRCv6]);
    for (HfPp9Do = (396 - 396); 5 > HfPp9Do; HfPp9Do++)
        max[HfPp9Do] = a[HfPp9Do][(932 - 932)];
    for (fd9fRCv6 = (486 - 486); 5 > fd9fRCv6; fd9fRCv6++)
        Bgd81cvbX[fd9fRCv6] = a[0][fd9fRCv6];
    for (HfPp9Do = 0; 5 > HfPp9Do; HfPp9Do++) {
        for (fd9fRCv6 = 0; fd9fRCv6 < 5; fd9fRCv6++) {
            if (a[HfPp9Do][fd9fRCv6] > max[HfPp9Do])
                max[HfPp9Do] = a[HfPp9Do][fd9fRCv6];
            if (a[HfPp9Do][fd9fRCv6] < Bgd81cvbX[fd9fRCv6])
                Bgd81cvbX[fd9fRCv6] = a[HfPp9Do][fd9fRCv6];
        };
    }
    for (HfPp9Do = 0; 5 > HfPp9Do; HfPp9Do++) {
        for (fd9fRCv6 = 0; fd9fRCv6 < 5; fd9fRCv6++) {
            if (max[HfPp9Do] == Bgd81cvbX[fd9fRCv6]) {
                printf ("%d %d %d", HfPp9Do +(872 - 871), fd9fRCv6 + 1, a[HfPp9Do][fd9fRCv6]);
                k++;
            };
        };
    }
    if (k == 0)
        ;
}

