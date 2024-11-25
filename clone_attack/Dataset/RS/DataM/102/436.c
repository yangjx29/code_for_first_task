struct   paixu {
    char sex [(866 - 860)];
    float height;
};
typedef struct   paixu Paixu;
void  bubble1 (Paixu *, int);
void  bubble2 (Paixu *, int, int);

main () {
    Paixu a [40];
    Paixu b [40];
    int k;
    int LUxd4tODjvCM;
    int Zy8Ntze;
    int m;
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
    k = (20 - 20);
    scanf ("%d", &LUxd4tODjvCM);
    for (Zy8Ntze = (874 - 874); LUxd4tODjvCM -(180 - 179) >= Zy8Ntze; Zy8Ntze = Zy8Ntze +1)
        scanf ("%s %f", &a[Zy8Ntze].sex, &a[Zy8Ntze].height);
    for (Zy8Ntze = 0; Zy8Ntze <= LUxd4tODjvCM -(41 - 40); Zy8Ntze = Zy8Ntze +1)
        if (!('m' != a[Zy8Ntze].sex[0])) {
            b[k] = a[Zy8Ntze];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            k++;
        }
    m = k;
    for (Zy8Ntze = 0; LUxd4tODjvCM -1 >= Zy8Ntze; Zy8Ntze++)
        if (!('f' != a[Zy8Ntze].sex[0])) {
            b[k] = a[Zy8Ntze];
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
            k++;
        }
    bubble1 (b, m);
    bubble2 (b, m, LUxd4tODjvCM);
    for (Zy8Ntze = 0; LUxd4tODjvCM -1 >= Zy8Ntze; Zy8Ntze++) {
        printf ("%.2f", b[Zy8Ntze].height);
        if (Zy8Ntze != LUxd4tODjvCM -1)
            ;
    };
}

void  bubble1 (Paixu b [], int m) {
    Paixu hold;
    int pass;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    int Zy8Ntze;
    for (pass = 1; pass <= m - 1; pass = pass + 1)
        for (Zy8Ntze = 0; Zy8Ntze <= m - 2; Zy8Ntze++)
            if (b[Zy8Ntze].height > b[Zy8Ntze +1].height) {
                hold = b[Zy8Ntze];
                b[Zy8Ntze] = b[Zy8Ntze +1];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                b[Zy8Ntze +1] = hold;
            };
}

void  bubble2 (Paixu b [], int m, int LUxd4tODjvCM) {
    int pass;
    int Zy8Ntze;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    };
    Paixu hold;
    for (pass = 1; pass <= LUxd4tODjvCM -m; pass++)
        for (Zy8Ntze = m; Zy8Ntze <= LUxd4tODjvCM -2; Zy8Ntze++)
            if (b[Zy8Ntze].height < b[Zy8Ntze +1].height) {
                hold = b[Zy8Ntze];
                b[Zy8Ntze] = b[Zy8Ntze +1];
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
                b[Zy8Ntze +1] = hold;
            };
}

