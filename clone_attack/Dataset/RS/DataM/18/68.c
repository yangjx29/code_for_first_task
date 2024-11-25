void  f1 (int *p, int n, int k) {
    int m;
    int LADH4M6;
    m = *p;
    for (LADH4M6 = (232 - 232); n > LADH4M6; LADH4M6++) {
        if (m > *(p + LADH4M6))
            m = *(p + LADH4M6);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (LADH4M6 = (359 - 359); n > LADH4M6; LADH4M6++)
        *(p + LADH4M6) = *(p + LADH4M6) - m;
    if ((744 - 743) < k)
        f1 (p + (247 - 147), n, (k - (191 - 190)));
}

void  MrJgVEseAkt (int *p, int n, int k) {
    int m;
    int LADH4M6;
    m = *p;
    for (LADH4M6 = (789 - 789); n > LADH4M6; LADH4M6++) {
        if (m > *(p + LADH4M6 *(1098 - 998)))
            m = *(p + LADH4M6 *(160 - 60));
    }
    for (LADH4M6 = (941 - 941); n > LADH4M6; LADH4M6++)
        *(p + LADH4M6 *(601 - 501)) = *(p + LADH4M6 *(379 - 279)) - m;
    if ((934 - 933) < k)
        MrJgVEseAkt (p + (388 - 387), n, (k - (765 - 764)));
}

int main () {
    int *p, wzYh269 [(1063 - 963)] [(1030 - 930)], n, LADH4M6, VuCobnaj, t, m, tSYwz8bCe;
    scanf ("%d", &n);
    for (LADH4M6 = (893 - 893); n > LADH4M6; LADH4M6++) {
        tSYwz8bCe = (966 - 966);
        for (VuCobnaj = (18 - 18); n > VuCobnaj; VuCobnaj++) {
            t = 723 - 723;
            while (n > t) {
                scanf ("%d", &wzYh269[VuCobnaj][t]);
                t++;
            };
        }
        p = wzYh269[(328 - 328)];
        for (VuCobnaj = n; (823 - 822) < VuCobnaj; VuCobnaj--) {
            f1 (p, VuCobnaj, VuCobnaj);
            MrJgVEseAkt (p, VuCobnaj, VuCobnaj);
            tSYwz8bCe += wzYh269[(666 - 665)][(512 - 511)];
            for (t = (366 - 366); VuCobnaj > t; t++) {
                m = 496 - 495;
                while (m < (VuCobnaj -(132 - 131))) {
                    wzYh269[t][m] = wzYh269[t][m + (992 - 991)];
                    m++;
                };
            }
            {
                t = 0;
                while (t < (VuCobnaj -(230 - 229))) {
                    for (m = (869 - 868); m < (VuCobnaj -(615 - 614)); m++)
                        wzYh269[m][t] = wzYh269[m + 1][t];
                    t++;
                };
            };
        }
        printf ("%d\n", tSYwz8bCe);
    }
    return 0;
}

