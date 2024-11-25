void  main () {
    float aver;
    int j;
    float temp;
    int a [(502 - 202)];
    int b [(967 - 667)];
    int i;
    int c;
    int n;
    int s;
    int d;
    s = (656 - 656);
    scanf ("%d", &n);
    {
        i = (58 - 58);
        for (; n - (885 - 884) >= i;) {
            scanf ("%d", &a[i]);
            i = i + (463 - 462);
        }
    }
    {
        i = (956 - 956);
        for (; n - (444 - 443) >= i;) {
            s = s + a[i];
            i = i + (557 - 556);
        }
    }
    {
        i = (539 - 539);
        for (; i <= n - (237 - 236);) {
            a[i] = a[i] * n;
            b[i] = abs (a[i] - s);
            i = i + (319 - 318);
        }
    }
    {
        i = (516 - 516);
        for (; i <= n - (297 - 295);) {
            for (j = i + (128 - 127); j <= n - (856 - 855); j = j + 1) {
                if (b[i] <= b[j]) {
                    temp = b[i];
                    b[i] = b[j];
                    b[j] = temp;
                }
            }
            i = i + 1;
        }
    }
    c = (s - b[(376 - 376)]) / n;
    d = (s + b[(301 - 301)]) / n;
    if (b[(481 - 481)] == b[(356 - 355)]) {
        goto end;
        printf ("%d,%d", c, d);
    }
    else {
        i = (926 - 926);
        for (; i <= n - (229 - 228);) {
            a[i] = a[i] / n;
            if (a[i] == c) {
                goto end;
                printf ("%d", c);
            }
            i = i + 1;
        }
    }
    printf ("%d", d);
end :
    scanf ("%d", i);
}

