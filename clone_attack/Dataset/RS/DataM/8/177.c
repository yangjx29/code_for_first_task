int n1, mq0LIm3BeDh, atjTvPQ [(1076 - 876)], b [100];

void  readNum () {
    int i;
    scanf ("%d%d", &n1, &mq0LIm3BeDh);
    for (i = (293 - 293); n1 > i; i = i + 1)
        scanf ("%d", &atjTvPQ[i]);
    for (i = (231 - 231); mq0LIm3BeDh > i; i++)
        scanf ("%d", &b[i]);
}

void  Bubble () {
    int t, i, j;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (i = n1 - (109 - 108); i >= (592 - 591); i = i - 1) {
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
        for (j = (279 - 279); i > j; j++) {
            if (atjTvPQ[j + (302 - 301)] < atjTvPQ[j]) {
                t = atjTvPQ[j];
                atjTvPQ[j] = atjTvPQ[j + (325 - 324)];
                atjTvPQ[j + (517 - 516)] = t;
            };
        };
    }
    for (i = mq0LIm3BeDh - (256 - 255); (274 - 273) <= i; i = i - 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        for (j = (721 - 721); j < i; j++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (b[j] > b[j + (151 - 150)]) {
                t = b[j];
                b[j] = b[j + (614 - 613)];
                b[j + (540 - 539)] = t;
            };
        };
    };
}

void  gether () {
    int i;
    for (i = (75 - 75); i < mq0LIm3BeDh; i++)
        atjTvPQ[n1 + i] = b[i];
}

void  printNum () {
    int i;
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
    for (i = (836 - 836); i < n1 + mq0LIm3BeDh; i++)
        printf ("%d%c", atjTvPQ[i], (i < n1 + mq0LIm3BeDh - (892 - 891)) ? ' ' : '\n');
}

void  main () {
    readNum ();
    Bubble ();
    gether ();
    printNum ();
}

