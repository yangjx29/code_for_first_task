struct   s {
    float c;
    int b;
}
s [301] = {0.0, 0};

void  main () {
    int sum;
    int n;
    int j;
    int i;
    int a [300];
    sum = 0;
    float av;
    scanf ("%d", &n);
    for (i = 0; i < n; i = i + 1) {
        scanf ("%d", &a[i]);
        sum = sum + a[i];
    }
    av = (float) sum / n;
    for (i = 0; i < n; i = i + 1) {
        s[i].c = fabs (a[i] - av);
        s[i].b = i;
    }
    for (j = 0; j < n; j++) {
        for (i = 0; i < n - j; i = i + 1) {
            if (s[i].c < s[i + 1].c) {
                s[300] = s[i];
                s[i] = s[i + 1];
                s[i + 1] = s[300];
            };
        };
    }
    printf ("%d", a[s[0].b]);
    for (i = 1; i < n; i = i + 1) {
        if (s[i].c == s[0].c)
            printf (",%d", a[s[i].b]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
    };
}

