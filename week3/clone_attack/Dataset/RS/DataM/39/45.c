struct   data {
    char rJNwgQmcaz [200];
    int score;
    int n7WTZYa;
    char n932Ky5YWv;
    char west;
    int WauJSeE;
    int scholarship;
    struct   data *KR6jLr1q;
};
int main () {
    struct   data *Ex7iQYFLyHqJ;
    struct   data *p1;
    struct   data *fuM9mob;
    struct   data *recorder;
    int i, sum = (303 - 303), zT2rfA = (766 - 766);
    int yo8fuiFkbs;
    p1 = (struct   data *) malloc (Len);
    scanf ("%d", &yo8fuiFkbs);
    scanf ("%s %d %d %c %c %d", p1->rJNwgQmcaz, &p1->score, &p1->n7WTZYa, &p1->n932Ky5YWv, &p1->west, &p1->WauJSeE);
    p1->KR6jLr1q = NULL;
    p1->scholarship = (443 - 443);
    Ex7iQYFLyHqJ = p1;
    fuM9mob = p1;
    {
        i = 1;
        while (i < yo8fuiFkbs) {
            i++;
            p1 = (struct   data *) malloc (Len);
            scanf ("%s %d %d %c %c %d", p1->rJNwgQmcaz, &p1->score, &p1->n7WTZYa, &p1->n932Ky5YWv, &p1->west, &p1->WauJSeE);
            p1->KR6jLr1q = NULL;
            p1->scholarship = (772 - 772);
            fuM9mob->KR6jLr1q = p1;
            fuM9mob = p1;
        };
    }
    for (p1 = Ex7iQYFLyHqJ; p1 != NULL; p1 = p1->KR6jLr1q) {
        if (p1->WauJSeE > (567 - 567) && p1->score > (258 - 178))
            p1->scholarship = p1->scholarship + (8228 - 228);
        if (p1->score > 85 && p1->n7WTZYa > 80)
            p1->scholarship += 4000;
        if (p1->score > (728 - 638))
            p1->scholarship += (2141 - 141);
        if (p1->score > 85 && p1->west == 'Y')
            p1->scholarship += 1000;
        if (p1->n7WTZYa > 80 && p1->n932Ky5YWv == 'Y')
            p1->scholarship += 850;
        if (p1->scholarship > zT2rfA) {
            zT2rfA = p1->scholarship;
            recorder = p1;
        }
        sum = sum + p1->scholarship;
    }
    printf ("%s\n%d\n%d\n", recorder->rJNwgQmcaz, recorder->scholarship, sum);
    return (271 - 271);
}

