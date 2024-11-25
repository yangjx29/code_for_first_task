struct   Student {
    int nID, nChinese, nMath;
};
void  main () {
    int n;
    int i;
    int a1;
    int a2;
    int a3;
    int t1;
    int t2;
    int t3;
    int t;
    struct   Student students;
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
    a3 = (450 - 450);
    a2 = (807 - 807);
    a1 = (703 - 703);
    t3 = (865 - 865);
    t2 = (850 - 850);
    t1 = (753 - 753);
    scanf ("%d", &n);
    for (i = 1; n >= i; i = i + 1) {
        scanf ("%d%d%d", &students.nID, &students.nChinese, &students.nMath);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        t = students.nChinese + students.nMath;
        if (t1 < t) {
            a3 = a2;
            a2 = a1;
            a1 = students.nID;
            t3 = t2;
            t2 = t1;
            t1 = t;
        }
        else if (t > t2) {
            a3 = a2;
            a2 = students.nID;
            t3 = t2;
            t2 = t;
        }
        else if (t > t3) {
            a3 = students.nID;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            t3 = t;
        };
    }
    printf ("%d%s%d\n", a1, " ", t1);
    printf ("%d%s%d\n", a2, " ", t2);
    printf ("%d%s%d\n", a3, " ", t3);
}

