int main () {
    int Vs73Ya6;
    int TVWe9fXv;
    int n09v6nJ;
    Vs73Ya6 = 0;
    char DQzY0H1WCimc [3] [51];
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
    int b;
    b = 0;
    for (TVWe9fXv = 0; 2 > TVWe9fXv; TVWe9fXv = TVWe9fXv +1) {
        scanf ("%s", DQzY0H1WCimc[TVWe9fXv]);
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
    for (TVWe9fXv = 0; TVWe9fXv < 50; TVWe9fXv++) {
        if (!('\0' == DQzY0H1WCimc[0][TVWe9fXv])) {
            Vs73Ya6 = Vs73Ya6 +1;
        }
        else {
            break;
        };
    }
    for (TVWe9fXv = 0; TVWe9fXv < 50; TVWe9fXv++) {
        if (!(DQzY0H1WCimc[1][TVWe9fXv] != DQzY0H1WCimc[0][0])) {
            {
                n09v6nJ = 0;
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
                while (Vs73Ya6 > n09v6nJ) {
                    if (DQzY0H1WCimc[0][n09v6nJ] == DQzY0H1WCimc[1][TVWe9fXv +n09v6nJ]) {
                        b = b + 1;
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
                    n09v6nJ++;
                };
            }
            if (b == Vs73Ya6) {
                printf ("%d", TVWe9fXv);
            }
            else {
                b = 0;
            };
        };
    }
    return 0;
}

