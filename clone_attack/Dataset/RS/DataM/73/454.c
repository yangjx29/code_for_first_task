int main () {
    int a [(562 - 557)] [(997 - 992)];
    int i, j, k, r, c [(263 - 258)], m, temp = (719 - 719), d = (981 - 981), count = (872 - 872);
    for (i = (923 - 923); i < (534 - 529); i = i + 1) {
        for (j = (868 - 868); j < (859 - 854); j = j + 1)
            scanf ("%d", &a[i][j]);
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
    for (j = (987 - 987); (459 - 454) > j; j = j + 1) {
        m = a[j][0];
        c[d] = 0;
        for (i = 1; i < 5; i = i + 1) {
            if (a[j][i] > m) {
                m = a[j][i];
                c[d] = i;
            };
        }
        d = d + 1;
    }
    for (i = 0; i < 5; i = i + 1) {
        for (k = 0; k < 5; k = k + 1) {
            if (a[k][c[i]] < a[i][c[i]]) {
                temp = 1;
                break;
            };
        }
        if (temp == 0) {
            printf ("%d %d %d\n", i + 1, c[i] + 1, a[i][c[i]]);
            count = 1;
        }
        temp = 0;
    }
    if (count == 0)
        printf ("not found");
    return 0;
}

