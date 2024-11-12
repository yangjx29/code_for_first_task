long  f1 (char i21u4FmVrtZE [500], int PB3eRT, int l) {
    int i, tEx3Z5C8, EWlraYd, CCn5ax [500] = {0};
    long  m;
    {
        i = l - 1;
        while (0 <= i) {
            if ('9' >= i21u4FmVrtZE[i] && '0' <= i21u4FmVrtZE[i])
                CCn5ax[i] = i21u4FmVrtZE[i] - '0';
            else {
                if (i21u4FmVrtZE[i] <= 'Z' && 'A' <= i21u4FmVrtZE[i])
                    CCn5ax[i] = i21u4FmVrtZE[i] - 'A' + 10;
                else {
                    if (i21u4FmVrtZE[i] <= 'z' && 'a' <= i21u4FmVrtZE[i])
                        CCn5ax[i] = i21u4FmVrtZE[i] - 'a' + 10;
                };
            }
            i = i - 1;
        };
    }
    EWlraYd = 0;
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
    m = 0;
    {
        i = l - 1;
        while (i >= 0) {
            EWlraYd = CCn5ax[i];
            {
                tEx3Z5C8 = 1;
                while (tEx3Z5C8 < l - i) {
                    tEx3Z5C8 = tEx3Z5C8 + 1;
                    EWlraYd = EWlraYd *PB3eRT;
                };
            }
            m = m + EWlraYd;
            i = i - 1;
        };
    }
    return m;
}

void  PUhZMRtc38 (long  m, int b) {
    char CCn5ax [500];
    int PB3eRT [500] = {0}, i = 0, tEx3Z5C8;
    do {
        i = i + 1;
        PB3eRT[i] = m % b;
        m = m / b;
    }
    while (m != 0);
    for (tEx3Z5C8 = 1; tEx3Z5C8 <= i; tEx3Z5C8 = tEx3Z5C8 + 1)
        if (PB3eRT[tEx3Z5C8] <= 9 && PB3eRT[tEx3Z5C8] >= 0)
            CCn5ax[tEx3Z5C8] = '0' + PB3eRT[tEx3Z5C8];
        else
            CCn5ax[tEx3Z5C8] = PB3eRT[tEx3Z5C8] + 'A' - 10;
    for (tEx3Z5C8 = i; tEx3Z5C8 > 0; tEx3Z5C8 = tEx3Z5C8 - 1)
        cout << CCn5ax[tEx3Z5C8];
}

int main () {
    char i21u4FmVrtZE [500];
    long  m;
    int PB3eRT, b, l;
    cin >> PB3eRT >> i21u4FmVrtZE >> b;
    l = strlen (i21u4FmVrtZE);
    m = f1 (i21u4FmVrtZE, PB3eRT, l);
    PUhZMRtc38 (m, b);
    return 0;
}

