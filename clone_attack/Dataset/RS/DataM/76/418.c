int main () {
    char kkOFQAHd;
    kkOFQAHd = 'y';
    int qMgtcTX9uUF;
    int N0nLkRSQdOhq;
    int a [10000];
    int t6LDlIjh [10000];
    int pcZGmRh7u6i;
    int cXgm9SnaceVU;
    scanf ("%d", &qMgtcTX9uUF);
    for (N0nLkRSQdOhq = (106 - 105); qMgtcTX9uUF >= N0nLkRSQdOhq; N0nLkRSQdOhq++) {
        scanf ("%d %d", &a[N0nLkRSQdOhq], &t6LDlIjh[N0nLkRSQdOhq]);
    }
    {
        cXgm9SnaceVU = 898 - 897;
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
        while (cXgm9SnaceVU < qMgtcTX9uUF) {
            cXgm9SnaceVU++;
            for (pcZGmRh7u6i = (663 - 662); pcZGmRh7u6i < qMgtcTX9uUF; pcZGmRh7u6i++) {
                N0nLkRSQdOhq = pcZGmRh7u6i + 1;
                while (N0nLkRSQdOhq <= qMgtcTX9uUF) {
                    if (a[pcZGmRh7u6i] >= a[N0nLkRSQdOhq] && a[pcZGmRh7u6i] <= t6LDlIjh[N0nLkRSQdOhq] && t6LDlIjh[N0nLkRSQdOhq] <= t6LDlIjh[pcZGmRh7u6i]) {
                        a[pcZGmRh7u6i] = a[N0nLkRSQdOhq];
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        };
                    }
                    else if (t6LDlIjh[pcZGmRh7u6i] >= a[N0nLkRSQdOhq] && t6LDlIjh[pcZGmRh7u6i] <= t6LDlIjh[N0nLkRSQdOhq] && a[pcZGmRh7u6i] <= a[N0nLkRSQdOhq]) {
                        t6LDlIjh[pcZGmRh7u6i] = t6LDlIjh[N0nLkRSQdOhq];
                    }
                    else if (t6LDlIjh[pcZGmRh7u6i] >= a[N0nLkRSQdOhq] && t6LDlIjh[pcZGmRh7u6i] <= t6LDlIjh[N0nLkRSQdOhq] && a[pcZGmRh7u6i] >= a[N0nLkRSQdOhq]) {
                        a[pcZGmRh7u6i] = a[N0nLkRSQdOhq];
                        t6LDlIjh[pcZGmRh7u6i] = t6LDlIjh[N0nLkRSQdOhq];
                    }
                    N0nLkRSQdOhq++;
                };
            };
        };
    }
    for (N0nLkRSQdOhq = 1; N0nLkRSQdOhq <= qMgtcTX9uUF; N0nLkRSQdOhq++) {
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
        if (a[1] <= a[N0nLkRSQdOhq] && t6LDlIjh[1] >= t6LDlIjh[N0nLkRSQdOhq]) {
            kkOFQAHd = 'y';
        }
        else {
            kkOFQAHd = 'n';
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            break;
        };
    }
    if (kkOFQAHd == 'y') {
        printf ("%d %d", a[1], t6LDlIjh[1]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    }
    else if (kkOFQAHd == 'n') {
    }
    return (926 - 926);
}

