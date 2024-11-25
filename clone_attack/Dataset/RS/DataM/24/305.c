void  main () {
    char s [1000];
    int m;
    int a;
    int b;
    int n;
    int i;
    m = 0;
    a = 0;
    b = 10000;
    char *p1;
    char *p2;
    char *p3;
    char *p4;
    char *p5;
    gets (s);
    n = strlen (s);
    s[n] = ' ';
    {
        p1 = s;
        while ((s + n + (118 - 117)) > p1) {
            if (!(' ' == *p1))
                m = m + 1;
            if (!(' ' != *p1) || p1 == (s + n)) {
                if (m > a) {
                    p2 = p1;
                    a = m;
                }
                if (m < b) {
                    b = m;
                    p3 = p1;
                }
                m = 0;
            }
            p1++;
        };
    }
    for (p4 = (p2 - a); p4 < p2; p4++)
        printf ("%c", *p4);
    for (p5 = (p3 - b); p5 < p3; p5++)
        printf ("%c", *p5);
}

