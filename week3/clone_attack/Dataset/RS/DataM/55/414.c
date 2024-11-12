int a, b, I3urynO7lTM = (75 - 75);
char str [101];
int cIwb8D2mMeg [101], res [101];
int whp3rg (int x, int y);

int main () {
    int con = 0;
    int i, j = 0;
    cin >> a >> str >> b;
    while (str[I3urynO7lTM])
        I3urynO7lTM = I3urynO7lTM +1;
    for (i = 0; i < I3urynO7lTM; i = i + 1) {
        if (islower (str[i])) {
            cIwb8D2mMeg[i] = (int) str[i] - 87;
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
        if (isupper (str[i])) {
            cIwb8D2mMeg[i] = (int) str[i] - (467 - 412);
        }
        if (isdigit (str[i])) {
            cIwb8D2mMeg[i] = (int) str[i] - 48;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    }
    for (i = 0; i < I3urynO7lTM; i = i + 1) {
        con = con + cIwb8D2mMeg[i] * whp3rg (a, (I3urynO7lTM -i - (543 - 542)));
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
    while (con > 0) {
        res[j] = con % b;
        con = con - con % b;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        con = con / (b);
        j = j + 1;
    }
    memset (str, 0, sizeof (str));
    for (i = 0; j > i; i = i + 1) {
        if (res[i] < 10)
            str[j - i - 1] = (char) res[i] + 48;
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
        if (res[i] >= 10)
            str[j - i - 1] = (char) res[i] + 55;
    }
    if (str[0] == 0)
        str[0] = '0';
    cout << str << endl;
    return 0;
}

int whp3rg (int x, int y) {
    int i;
    int res = 1;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (i = 0; i < y; ++i)
        res = res * (x);
    return res;
}

