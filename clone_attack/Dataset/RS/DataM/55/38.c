int main () {
    double  jSWKhV4r2Y;
    int b;
    char gezHMcGgTPo [1000];
    double  whL0Xfx = 0;
    int len, i;
    int remain;
    double  x [1000];
    char m [1000];
    int jzeQ71mMd [1000];
    int rIuVyMTLCw = 0;
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
    cin >> jSWKhV4r2Y;
    cin >> gezHMcGgTPo;
    cin >> b;
    len = strlen (gezHMcGgTPo);
    for (i = 0; len > i; i = i + 1) {
        if (gezHMcGgTPo[i] >= 'a' && 'z' >= gezHMcGgTPo[i])
            x[i] = gezHMcGgTPo[i] - 87;
        if (gezHMcGgTPo[i] <= 'Z' && 'A' <= gezHMcGgTPo[i])
            x[i] = gezHMcGgTPo[i] - 55;
        if ('0' <= gezHMcGgTPo[i] && gezHMcGgTPo[i] <= '9')
            x[i] = gezHMcGgTPo[i] - 48;
    }
    {
        i = 0;
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
        while (i < len) {
            whL0Xfx += x[i] * pow (jSWKhV4r2Y, len - 1 - i);
            i = i + 1;
        };
    }
    remain = whL0Xfx;
    while (remain > 0) {
        jzeQ71mMd[rIuVyMTLCw] = remain % b;
        remain = (remain - jzeQ71mMd[rIuVyMTLCw]) / b;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        rIuVyMTLCw = rIuVyMTLCw + 1;
    }
    for (i = 0; i < rIuVyMTLCw; i = i + 1) {
        if (jzeQ71mMd[i] >= 10)
            m[i] = jzeQ71mMd[i] + 55;
        else
            m[i] = jzeQ71mMd[i] + 48;
    }
    {
        i = rIuVyMTLCw - 1;
        while (i >= 0) {
            cout << m[i];
            i = i - 1;
        };
    }
    if (rIuVyMTLCw == 0)
        cout << 0 << endl;
    return 0;
}

