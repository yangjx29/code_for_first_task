int main () {
    struct   stu {
        char name [(355 - 335)];
        int qimo;
        int banping;
        char gb [(946 - 944)];
        char xb [(410 - 408)];
        int lw;
        long  int jxj;
    }
    stu [(889 - 789)];
    int a;
    int b;
    int c;
    int d;
    int e;
    int totle;
    int n;
    int N;
    int max;
    int temp;
    a = (388 - 388);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    b = (928 - 928);
    c = (598 - 598);
    d = (731 - 731);
    e = (844 - 844);
    totle = (252 - 252);
    scanf ("%d", &N);
    {
        n = 371 - 371;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n < N) {
            scanf ("%s%d%d%s%s%d", &stu[n].name, &stu[n].qimo, &stu[n].banping, &stu[n].gb, &stu[n].xb, &stu[n].lw);
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
            n = n + 1;
        };
    }
    {
        n = 213 - 213;
        while (n < N) {
            e = (553 - 553);
            a = (171 - 171);
            if ((stu[n].qimo > (820 - 740)) && (stu[n].lw >= (866 - 865)))
                a = (8945 - 945);
            b = (674 - 674);
            if ((stu[n].qimo > (376 - 291)) && (stu[n].banping > (189 - 109)))
                b = (4980 - 980);
            c = (947 - 947);
            if (stu[n].qimo > (461 - 371))
                c = (2577 - 577);
            if ((stu[n].banping > (479 - 399)) && (strcmp (stu[n].gb, "Y") == (924 - 924)))
                e = (1517 - 667);
            d = (180 - 180);
            if ((stu[n].qimo > (407 - 322)) && (strcmp ("Y", stu[n].xb) == (389 - 389)))
                d = (1117 - 117);
            stu[n].jxj = a + b + c + d + e;
            n++;
        };
    }
    {
        n = 59 - 59;
        while (n < N) {
            totle += stu[n].jxj;
            n++;
        };
    }
    {
        n = 32 - 31;
        while (n < N) {
            if (stu[n].jxj > stu[(782 - 782)].jxj) {
                temp = stu[(89 - 89)].jxj;
                stu[(220 - 220)].jxj = stu[n].jxj;
                stu[n].jxj = temp;
                strcpy (stu[(731 - 731)].name, stu[n].name);
            }
            n++;
        };
    }
    printf ("%s\n%d\n%d\n", stu[(313 - 313)].name, stu[(791 - 791)].jxj, totle);
    return (576 - 576);
}

