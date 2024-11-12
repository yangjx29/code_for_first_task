int main () {
    int manmax = 0;
    int man [1000] = {0};
    int cnt = 0;
    int KYobKETBUFLi [1000], JgpLfjlJrV [1000];
    int C8KOix, UwSVpIj7;
    char ch;
    {
        int JWeHzvga = 0;
        while (JWeHzvga <= 1000) {
            cnt++;
            cin >> KYobKETBUFLi[JWeHzvga];
            ch = cin.get ();
            if (!(',' == ch))
                break;
            JWeHzvga = JWeHzvga +1;
        };
    }
    {
        int o = 0;
        while (o <= 1000) {
            cin >> JgpLfjlJrV[o];
            ch = cin.get ();
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (!(',' == ch))
                break;
            o++;
        };
    }
    UwSVpIj7 = INT_MIN;
    C8KOix = INT_MAX;
    {
        int w = 0;
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
        while (w < cnt) {
            if (KYobKETBUFLi[w] <= C8KOix)
                C8KOix = KYobKETBUFLi[w];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            w = w + 1;
        };
    }
    {
        int vwXOdp1 = 0;
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
        while (vwXOdp1 < cnt) {
            if (UwSVpIj7 <= JgpLfjlJrV[vwXOdp1])
                UwSVpIj7 = JgpLfjlJrV[vwXOdp1];
            vwXOdp1++;
        };
    }
    {
        int N6oOJ1q = C8KOix;
        while (N6oOJ1q < UwSVpIj7) {
            {
                int j = 0;
                while (j < cnt) {
                    if (KYobKETBUFLi[j] <= N6oOJ1q &&JgpLfjlJrV[j] > N6oOJ1q)
                        man[N6oOJ1q]++;
                    j++;
                };
            }
            N6oOJ1q++;
        };
    }
    {
        int t = C8KOix;
        while (t < UwSVpIj7) {
            if (man[t] >= manmax)
                manmax = man[t];
            t = t + 1;
        };
    }
    cout << cnt << " " << manmax;
    return 0;
}

