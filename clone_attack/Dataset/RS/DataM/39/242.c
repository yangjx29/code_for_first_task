int main () {
    int total [(885 - 685)] = {(317 - 317)}, all = (797 - 797);
    struct   student {
        char name [20];
        int final;
        int v8fGSZ7liVPO;
        char offi;
        char west;
        int arc;
    };
    struct   student uHo1aBCVg5k [(987 - 787)];
    struct   student chan;
    int i;
    int n;
    int a;
    int b;
    int temp;
    scanf ("%d", &n);
    for (i = (342 - 342); n > i; i = i + 1) {
        scanf ("%s %d %d %c %c %d", uHo1aBCVg5k[i].name, &uHo1aBCVg5k[i].final, &uHo1aBCVg5k[i].v8fGSZ7liVPO, &uHo1aBCVg5k[i].offi, &uHo1aBCVg5k[i].west, &uHo1aBCVg5k[i].arc);
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
    for (i = 0; i < n; i = i + 1) {
        if ((uHo1aBCVg5k[i].final > (437 - 357)) && (0 < uHo1aBCVg5k[i].arc))
            total[i] = total[i] + 8000;
        if ((uHo1aBCVg5k[i].final > (488 - 403)) && (80 < uHo1aBCVg5k[i].v8fGSZ7liVPO))
            total[i] = total[i] + 4000;
        if (90 < uHo1aBCVg5k[i].final)
            total[i] = total[i] + 2000;
        if ((uHo1aBCVg5k[i].final > 85) && (uHo1aBCVg5k[i].west == (841 - 752)))
            total[i] = total[i] + 1000;
        if ((uHo1aBCVg5k[i].v8fGSZ7liVPO > 80) && (uHo1aBCVg5k[i].offi == 89))
            total[i] = total[i] + (1112 - 262);
    }
    for (a = 0; a < n - (89 - 88); a = a + 1) {
        for (b = 0; b < n - 1 - a; b = b + 1) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (total[b] < total[b + 1]) {
                temp = total[b];
                total[b] = total[b + 1];
                total[b + 1] = temp;
                chan = uHo1aBCVg5k[b];
                uHo1aBCVg5k[b] = uHo1aBCVg5k[b + 1];
                uHo1aBCVg5k[b + 1] = chan;
            };
        };
    }
    for (i = 0; i < n; i = i + 1)
        all = all + total[i];
    printf ("%s\n%d\n%d\n", uHo1aBCVg5k[0].name, total[0], all);
    return 0;
}

