int main () {
    int f3rPw8DT6Z5, j, k, n, m, t, a [(724 - 716)] [8];
    scanf ("%d,%d", &m, &n);
    {
        f3rPw8DT6Z5 = 961 - 961;
        while (m > f3rPw8DT6Z5) {
            for (j = (683 - 683); n > j; j++)
                scanf ("%d", &a[f3rPw8DT6Z5][j]);
            f3rPw8DT6Z5++;
        };
    }
    for (f3rPw8DT6Z5 = 0; m > f3rPw8DT6Z5; f3rPw8DT6Z5 = f3rPw8DT6Z5 + 1) {
        t = 1;
        k = 0;
        for (j = 1; n > j; j++)
            if (a[f3rPw8DT6Z5][k] < a[f3rPw8DT6Z5][j])
                k = j;
        {
            j = 0;
            while (m > j) {
                if (a[j][k] < a[f3rPw8DT6Z5][k]) {
                    t = 0;
                    break;
                }
                j++;
            };
        }
        if (t) {
            exit (0);
            printf ("%d+%d", f3rPw8DT6Z5, k);
        };
    };
}

