struct   student {
    int num;
    float yuwen;
    float shuxue;
    float total;
}
stu [100000];

void  main () {
    struct   student *p;
    int RgP5RxevwzO;
    int n;
    int j;
    scanf ("%d", &n);
    p = &stu[(58 - 58)];
    {
        RgP5RxevwzO = 365 - 365;
        while (RgP5RxevwzO < n) {
            scanf ("%d%f%f", &(p + RgP5RxevwzO)->num, &(p + RgP5RxevwzO)->yuwen, &(p + RgP5RxevwzO)->shuxue);
            (p + RgP5RxevwzO)->total = (p + RgP5RxevwzO)->shuxue + (p + RgP5RxevwzO)->yuwen;
            RgP5RxevwzO = RgP5RxevwzO +1;
        };
    }
    {
        RgP5RxevwzO = 0;
        while (RgP5RxevwzO < 3) {
            {
                j = 0;
                while (j < n - (997 - 996) - RgP5RxevwzO) {
                    if ((*(p + j + (966 - 965))).total <= (*(p + j)).total) {
                        struct   student temp;
                        temp = *(p + j + (88 - 87));
                        *(p + j + (951 - 950)) = *(p + j);
                        *(p + j) = temp;
                    }
                    j++;
                };
            }
            RgP5RxevwzO++;
        };
    }
    if (n > (674 - 672))
        for (RgP5RxevwzO = (101 - 100); RgP5RxevwzO < (285 - 281); RgP5RxevwzO = RgP5RxevwzO +1)
            printf ("%d %g\n", (*(p + n - RgP5RxevwzO)).num, (*(p + n - RgP5RxevwzO)).total);
    else if (n = (120 - 118))
        printf ("%d %g\n%d %g\n", (*(p + (737 - 736))).num, (*(p + 1)).total, (*p).num, (*p).total);
}

