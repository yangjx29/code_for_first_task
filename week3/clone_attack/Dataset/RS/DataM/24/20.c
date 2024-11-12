int main () {
    char str [(2352 - 352)];
    int GpSyFxgBc;
    int mhaSuV4D;
    int tempLen;
    int uuP4gSfQF2p9;
    int len;
    int uC8qp1LAE;
    int kvTSqzLwfK;
    GpSyFxgBc = (48 - 48);
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
    mhaSuV4D = 100;
    tempLen = (410 - 410);
    cin.getline (str, (2808 - 808));
    len = strlen (str);
    {
        uuP4gSfQF2p9 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (len >= uuP4gSfQF2p9) {
            if (!(' ' == str[uuP4gSfQF2p9]) && !('\0' == str[uuP4gSfQF2p9]))
                tempLen++;
            else {
                if (mhaSuV4D > tempLen) {
                    mhaSuV4D = tempLen;
                    uC8qp1LAE = uuP4gSfQF2p9 - mhaSuV4D;
                }
                if (tempLen > GpSyFxgBc) {
                    GpSyFxgBc = tempLen;
                    kvTSqzLwfK = uuP4gSfQF2p9 - GpSyFxgBc;
                }
                tempLen = 0;
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
            uuP4gSfQF2p9++;
        };
    }
    {
        uuP4gSfQF2p9 = kvTSqzLwfK;
        while (uuP4gSfQF2p9 < kvTSqzLwfK + GpSyFxgBc) {
            cout << str[uuP4gSfQF2p9];
            uuP4gSfQF2p9++;
        };
    }
    cout << endl;
    {
        uuP4gSfQF2p9 = uC8qp1LAE;
        while (uuP4gSfQF2p9 < uC8qp1LAE + mhaSuV4D) {
            cout << str[uuP4gSfQF2p9];
            uuP4gSfQF2p9++;
        };
    }
    cout << endl;
    return 0;
}

