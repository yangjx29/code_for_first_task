typedef struct   {
    char PnMIJb [10];
    int ord;
    int times;
    int sign;
}
tTwYAOiEqv1;

int gIQvfZRl (const  void  *QaYtKbC, const  void  *Y2Neav3) {
    tTwYAOiEqv1 *pOMDuNQma3;
    tTwYAOiEqv1 *zCV1rziNt8DL;
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
    pOMDuNQma3 = (tTwYAOiEqv1 *) QaYtKbC;
    zCV1rziNt8DL = (tTwYAOiEqv1 *) Y2Neav3;
    if (!(zCV1rziNt8DL->times == pOMDuNQma3->times))
        return ((pOMDuNQma3->times < zCV1rziNt8DL->times)) ? (672 - 671) : -(527 - 526);
    return ((zCV1rziNt8DL->ord) < (pOMDuNQma3->ord)) ? 1 : -1;
}

int main () {
    int n;
    int i;
    int j;
    int KLI0jhkP1;
    char *MVkIilAxBK;
    tTwYAOiEqv1 A3DIfa [1000];
    int m = A3DIfa[0].times;
    char xRUbnZQIg [1000];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    if (!(1 != m)) {
        return 0;
    }
    printf ("%d\n", m);
    scanf ("%d%s", &n, xRUbnZQIg);
    MVkIilAxBK = xRUbnZQIg;
    {
        i = 671 - 671;
        while (strlen (xRUbnZQIg) + 1 - n > i) {
            MVkIilAxBK = MVkIilAxBK +1;
            A3DIfa[i].ord = i;
            A3DIfa[i].sign = 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            {
                j = 805 - 805;
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
                while (n > j) {
                    A3DIfa[i].PnMIJb[j] = *(MVkIilAxBK +j);
                    j = j + 1;
                };
            }
            A3DIfa[i].PnMIJb[n] = '\0';
            i = i + 1;
        };
    }
    for (i = 0; i < strlen (xRUbnZQIg) + 1 - n; i = i + 1) {
        KLI0jhkP1 = 1;
        {
            j = 0;
            while (j < strlen (xRUbnZQIg) + 1 - n) {
                if (i != j && strcmp (A3DIfa[i].PnMIJb, A3DIfa[j].PnMIJb) == 0)
                    KLI0jhkP1++;
                j++;
            };
        }
        A3DIfa[i].times = KLI0jhkP1;
    }
    qsort (A3DIfa, strlen (xRUbnZQIg) + 1 - n, sizeof (A3DIfa [0]), gIQvfZRl);
    {
        i = 0;
        while (i < strlen (xRUbnZQIg) + 1 - n) {
            if (A3DIfa[i].times == m && A3DIfa[i].sign) {
                printf ("%s\n", A3DIfa[i].PnMIJb);
                for (j = 0; j < strlen (xRUbnZQIg) + 1 - n; j++)
                    if (i != j && strcmp (A3DIfa[i].PnMIJb, A3DIfa[j].PnMIJb) == 0)
                        A3DIfa[j].sign = 0;
            }
            i++;
        };
    }
    return 0;
}

