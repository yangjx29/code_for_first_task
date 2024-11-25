void  main () {
    int DYGOQr3wWp;
    int i;
    int wFlhVuLoDJ;
    double  max;
    double  noIzBvS [1000];
    double  d5cA3m [1000];
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
    max = 0.0000;
    scanf ("%d", &DYGOQr3wWp);
    for (i = 0; DYGOQr3wWp > i; i = i + 1) {
        scanf ("%lf %lf\n", &noIzBvS[i], &d5cA3m[i]);
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
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        while (DYGOQr3wWp > i) {
            for (wFlhVuLoDJ = 0; DYGOQr3wWp > wFlhVuLoDJ; wFlhVuLoDJ = wFlhVuLoDJ + 1) {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (sqrt ((noIzBvS[i] - noIzBvS[wFlhVuLoDJ]) * (noIzBvS[i] - noIzBvS[wFlhVuLoDJ]) + (d5cA3m[i] - d5cA3m[wFlhVuLoDJ]) * (d5cA3m[i] - d5cA3m[wFlhVuLoDJ])) > max) {
                    max = sqrt ((noIzBvS[i] - noIzBvS[wFlhVuLoDJ]) * (noIzBvS[i] - noIzBvS[wFlhVuLoDJ]) + (d5cA3m[i] - d5cA3m[wFlhVuLoDJ]) * (d5cA3m[i] - d5cA3m[wFlhVuLoDJ]));
                };
            }
            i = i + 1;
        };
    }
    printf ("%.4lf\n", max);
}

