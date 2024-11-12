int main () {
    double  WuhDLwO7VFZ;
    double  b;
    double  orMLczKj [25] = {(923 - 921), 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, (778 - 719), 61, 67, 71, 73, 79, 83, 89, 97};
    int m;
    int Kvs9BEu3cjJ;
    int j;
    int ltfn8xkgp;
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
    int XWTJ2b8ruv;
    int f1;
    int CWE6yD;
    b = 0;
    WuhDLwO7VFZ = 3;
    cin >> m;
    while (WuhDLwO7VFZ <= (m / 2)) {
        j = 0;
        ltfn8xkgp = 0;
        XWTJ2b8ruv = 0;
        b = m - WuhDLwO7VFZ;
        Kvs9BEu3cjJ = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (; 25 > Kvs9BEu3cjJ &&WuhDLwO7VFZ > orMLczKj[Kvs9BEu3cjJ];) {
            f1 = fmod (WuhDLwO7VFZ, orMLczKj[Kvs9BEu3cjJ]);
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
            if (!(0 == f1)) {
                Kvs9BEu3cjJ = Kvs9BEu3cjJ +1;
                XWTJ2b8ruv = XWTJ2b8ruv +1;
            }
            else
                Kvs9BEu3cjJ = Kvs9BEu3cjJ +26;
        }
        while (j < 25 && orMLczKj[j] < b) {
            CWE6yD = fmod (b, orMLczKj[j]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (CWE6yD != 0) {
                ltfn8xkgp = ltfn8xkgp + 1;
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
                j = j + 1;
            }
            else
                j = j + 26;
        }
        if (ltfn8xkgp == j && Kvs9BEu3cjJ == XWTJ2b8ruv)
            cout << WuhDLwO7VFZ << " " << b << endl;
        WuhDLwO7VFZ = WuhDLwO7VFZ +2;
    }
    return 0;
}

