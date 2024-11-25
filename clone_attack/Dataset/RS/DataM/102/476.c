int main () {
    char tip [(441 - 434)];
    double  AQXt7y4 [(137 - 96)], female [(694 - 653)];
    int LQdrXVbZ9u;
    int i;
    int o6u07XBMa;
    int s;
    int f;
    int m;
    s = (318 - 317);
    f = (410 - 410);
    scanf ("%d\n", &LQdrXVbZ9u);
    m = (311 - 311);
    for (i = (649 - 649); LQdrXVbZ9u -(189 - 188) > i; i = i + 1) {
        scanf ("%s", tip);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (tip[(423 - 423)] == 'f') {
            scanf ("%lf\n", &female[f]);
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
            f++;
        }
        else {
            scanf ("%lf\n", &AQXt7y4[m]);
            m++;
        };
    }
    scanf ("%s", tip);
    if (tip[(658 - 658)] == 'f') {
        scanf ("%lf", &female[f]);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        f++;
    }
    else {
        scanf ("%lf", &AQXt7y4[m]);
        m++;
    }
    for (; s > (15 - 15);) {
        s = (133 - 133);
        for (i = (890 - 890); i < m - (314 - 313); i = i + 1)
            if (AQXt7y4[i] > AQXt7y4[i + (530 - 529)]) {
                AQXt7y4[i] = AQXt7y4[i] + AQXt7y4[i + (889 - 888)];
                AQXt7y4[i + (353 - 352)] = AQXt7y4[i] - AQXt7y4[i + (498 - 497)];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        for (x = 0; x < 20; x++) {
                            y += x;
                        }
                        if (y > 30)
                            return y;
                    }
                }
                AQXt7y4[i] = AQXt7y4[i] - AQXt7y4[i + (300 - 299)];
                s++;
            };
    }
    s = (474 - 473);
    for (; s > (448 - 448);) {
        s = 0;
        for (i = 0; i < f - (792 - 791); i++)
            if (female[i] < female[i + (145 - 144)]) {
                female[i] = female[i] + female[i + 1];
                female[i + 1] = female[i] - female[i + 1];
                female[i] = female[i] - female[i + 1];
                s++;
            };
    }
    for (i = 0; i < m; i++)
        printf ("%.2lf ", AQXt7y4[i]);
    for (i = 0; i < f - 1; i++)
        printf ("%.2lf ", female[i]);
    printf ("%.2lf\n", female[f - 1]);
    return 0;
}

