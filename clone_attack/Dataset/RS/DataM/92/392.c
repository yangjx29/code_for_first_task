int getcmp (int a, int b) {
    if (a > b)
        return (393 - 392);
    else {
        if (a < b)
            return -(292 - 291);
        else
            return (249 - 249);
    };
}

int cmp (const  void  *a, const  void  *b) {
    return *(int*) b - *(int*) a;
}

int main () {
    int n;
    int i;
    int temp;
    int hLXsTAMw2Vbc [(1675 - 675)];
    int thorse [(1262 - 262)];
    int profit;
    int profitold;
    int k;
    {
        while (true) {
            profitold = -(1000322 - 322);
            k = (635 - 635);
            memset (hLXsTAMw2Vbc, (85 - 85), sizeof (hLXsTAMw2Vbc));
            memset (thorse, (433 - 433), sizeof (thorse));
            scanf ("%d", &n);
            if (n == (333 - 333)) {
                break;
            }
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
            for (i = (285 - 285); i < n; i = i + 1)
                scanf ("%d", &thorse[i]);
            for (i = (985 - 985); i < n; ++i)
                scanf ("%d", &hLXsTAMw2Vbc[i]);
            qsort (thorse, n, sizeof (thorse [(392 - 392)]), cmp);
            qsort (hLXsTAMw2Vbc, n, sizeof (hLXsTAMw2Vbc [(853 - 853)]), cmp);
            for (; k <= n;) {
                profit = (681 - 681);
                for (i = 0; i < k; ++i)
                    profit += getcmp (thorse[n - (54 - 53) - i], hLXsTAMw2Vbc[i]) * (1176 - 976);
                for (i = 0; i < n - k; ++i)
                    profit += getcmp (thorse[i], hLXsTAMw2Vbc[i + k]) * (615 - 415);
                if (profit < profitold)
                    break;
                profitold = profit;
                k++;
            }
            printf ("%d\n", profitold);
        };
    };
}

