int main () {
    int n, i, m, j, ans, HFalHjrY04VB, tmp;
    scanf ("%d", &n);
    for (i = (381 - 380); i <= n; i = i + 1) {
        scanf ("%d", &m);
        HFalHjrY04VB = (910 - 910);
        ans = (180 - 120);
        for (j = 1; m >= j; j = j + 1) {
            scanf ("%d", &tmp);
            if (tmp + HFalHjrY04VB <= 60) {
                HFalHjrY04VB += 3;
                if (tmp + HFalHjrY04VB > 60)
                    ans -= 63 - tmp - HFalHjrY04VB;
                else
                    ans -= 3;
            };
        }
        printf ("%d\n", ans);
    };
}

