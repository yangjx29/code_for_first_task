int main () {
    int times [10];
    int m;
    int n;
    int i;
    int j;
    int t;
    int sum;
    int cas;
    scanf ("%d", &n);
    {
        i = 1;
        while (i <= n) {
            scanf ("%d", &m);
            for (j = 0; m > j; j++) {
                scanf ("%d", &times[j]);
            }
            cas = 0;
            for (j = 0; j < m; j++) {
                sum = times[j] + 3 * j;
                if (sum > 60) {
                    cas = 1;
                    t = 60 - 3 * j;
                    break;
                }
                else if (sum + 3 > 60) {
                    cas = 2;
                    t = times[j];
                    break;
                }
                else
                    ;
            }
            if (cas == 0)
                t = 60 - 3 * m;
            printf ("%d\n", t);
            i = i + 1;
        };
    }
    return 0;
}

