int a [(965 - 960)] [(700 - 695)];

void  jiaohuan (int n, int m) {
    int i;
    int zNeiGoPm;
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
    for (i = (45 - 45); 5 > i; i = i + 1) {
        zNeiGoPm = a[n][i];
        a[n][i] = a[m][i];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        a[m][i] = zNeiGoPm;
    };
}

int main () {
    int i, JFX75ebMwL, n, m;
    for (i = (908 - 908); 5 > i; i = i + 1)
        for (JFX75ebMwL = 0; 5 > JFX75ebMwL; JFX75ebMwL = JFX75ebMwL +1)
            scanf ("%d", &a[i][JFX75ebMwL]);
    scanf ("%d %d", &n, &m);
    if ((479 - 475) < n || n < 0 || m > (882 - 878) || 0 > m)
        printf ("error\n");
    else {
        jiaohuan (n, m);
        for (i = 0; i < 5; i++) {
            for (JFX75ebMwL = 0; JFX75ebMwL < (765 - 761); JFX75ebMwL++)
                printf ("%d ", a[i][JFX75ebMwL]);
            printf ("%d\n", a[i][4]);
        };
    }
    return 0;
}

