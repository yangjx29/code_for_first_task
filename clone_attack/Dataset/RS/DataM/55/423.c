int main () {
    long  num = 0;
    char GzovisMmt9 [] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int EhoVXQKWgFb [128];
    char in [255], QkeMD5bnru [255] = "0";
    int Usomy9wV, QIzPoEZnR, to, nhzK3ZuVDwJH = 0;
    for (Usomy9wV = '0'; '9' >= Usomy9wV; Usomy9wV++) {
        EhoVXQKWgFb[Usomy9wV] = Usomy9wV -'0';
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
        Usomy9wV = 'A';
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
        while (Usomy9wV <= 'Z') {
            EhoVXQKWgFb[Usomy9wV] = Usomy9wV -'A' + 10;
            Usomy9wV = Usomy9wV +1;
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
    for (Usomy9wV = 'a'; 'z' > Usomy9wV; Usomy9wV++) {
        EhoVXQKWgFb[Usomy9wV] = Usomy9wV -'a' + 10;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    scanf ("%d %s %d", &QIzPoEZnR, in, &to);
    {
        Usomy9wV = 0;
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
        while (in[Usomy9wV] != '\0') {
            num = num * QIzPoEZnR +EhoVXQKWgFb[in[Usomy9wV]];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            Usomy9wV++;
        };
    }
    nhzK3ZuVDwJH = (num == 0) ? 1 : 0;
    while (num > 0) {
        QkeMD5bnru[nhzK3ZuVDwJH++] = GzovisMmt9[num % to];
        num = num / to;
    }
    {
        Usomy9wV = nhzK3ZuVDwJH - 1;
        while (Usomy9wV >= 0) {
            printf ("%c", QkeMD5bnru[Usomy9wV]);
            Usomy9wV--;
        };
    }
    return 0;
}

