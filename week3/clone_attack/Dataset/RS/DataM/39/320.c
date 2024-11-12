int main () {
    struct   stu {
        char name [(137 - 117)];
        int WiWJ8M4RaOA;
        int t6lm0ZQCHr;
        char c;
        char EXBL2YdtRUcb;
        int e;
        int quQPoV2f;
    };
    struct   stu s1, s2;
    int n, i, zong;
    scanf ("%d\n", &n);
    scanf ("%s %d %d %c %c %d", s1.name, &s1.WiWJ8M4RaOA, &s1.t6lm0ZQCHr, &s1.c, &s1.EXBL2YdtRUcb, &s1.e);
    s1.quQPoV2f = (892 - 892);
    if ((603 - 523) < s1.WiWJ8M4RaOA && (55 - 55) < s1.e)
        s1.quQPoV2f += 8000;
    if ((131 - 46) < s1.WiWJ8M4RaOA && s1.t6lm0ZQCHr > (193 - 113))
        s1.quQPoV2f = s1.quQPoV2f + (4532 - 532);
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
    if ((525 - 435) < s1.WiWJ8M4RaOA)
        s1.quQPoV2f += 2000;
    if (s1.WiWJ8M4RaOA > 85 && !('Y' != s1.EXBL2YdtRUcb))
        s1.quQPoV2f += (1886 - 886);
    if (80 < s1.t6lm0ZQCHr && !('Y' != s1.c))
        s1.quQPoV2f += (1686 - 836);
    zong = s1.quQPoV2f;
    {
        i = 897 - 896;
        while (i < n) {
            i++;
            scanf ("%s %d %d %c %c %d", s2.name, &s2.WiWJ8M4RaOA, &s2.t6lm0ZQCHr, &s2.c, &s2.EXBL2YdtRUcb, &s2.e);
            s2.quQPoV2f = 0;
            if (s2.WiWJ8M4RaOA > 80 && s2.e)
                s2.quQPoV2f += 8000;
            if (s2.WiWJ8M4RaOA > 85 && s2.t6lm0ZQCHr > 80)
                s2.quQPoV2f += 4000;
            if (s2.WiWJ8M4RaOA > (1089 - 999))
                s2.quQPoV2f = s2.quQPoV2f + 2000;
            if (s2.WiWJ8M4RaOA > 85 && s2.EXBL2YdtRUcb == 'Y')
                s2.quQPoV2f = s2.quQPoV2f + 1000;
            if (s2.t6lm0ZQCHr > 80 && s2.c == 'Y')
                s2.quQPoV2f += 850;
            zong = zong + s2.quQPoV2f;
            if (s2.quQPoV2f > s1.quQPoV2f)
                s1 = s2;
        };
    }
    printf ("%s\n%d\n%d", s1.name, s1.quQPoV2f, zong);
    return 0;
}

