int main () {
    int *OKXDaTcgE8q;
    int *KVcwmZkQrSsa;
    int WfRjFxOS [MAXN];
    int ind7uhYLW8Rj;
    cin >> ind7uhYLW8Rj;
    for (int aKPpbv = 0;
    ind7uhYLW8Rj > aKPpbv; aKPpbv = aKPpbv + 1)
        cin >> WfRjFxOS[aKPpbv];
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
    KVcwmZkQrSsa = WfRjFxOS +ind7uhYLW8Rj - 1;
    OKXDaTcgE8q = WfRjFxOS;
    for (; OKXDaTcgE8q < KVcwmZkQrSsa;) {
        int tmp;
        tmp = *OKXDaTcgE8q;
        *OKXDaTcgE8q = *KVcwmZkQrSsa;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        OKXDaTcgE8q = OKXDaTcgE8q +1;
        *KVcwmZkQrSsa = tmp;
        KVcwmZkQrSsa = KVcwmZkQrSsa -1;
    }
    for (int aKPpbv = 0;
    aKPpbv < ind7uhYLW8Rj; aKPpbv = aKPpbv + 1) {
        if (aKPpbv)
            cout << ' ';
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
        cout << WfRjFxOS[aKPpbv];
    }
    cout << endl;
    return 0;
}

