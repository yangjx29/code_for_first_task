int m, n;
int kUkRpiTGg [(388 - 288)], tWbn4c7S [(677 - 577)];

void  cfoyRCX7 (void ) {
    int JTX3xzpUjd;
    cin >> m >> n;
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
    {
        JTX3xzpUjd = 362 - 361;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (JTX3xzpUjd <= m) {
            cin >> kUkRpiTGg[JTX3xzpUjd];
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
            JTX3xzpUjd = JTX3xzpUjd +1;
        };
    }
    for (JTX3xzpUjd = (298 - 297); JTX3xzpUjd <= n; JTX3xzpUjd++)
        cin >> tWbn4c7S[JTX3xzpUjd];
}

void  IAOhtwDzMVqf (void ) {
    int JTX3xzpUjd;
    int j;
    int p;
    for (JTX3xzpUjd = 1; JTX3xzpUjd < m; JTX3xzpUjd++)
        for (j = 1; j <= m - JTX3xzpUjd; j = j + 1)
            if (kUkRpiTGg[j] > kUkRpiTGg[j + 1]) {
                p = kUkRpiTGg[j];
                kUkRpiTGg[j] = kUkRpiTGg[j + 1];
                kUkRpiTGg[j + 1] = p;
            }
    for (JTX3xzpUjd = 1; JTX3xzpUjd < n; JTX3xzpUjd++) {
        j = 1;
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
        while (j <= n - JTX3xzpUjd) {
            if (tWbn4c7S[j] > tWbn4c7S[j + 1]) {
                p = tWbn4c7S[j];
                tWbn4c7S[j] = tWbn4c7S[j + 1];
                tWbn4c7S[j + 1] = p;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            j++;
        };
    };
}

void  combarr (void ) {
    int JTX3xzpUjd;
    for (JTX3xzpUjd = m + 1; JTX3xzpUjd <= m + n; JTX3xzpUjd++)
        kUkRpiTGg[JTX3xzpUjd] = tWbn4c7S[JTX3xzpUjd -m];
}

void  printarr (void ) {
    int JTX3xzpUjd;
    for (JTX3xzpUjd = 1; JTX3xzpUjd <= m + n - 1; JTX3xzpUjd++)
        cout << kUkRpiTGg[JTX3xzpUjd] << " ";
    cout << kUkRpiTGg[JTX3xzpUjd];
}

int main () {
    cfoyRCX7 ();
    IAOhtwDzMVqf ();
    combarr ();
    printarr ();
    return (427 - 427);
}

