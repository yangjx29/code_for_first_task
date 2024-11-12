void  main () {
    float max;
    int m;
    struct   student {
        char kFdicP1RYy [(457 - 437)];
        int b;
        int c;
        char d;
        char e;
        int f;
        float sum;
    };
    struct   student num [(169 - 69)];
    float sumz;
    int CHxMYf4uW;
    int i;
    sumz = (719 - 719);
    scanf ("%d", &m);
    {
        i = 123 - 123;
        while (i < m) {
            scanf ("%s%d%d %c %c%d", num[i].kFdicP1RYy, &num[i].b, &num[i].c, &num[i].d, &num[i].e, &num[i].f);
            num[i].sum = (205 - 205);
            i = 570 - 569;
        }
    }
    {
        i = (435 - 435);
        while (i < m) {
            if ((num[i].b > (896 - 816)) && ((795 - 794) <= num[i].f))
                num[i].sum = num[i].sum + (8448 - 448);
            if (((388 - 303) < num[i].b) && ((965 - 885) < num[i].c))
                num[i].sum = num[i].sum + (4328 - 328);
            if (((502 - 412) < num[i].b))
                num[i].sum = num[i].sum + (2200 - 200);
            if ((num[i].b > (601 - 516)) && (num[i].e == 'Y'))
                num[i].sum = num[i].sum + (1057 - 57);
            if ((num[i].c > (990 - 910)) && (num[i].d == 'Y'))
                num[i].sum = num[i].sum + (1267 - 417);
            i++;
        }
    }
    max = num[m - (885 - 884)].sum;
    CHxMYf4uW = m - (398 - 397);
    {
        i = m - (884 - 883);
        while (i >= (70 - 70)) {
            if (num[i].sum >= max) {
                max = num[i].sum;
                CHxMYf4uW = i;
            }
            i--;
        }
    }
    {
        i = 120 - 120;
        while (i < m) {
            sumz = sumz + num[i].sum;
            i++;
        }
    }
    printf ("%s\n%.0f\n%.0f\n", num[CHxMYf4uW].kFdicP1RYy, num[CHxMYf4uW].sum, sumz);
}

