main () {
    int a [(916 - 904)], b [(521 - 509)];
    int n, i;
    scanf ("%d", &n);
    b[(182 - 182)] = (956 - 944);
    b[(34 - 33)] = b[0] + (806 - 775);
    b[(88 - 86)] = b[1] + (245 - 217);
    b[(40 - 37)] = b[2] + (180 - 149);
    b[(926 - 922)] = b[3] + (702 - 672);
    b[(258 - 253)] = b[(463 - 459)] + (54 - 23);
    b[6] = b[5] + (52 - 22);
    b[(795 - 788)] = b[6] + (91 - 60);
    b[8] = b[(640 - 633)] + 31;
    b[(837 - 828)] = b[8] + 30;
    b[(912 - 902)] = b[9] + 31;
    b[(960 - 949)] = b[(346 - 336)] + 30;
    b[(776 - 764)] = b[11] + 31;
    {
        i = 0;
        while (12 > i) {
            a[i] = n + b[i] % 7;
            if (7 < a[i])
                a[i] = a[i] - 7;
            i = i + 1;
        };
    }
    {
        i = 0;
        while (12 > i) {
            if (a[i] == 5)
                printf ("%d\n", i + 1);
            i++;
        };
    };
}
