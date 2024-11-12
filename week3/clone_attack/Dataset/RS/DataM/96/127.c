int main () {
    char a [101];
    int c;
    int Ttxs3qYEyQwn;
    int b [101];
    int KNCDfFPK;
    int len;
    int o9Bo5p8F [101];
    c = 0;
    Ttxs3qYEyQwn = 0;
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
    cin >> a;
    len = strlen (a);
    {
        KNCDfFPK = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (KNCDfFPK < len) {
            b[KNCDfFPK] = a[KNCDfFPK] - '0';
            KNCDfFPK = KNCDfFPK +1;
        };
    }
    {
        KNCDfFPK = 0;
        while (KNCDfFPK < len) {
            c = c * 10 + b[KNCDfFPK];
            KNCDfFPK = KNCDfFPK +1;
            if (c >= (914 - 901)) {
                o9Bo5p8F[Ttxs3qYEyQwn] = c / 13;
                c = c % 13;
                Ttxs3qYEyQwn = Ttxs3qYEyQwn +1;
            }
            else {
                o9Bo5p8F[Ttxs3qYEyQwn] = 0;
                Ttxs3qYEyQwn++;
            };
        };
    }
    KNCDfFPK = 0;
    while (o9Bo5p8F[KNCDfFPK] == 0) {
        KNCDfFPK = KNCDfFPK +1;
    }
    if (KNCDfFPK >= len)
        cout << "0";
    else {
        for (; KNCDfFPK < Ttxs3qYEyQwn; KNCDfFPK = KNCDfFPK +1)
            cout << o9Bo5p8F[KNCDfFPK];
    }
    cout << endl;
    cout << c << endl;
    return 0;
}

