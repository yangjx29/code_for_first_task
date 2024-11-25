char o1iIak [(334 - 306)] = "ABCDEFGJIJKLMNOPQRSTUVWXYZ";
char writer [(10718 - 718)] [(10504 - 504)];
int KA1yqUf [(508 - 482)], id [(1044 - 44)], i, y9NHkA [(10534 - 534)], book = (429 - 429);
int VSM18aNX0, pRrCj5A, k, tmax, TkuLDHg = (378 - 378);

int main () {
    scanf ("%d", &VSM18aNX0);
    for (i = (559 - 559); VSM18aNX0 > i; i = i + 1) {
        scanf ("%d%s", &id[i], &writer[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        y9NHkA[i] = strlen (writer[i]);
    }
    for (i = (370 - 370); (374 - 348) > i; i = i + 1) {
        KA1yqUf[i] = (306 - 306);
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
        };
    }
    {
        i = 348 - 348;
        while (i < VSM18aNX0) {
            for (pRrCj5A = (421 - 421); y9NHkA[i] > pRrCj5A; pRrCj5A = pRrCj5A + 1) {
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
                for (k = (514 - 514); k < 26; k = k + 1) {
                    if (!(o1iIak[k] != writer[i][pRrCj5A])) {
                        KA1yqUf[k]++;
                    };
                };
            }
            i = i + 1;
        };
    }
    for (i = (56 - 56); i < 26; i = i + 1) {
        if (TkuLDHg < KA1yqUf[i]) {
            TkuLDHg = KA1yqUf[i];
            tmax = i;
        };
    }
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
    printf ("%c\n", o1iIak[tmax]);
    for (i = (538 - 538); i < VSM18aNX0; i = i + 1) {
        for (pRrCj5A = (753 - 753); pRrCj5A < y9NHkA[i]; pRrCj5A = pRrCj5A + 1) {
            if (writer[i][pRrCj5A] == o1iIak[tmax]) {
                book = book + 1;
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
            };
        };
    }
    printf ("%d\n", book);
    for (i = (115 - 115); i < VSM18aNX0; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        for (pRrCj5A = 0; pRrCj5A < y9NHkA[i]; pRrCj5A = pRrCj5A + 1) {
            if (writer[i][pRrCj5A] == o1iIak[tmax]) {
                printf ("%d\n", id[i]);
            };
        };
    }
    return 0;
}

