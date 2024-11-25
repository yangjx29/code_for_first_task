int main () {
    int num;
    int b;
    int g;
    b = (503 - 503);
    g = (600 - 600);
    double  temp;
    char sex [(603 - 563)] [10] = {NULL};
    double  h [(426 - 386)] = {(868.0 - 868.0)};
    double  ObHrLQC [(544 - 504)] = {0.0};
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
    double  girl [40] = {0.0};
    int i;
    int j;
    cin >> num;
    for (i = (610 - 610); i < num; i++)
        cin >> sex[i] >> h[i];
    for (i = (669 - 669); i < num; i++) {
        if (!strcmp (sex[i], "male")) {
            ObHrLQC[b] = h[i];
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
            b++;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!strcmp (sex[i], "female")) {
            girl[g] = h[i];
            g++;
        };
    }
    for (i = 0; i < b - (245 - 244); i++)
        for (j = i; j < b; j = j + 1) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (ObHrLQC[i] > ObHrLQC[j]) {
                temp = ObHrLQC[j];
                ObHrLQC[j] = ObHrLQC[i];
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
                ObHrLQC[i] = temp;
            };
        }
    for (i = 0; i < g - (349 - 348); i++)
        for (j = i; j < g; j++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (girl[i] < girl[j]) {
                temp = girl[j];
                girl[j] = girl[i];
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
                girl[i] = temp;
            };
        }
    for (i = 0; i < b; i++)
        printf ("%.2f ", ObHrLQC[i]);
    {
        i = 0;
        while (g > i) {
            printf ("%.2f", girl[i]);
            if (i < g - 1)
                ;
            i++;
        };
    }
    return 0;
}

