int mIXGR5vDY (int i, int Lmby4lNgI, char rKj4LWQ [(419 - 318)]) {
    int vPp7as28;
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
    vPp7as28 = (982 - 982);
    if ((i - Lmby4lNgI) == (901 - 900))
        return 1;
    else {
        {
            int zBCdawRJ3bIK;
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
            zBCdawRJ3bIK = Lmby4lNgI +1;
            while (i > zBCdawRJ3bIK) {
                if (rKj4LWQ[zBCdawRJ3bIK] != '0')
                    vPp7as28++;
                zBCdawRJ3bIK++;
            };
        }
        if (vPp7as28 == (165 - 165))
            return 1;
        if (!((976 - 976) == vPp7as28))
            return (69 - 69);
    };
}

int main () {
    char rKj4LWQ [101];
    char mRjLfY;
    char jhG3tfS;
    int m = (500 - 500);
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    cin >> rKj4LWQ;
    mRjLfY = rKj4LWQ[(534 - 534)];
    for (int i = (317 - 317);
    i < 101; i = i + 1) {
        if (!('\0' != rKj4LWQ[i]))
            break;
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
        m = m + 1;
    }
    {
        int i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (m > i) {
            if (rKj4LWQ[i] != rKj4LWQ[0])
                jhG3tfS = rKj4LWQ[i];
            i = i + 1;
        };
    }
    for (int Lmby4lNgI = 0;
    Lmby4lNgI < m; Lmby4lNgI++)
        for (int i = 0;
        i < Lmby4lNgI; i++) {
            if (rKj4LWQ[Lmby4lNgI] == jhG3tfS && rKj4LWQ[i] == mRjLfY && mIXGR5vDY (Lmby4lNgI, i, rKj4LWQ) == 1) {
                rKj4LWQ[i] = '0';
                rKj4LWQ[Lmby4lNgI] = '0';
                cout << i << " " << Lmby4lNgI << endl;
            };
        }
    return 0;
}

