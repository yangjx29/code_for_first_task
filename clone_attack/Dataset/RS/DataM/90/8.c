int szvCBHVNYL (int AVT91KsrSBf, int RJp0KryEFn);

int main () {
    int t;
    int M [(795 - 770)], jap3F04obgw9 [25];
    int i;
    int HNuBvekS [25];
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
    scanf ("%d", &t);
    for (i = 0; t > i; i++) {
        scanf ("%d%d", &M[i], &jap3F04obgw9[i]);
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
    for (i = 0; t > i; i++) {
        HNuBvekS[i] = szvCBHVNYL (M[i], jap3F04obgw9[i]);
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
        printf ("%d\n", HNuBvekS[i]);
    }
    return 0;
}

int szvCBHVNYL (int AVT91KsrSBf, int RJp0KryEFn) {
    int mJIGVO0D;
    if (!(1 != AVT91KsrSBf)) {
        mJIGVO0D = 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    else {
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
        if (!(1 != RJp0KryEFn)) {
            mJIGVO0D = 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        }
        else {
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
            if (AVT91KsrSBf != 1 && RJp0KryEFn != 1 && AVT91KsrSBf < RJp0KryEFn) {
                mJIGVO0D = szvCBHVNYL (AVT91KsrSBf, RJp0KryEFn -1);
            }
            else {
                if (AVT91KsrSBf != 1 && RJp0KryEFn != 1 && AVT91KsrSBf >= RJp0KryEFn) {
                    mJIGVO0D = szvCBHVNYL (AVT91KsrSBf, RJp0KryEFn -1) + szvCBHVNYL (AVT91KsrSBf -RJp0KryEFn, RJp0KryEFn);
                };
            };
        };
    }
    return mJIGVO0D;
}

