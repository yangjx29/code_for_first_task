int main () {
    char s [1000], a [1000], yL2qUOr [1000], mKkxmu [1000];
    int rt9Bpxfv, YytK4miTq60z, bgv2nQ3Ja, i, JvRMo9Sh, haiIjm8 = 0, t, m = 0, pPp70Kr3 = 0;
    cin.get (s, 1000);
    cin >> a;
    cin >> yL2qUOr;
    rt9Bpxfv = strlen (s);
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
    YytK4miTq60z = strlen (a);
    bgv2nQ3Ja = strlen (yL2qUOr);
    for (i = 0; rt9Bpxfv > i; i = i + 1) {
        int EBfPkFARd = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (JvRMo9Sh = 0; YytK4miTq60z > JvRMo9Sh; JvRMo9Sh++) {
            if (!(a[JvRMo9Sh] != s[i + JvRMo9Sh])) {
                EBfPkFARd = EBfPkFARd +1;
                continue;
            }
            else
                break;
        }
        if (!(YytK4miTq60z &&(!(a[0] != s[i]) && (i == 0 || s[i - 1] == ' ')) != EBfPkFARd)) {
            i = i + YytK4miTq60z -1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            for (t = 0; t < bgv2nQ3Ja; t = t + 1) {
                mKkxmu[haiIjm8] = yL2qUOr[t];
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
                haiIjm8 = haiIjm8 + 1;
            };
        }
        else {
            mKkxmu[haiIjm8] = s[i];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            haiIjm8 = haiIjm8 + 1;
        };
    }
    mKkxmu[haiIjm8] = '\0';
    {
        JvRMo9Sh = 0;
        while (JvRMo9Sh < haiIjm8) {
            cout << mKkxmu[JvRMo9Sh];
            JvRMo9Sh = JvRMo9Sh +1;
        };
    }
    return 0;
}

