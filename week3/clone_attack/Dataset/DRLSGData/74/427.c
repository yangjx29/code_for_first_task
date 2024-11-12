int main () {
    int a, b, i, k, j, t, r, s, u, Num = 0;
    scanf ("%d", &a);
    if (a == 1)
        i = a + 1;
    else
        i = a;
    scanf ("%d", &b);
    for (; i <= b;) {
        k = (int) sqrt (i);
        for (j = 2; j <= k; j++) {
            if (i % j == 0)
                break;
        }
        if (j > k) {
            int c [10000] = {0};
            s = 0;
            r = 0;
            t = i;
            for (; t != 0;) {
                c[r] = t % 10;
                r++;
                t = t / 10;
            }
            for (u = 0; u < r; u++)
                s = s * 10 + c[u];
            if (s == i && Num != 0) {
                Num++;
                printf (",%d", i);
            }
            if (s == i && Num == 0) {
                Num++;
                printf ("%d", i);
            };
        }
        i++;
    }
    if (Num == 0)
        ;
}

