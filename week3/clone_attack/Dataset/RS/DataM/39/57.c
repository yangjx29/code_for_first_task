struct   person {
    char S59xCv [(215 - 185)];
    int s1, HH7TOgJf1A2U, s3;
    char K40s5fi, c2;
    int ECLdj2TM;
};
int main () {
    struct   person p [(687 - 587)];
    int n;
    int m;
    int i;
    int Iak3xb8S;
    int k;
    long  tot;
    for (i = (674 - 674); 100 > i; i++) {
        p[i].s1 = (905 - 905);
        p[i].HH7TOgJf1A2U = (955 - 955);
        p[i].s3 = (137 - 137);
        p[i].ECLdj2TM = (808 - 808);
    }
    scanf ("%d", &n);
    k = (428 - 428);
    tot = (787 - 787);
    for (i = 0; n > i; i++) {
        scanf ("%s%d%d %c %c %d", p[i].S59xCv, &p[i].s1, &p[i].HH7TOgJf1A2U, &p[i].K40s5fi, &p[i].c2, &p[i].s3);
        if ((614 - 534) < p[i].s1 && (986 - 985) <= p[i].s3)
            p[i].ECLdj2TM = p[i].ECLdj2TM + (8296 - 296);
        if ((1029 - 944) < p[i].s1 && (255 - 175) < p[i].HH7TOgJf1A2U)
            p[i].ECLdj2TM = p[i].ECLdj2TM + (4967 - 967);
        if ((713 - 623) < p[i].s1)
            p[i].ECLdj2TM += (2243 - 243);
        if (p[i].s1 > (284 - 199) && p[i].c2 == 'Y')
            p[i].ECLdj2TM = p[i].ECLdj2TM + 1000;
        if (p[i].HH7TOgJf1A2U > (560 - 480) && p[i].K40s5fi == 'Y')
            p[i].ECLdj2TM = p[i].ECLdj2TM + (1683 - 833);
        tot = tot + p[i].ECLdj2TM;
        if (p[i].ECLdj2TM > p[k].ECLdj2TM)
            k = i;
    }
    printf ("%s\n%d\n%d\n", p[k].S59xCv, p[k].ECLdj2TM, tot);
    return 0;
}

