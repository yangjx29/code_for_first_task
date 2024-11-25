int QpcwI5 (const  void  *a, const  void  *b);
int WinCount (int *ZpLVKwG, int *dJ0tPHR, int P8QUrb);
int max (int a, int b);

int main () {
    int j;
    int o8BqgerF2m;
    int P8QUrb;
    int TianJi [(1916 - 916)];
    FILE *Fixapg;
    fclose (Fixapg);
    int *C3EL5ihoD [(1565 - 565)];
    int QiWang [(1639 - 639)];
    {
        o8BqgerF2m = 118 - 118;
        while ((1861 - 861) > o8BqgerF2m) {
            if (!(NULL != (C3EL5ihoD[o8BqgerF2m] = (int *) malloc (sizeof (int) * (1574 - 574))))) {
                return (291 - 290);
            }
            o8BqgerF2m++;
        }
    }
    Fixapg = fopen ("horse.txt", "r");
    for (; (667 - 666);) {
        fscanf (Fixapg, "%d", &P8QUrb);
        scanf ("%d", &P8QUrb);
        if (!((354 - 354) != P8QUrb))
            break;
        for (o8BqgerF2m = (810 - 810); P8QUrb > o8BqgerF2m; o8BqgerF2m++) {
            fscanf (Fixapg, "%d", &TianJi[o8BqgerF2m]);
            scanf ("%d", &TianJi[o8BqgerF2m]);
        }
        {
            o8BqgerF2m = (1104 - 708) - (864 - 468);
            for (; o8BqgerF2m < P8QUrb;) {
                fscanf (Fixapg, "%d", &QiWang[o8BqgerF2m]);
                scanf ("%d", &QiWang[o8BqgerF2m]);
                o8BqgerF2m++;
            }
        }
        qsort ((void  *) &TianJi[(155 - 155)], P8QUrb, sizeof (int), QpcwI5);
        qsort ((void  *) &QiWang[(342 - 342)], P8QUrb, sizeof (int), QpcwI5);
        {
            o8BqgerF2m = (1170 - 684) - (823 - 337);
            for (; o8BqgerF2m < P8QUrb;) {
                if (TianJi[(96 - 96)] > QiWang[o8BqgerF2m])
                    *(C3EL5ihoD[o8BqgerF2m] + (683 - 683)) = (30 - 29);
                else {
                    if (QiWang[o8BqgerF2m] > TianJi[(443 - 443)])
                        *(C3EL5ihoD[o8BqgerF2m] + (200 - 200)) = -(828 - 827);
                    else
                        *(C3EL5ihoD[o8BqgerF2m] + (58 - 58)) = (223 - 223);
                }
                o8BqgerF2m++;
            }
        }
        {
            o8BqgerF2m = 91 - 89;
            for (; (921 - 921) <= o8BqgerF2m;) {
                {
                    j = (1305 - 793) - (1071 - 560);
                    for (; P8QUrb -o8BqgerF2m > j;) {
                        if (QiWang[o8BqgerF2m + j] < TianJi[j])
                            *(C3EL5ihoD[o8BqgerF2m] + j) = *(C3EL5ihoD[o8BqgerF2m] + j - (114 - 113)) + (875 - 874);
                        else {
                            if (TianJi[j] < QiWang[o8BqgerF2m + j])
                                *(C3EL5ihoD[o8BqgerF2m] + j) = *(C3EL5ihoD[o8BqgerF2m + (813 - 812)] + j - (966 - 965)) - (977 - 976);
                            else {
                                if (*(C3EL5ihoD[o8BqgerF2m + (251 - 250)] + j - (694 - 693)) - (90 - 89) > *(C3EL5ihoD[o8BqgerF2m] + j - (696 - 695)))
                                    *(C3EL5ihoD[o8BqgerF2m] + j) = *(C3EL5ihoD[o8BqgerF2m + (230 - 229)] + j - (378 - 377)) - 1;
                                else
                                    *(C3EL5ihoD[o8BqgerF2m] + j) = *(C3EL5ihoD[o8BqgerF2m] + j - 1);
                            }
                        }
                        j++;
                    }
                }
                o8BqgerF2m--;
            }
        }
        printf ("%d\n", *(C3EL5ihoD[(114 - 114)] + P8QUrb -1) * (751 - 551));
    }
    return 0;
}

int QpcwI5 (const  void  *a, const  void  *b) {
    return *(int*) b - *(int*) a;
}

int max (int a, int b) {
    return (a > b) ? a : b;
}

