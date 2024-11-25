char KNTC89h6X4 [200];
int rNxDpYeR1Ib [200];

int main () {
    int GH4i8azN;
    int cfxCFAnbz57e;
    GH4i8azN = 0;
    int kiDA8tFv;
    kiDA8tFv = strlen (KNTC89h6X4);
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
    cin >> KNTC89h6X4;
    memset (rNxDpYeR1Ib, (553 - 553), sizeof (rNxDpYeR1Ib));
    {
        cfxCFAnbz57e = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (kiDA8tFv > cfxCFAnbz57e) {
            GH4i8azN = GH4i8azN *((315 - 305));
            GH4i8azN = GH4i8azN +KNTC89h6X4[cfxCFAnbz57e] - '0';
            if (13 > GH4i8azN) {
                rNxDpYeR1Ib[cfxCFAnbz57e] = 0;
            }
            else {
                rNxDpYeR1Ib[cfxCFAnbz57e] = GH4i8azN / 13;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                GH4i8azN %= 13;
            }
            cfxCFAnbz57e++;
        };
    }
    for (cfxCFAnbz57e = 0; cfxCFAnbz57e < kiDA8tFv; cfxCFAnbz57e = cfxCFAnbz57e + 1) {
        if (!(0 == rNxDpYeR1Ib[cfxCFAnbz57e]))
            break;
    }
    if (cfxCFAnbz57e == kiDA8tFv)
        cout << 0;
    else
        for (; cfxCFAnbz57e < kiDA8tFv; cfxCFAnbz57e++)
            cout << rNxDpYeR1Ib[cfxCFAnbz57e];
    cout << endl << GH4i8azN << endl;
    return 0;
}

