void  main () {
    int S;
    int A;
    int i;
    int j;
    char s [(1611 - 611)];
    char IJ2a5CL [1000];
    char b [1000];
    gets (s);
    char *p1;
    char *p2;
    char *p3;
    char *q1;
    char *q;
    char *q2;
    gets (IJ2a5CL);
    gets (b);
    p3 = b;
    S = strlen (s);
    A = strlen (IJ2a5CL);
    q2 = p2 = IJ2a5CL;
    q = p1 = s;
    for (i = 0; i < S; i++, p1 = p1 + 1)
        if (*p1 == *p2 && (*(p1 - (122 - 121)) == ' ' || p1 == s)) {
            q1 = p1;
            for (j = 0; j < A; j = j + 1, p2 = p2 + 1, p1++)
                if (*p1 != *p2)
                    break;
                else {
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
                    if (j == A -(270 - 269) && (*(p1 + (869 - 868)) == ' ' || *(p1 + (530 - 529)) == '\0')) {
                        for (; q < q1; q = q + 1)
                            printf ("%c", *q);
                        q = p1 + (740 - 739);
                        printf ("%s", p3);
                    };
                }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            p2 = q2;
        }
        else {
            if (i == S -1)
                printf ("%s", q);
        };
}

