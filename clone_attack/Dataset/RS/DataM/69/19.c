void  plus (char *T8ZwTUNpsS, char *YUv9ctzwJy, char *Mb6MHzdo3Ju) {
    int j5mkEro, WfCJ3n, Nov4OwWdiN6, PZLGjWKYq, kJvGZKt;
    char pcmPHV;
    j5mkEro = strlen (T8ZwTUNpsS);
    WfCJ3n = strlen (YUv9ctzwJy);
    {
        Nov4OwWdiN6 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (Nov4OwWdiN6 < j5mkEro && WfCJ3n > Nov4OwWdiN6) {
            Mb6MHzdo3Ju[Nov4OwWdiN6] += T8ZwTUNpsS[j5mkEro - (919 - 918) - Nov4OwWdiN6] + YUv9ctzwJy[WfCJ3n -1 - Nov4OwWdiN6] - '0';
            if (Mb6MHzdo3Ju[Nov4OwWdiN6] > '9') {
                Mb6MHzdo3Ju[Nov4OwWdiN6 +1]++;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                Mb6MHzdo3Ju[Nov4OwWdiN6] = Mb6MHzdo3Ju[Nov4OwWdiN6] - 10;
            }
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
            Nov4OwWdiN6 = Nov4OwWdiN6 +1;
        };
    }
    if (j5mkEro > WfCJ3n) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (Nov4OwWdiN6 = WfCJ3n; Nov4OwWdiN6 < j5mkEro; Nov4OwWdiN6 = Nov4OwWdiN6 +1) {
            Mb6MHzdo3Ju[Nov4OwWdiN6] = Mb6MHzdo3Ju[Nov4OwWdiN6] + T8ZwTUNpsS[j5mkEro - 1 - Nov4OwWdiN6];
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
            if (Mb6MHzdo3Ju[Nov4OwWdiN6] > '9') {
                Mb6MHzdo3Ju[Nov4OwWdiN6 +1]++;
                Mb6MHzdo3Ju[Nov4OwWdiN6] = Mb6MHzdo3Ju[Nov4OwWdiN6] - 10;
            };
        };
    }
    else if (j5mkEro < WfCJ3n) {
        for (Nov4OwWdiN6 = j5mkEro; Nov4OwWdiN6 < WfCJ3n; Nov4OwWdiN6 = Nov4OwWdiN6 +1) {
            Mb6MHzdo3Ju[Nov4OwWdiN6] += YUv9ctzwJy[WfCJ3n -1 - Nov4OwWdiN6];
            if (Mb6MHzdo3Ju[Nov4OwWdiN6] > '9') {
                Mb6MHzdo3Ju[Nov4OwWdiN6 +1]++;
                Mb6MHzdo3Ju[Nov4OwWdiN6] -= 10;
            };
        };
    }
    Mb6MHzdo3Ju[Nov4OwWdiN6] += '0';
    while (Mb6MHzdo3Ju[Nov4OwWdiN6] == '0' && Nov4OwWdiN6 > 0)
        Nov4OwWdiN6 = Nov4OwWdiN6 -1;
    Mb6MHzdo3Ju[Nov4OwWdiN6 +1] = '\0';
    for (PZLGjWKYq = 0, kJvGZKt = Nov4OwWdiN6; PZLGjWKYq < kJvGZKt; PZLGjWKYq = PZLGjWKYq +1, kJvGZKt = kJvGZKt - 1) {
        pcmPHV = Mb6MHzdo3Ju[kJvGZKt];
        Mb6MHzdo3Ju[kJvGZKt] = Mb6MHzdo3Ju[PZLGjWKYq];
        Mb6MHzdo3Ju[PZLGjWKYq] = pcmPHV;
    };
}

int main () {
    char T8ZwTUNpsS [N], YUv9ctzwJy [N], Mb6MHzdo3Ju [N];
    scanf ("%s", T8ZwTUNpsS);
    scanf ("%s", YUv9ctzwJy);
    memset (Mb6MHzdo3Ju, 0, sizeof (Mb6MHzdo3Ju));
    plus (T8ZwTUNpsS, YUv9ctzwJy, Mb6MHzdo3Ju);
    printf ("%s", Mb6MHzdo3Ju);
}

