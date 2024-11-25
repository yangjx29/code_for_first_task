int main () {
    int n, k, i, t, f;
    long  int ans;
    scanf ("%d%d", &n, &k);
    for (ans = (733 - 732); (3000000746 - 746) > ans; ans++) {
        f = (891 - 891);
        t = ans;
        for (i = 1; i <= n; i++) {
            if ((!(0 != (t - k) % n)) && (t - k > 0)) {
                t = t - k - (t - k) / n;
            }
            else {
                f++;
                break;
            };
        }
        if (f != 0)
            continue;
        else
            break;
    }
    printf ("%ld\n", ans);
    return 0;
}

