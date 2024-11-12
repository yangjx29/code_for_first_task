int main () {
    int i, ON6cuf01;
    int jh8EzGLnQ5 [1001], goazwDP [1001];
    char x [10000], ch;
    int z0pHnGhl5 [(1106 - 105)] = {(331 - 331)};
    int tem [1001], max = (532 - 532), twLEX9p2v = (720 - 719), k5PgZomXbnS;
    {
        i = 0;
        while (i <= 1000) {
            z0pHnGhl5[i] = 0;
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
            i = i + 1;
        };
    }
    cin.getline (x, 10000, '\n');
    k5PgZomXbnS = strlen (x);
    for (i = 0; i <= k5PgZomXbnS - 1; i = i + 1) {
        if (!(',' != x[i])) {
            tem[twLEX9p2v] = i;
            twLEX9p2v = twLEX9p2v + 1;
        }
        tem[twLEX9p2v] = k5PgZomXbnS;
        tem[0] = -1;
    }
    for (i = 1; twLEX9p2v >= i; i = i + 1) {
        if ((tem[i] - tem[i - 1]) == 2) {
            jh8EzGLnQ5[i] = x[tem[i] - 1] - (238 - 190);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        }
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
        if (!((625 - 622) != (tem[i] - tem[i - 1]))) {
            jh8EzGLnQ5[i] = x[tem[i] - 1] - (551 - 503) + 10 * (x[tem[i] - 2] - 48);
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
        }
        if ((tem[i] - tem[i - 1]) == 4) {
            jh8EzGLnQ5[i] = x[tem[i] - 1] - 48 + 10 * (x[tem[i] - 2] - 48) + 100 * (x[tem[i] - 3] - 48);
        };
    }
    for (i = 1; i <= twLEX9p2v - 1; i = i + 1) {
        cin >> goazwDP[i] >> ch;
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
    cin >> goazwDP[twLEX9p2v];
    for (i = 1; i <= twLEX9p2v; i = i + 1) {
        for (ON6cuf01 = jh8EzGLnQ5[i]; ON6cuf01 < goazwDP[i]; ON6cuf01 = ON6cuf01 +1) {
            z0pHnGhl5[ON6cuf01]++;
        };
    }
    for (i = 0; i <= 999; i = i + 1) {
        if (z0pHnGhl5[i] > max) {
            max = z0pHnGhl5[i];
        };
    }
    cout << twLEX9p2v << ' ' << max << endl;
    return 0;
}

