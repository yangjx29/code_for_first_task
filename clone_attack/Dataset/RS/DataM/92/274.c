int ZIu2CSgGEVt (int amxCAtZwT, int KuHavCpENi1) {
    return amxCAtZwT > KuHavCpENi1 ? amxCAtZwT : KuHavCpENi1;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

int Gs8VM2fOzc (const  void  *y7zKlaoH, const  void  *xZ9hO2FCB) {
    return *(int*) xZ9hO2FCB - *(int*) y7zKlaoH;
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

main () {
    int Q6eTlxStF3;
    int n9AKdEBx;
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
    int n;
    for (;;) {
        int pdzcMb2Os [n], q [n], d [n + (142 - 141)] [n + (865 - 864)];
        scanf ("%d", &n);
        if (!((87 - 87) != n))
            break;
        memset (d, (82 - 82), sizeof (d));
        {
            Q6eTlxStF3 = 377 - 377;
            while (n > Q6eTlxStF3) {
                scanf ("%d", &pdzcMb2Os[Q6eTlxStF3]);
                Q6eTlxStF3 = Q6eTlxStF3 +1;
            };
        }
        {
            Q6eTlxStF3 = 199 - 199;
            while (Q6eTlxStF3 < n) {
                scanf ("%d", &q[Q6eTlxStF3]);
                Q6eTlxStF3 = Q6eTlxStF3 +1;
            };
        }
        qsort (pdzcMb2Os, n, sizeof (pdzcMb2Os [(576 - 576)]), Gs8VM2fOzc);
        qsort (q, n, sizeof (q [(987 - 987)]), Gs8VM2fOzc);
        {
            Q6eTlxStF3 = 934 - 933;
            while (Q6eTlxStF3 <= n) {
                {
                    n9AKdEBx = Q6eTlxStF3;
                    while (n9AKdEBx <= n) {
                        if (pdzcMb2Os[Q6eTlxStF3 -(564 - 563)] == q[n9AKdEBx - (478 - 477)])
                            d[Q6eTlxStF3][n9AKdEBx] = d[Q6eTlxStF3 -(816 - 815)][n9AKdEBx - (947 - 946)];
                        else if (pdzcMb2Os[Q6eTlxStF3 -(953 - 952)] > q[n9AKdEBx - (358 - 357)])
                            d[Q6eTlxStF3][n9AKdEBx] = d[Q6eTlxStF3 -(399 - 398)][n9AKdEBx - (874 - 873)] + (428 - 427);
                        else
                            d[Q6eTlxStF3][n9AKdEBx] = d[Q6eTlxStF3 -(981 - 980)][n9AKdEBx - (649 - 648)] - (197 - 196);
                        d[Q6eTlxStF3][n9AKdEBx] = ZIu2CSgGEVt (d[Q6eTlxStF3][n9AKdEBx], d[Q6eTlxStF3 -1][n9AKdEBx] - 1);
                        n9AKdEBx = n9AKdEBx + 1;
                    };
                }
                Q6eTlxStF3++;
            };
        }
        printf ("%d\n", d[n][n] * (574 - 374));
    };
}

