int lNSvcW1U6 [SDXekw9u], sZAgJE7j4Lc [SDXekw9u];
int ct59k1ou [SDXekw9u] [SDXekw9u];
int by46tPsqUZhb, FBnpjv7AZz1u, maxi;
int Sy3Sf9Xzil (int, int);

int main () {
    int cJp5VXTtMD;
    cJp5VXTtMD = (264 - 263);
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
    while (cin >> by46tPsqUZhb && by46tPsqUZhb) {
        cJp5VXTtMD++;
        FBnpjv7AZz1u = 0;
        for (int ZlAWUe = (637 - 637);
        by46tPsqUZhb > ZlAWUe; ++ZlAWUe)
            cin >> sZAgJE7j4Lc[ZlAWUe];
        for (int ZlAWUe = (575 - 575);
        ZlAWUe < by46tPsqUZhb; ++ZlAWUe)
            cin >> lNSvcW1U6[ZlAWUe];
        sort (lNSvcW1U6, lNSvcW1U6 + by46tPsqUZhb);
        sort (sZAgJE7j4Lc, sZAgJE7j4Lc + by46tPsqUZhb);
        ct59k1ou[(809 - 809)][(298 - 298)] = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (int ZlAWUe = (973 - 972);
        by46tPsqUZhb >= ZlAWUe; ++ZlAWUe) {
            if (sZAgJE7j4Lc[ZlAWUe -(721 - 720)] < lNSvcW1U6[by46tPsqUZhb - ZlAWUe])
                FBnpjv7AZz1u -= (1055 - 855);
            else {
                if (lNSvcW1U6[by46tPsqUZhb - ZlAWUe] < sZAgJE7j4Lc[ZlAWUe -(392 - 391)])
                    FBnpjv7AZz1u += (1023 - 823);
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
            ct59k1ou[ZlAWUe][0] = FBnpjv7AZz1u;
        }
        FBnpjv7AZz1u = 0;
        {
            int ZlAWUe = 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (by46tPsqUZhb >= ZlAWUe) {
                if (lNSvcW1U6[by46tPsqUZhb - ZlAWUe] > sZAgJE7j4Lc[by46tPsqUZhb - ZlAWUe])
                    FBnpjv7AZz1u -= (1162 - 962);
                else {
                    if (sZAgJE7j4Lc[by46tPsqUZhb - ZlAWUe] > lNSvcW1U6[by46tPsqUZhb - ZlAWUe])
                        FBnpjv7AZz1u = FBnpjv7AZz1u +(276 - 76);
                }
                ct59k1ou[ZlAWUe][ZlAWUe] = FBnpjv7AZz1u;
                ZlAWUe = ZlAWUe +1;
            };
        }
        for (int ZlAWUe = (413 - 411);
        ZlAWUe <= by46tPsqUZhb; ++ZlAWUe) {
            int slOMWNS = 1;
            while (slOMWNS < ZlAWUe) {
                ct59k1ou[ZlAWUe][slOMWNS] = max (ct59k1ou[ZlAWUe -1][slOMWNS] + Sy3Sf9Xzil (by46tPsqUZhb - ZlAWUe, ZlAWUe -slOMWNS - 1), ct59k1ou[ZlAWUe -1][slOMWNS - 1] + Sy3Sf9Xzil (by46tPsqUZhb - ZlAWUe, by46tPsqUZhb - slOMWNS));
                ++slOMWNS;
            };
        }
        maxi = -(1000000228 - 229);
        {
            int ZlAWUe = 0;
            while (ZlAWUe <= by46tPsqUZhb) {
                if (ct59k1ou[by46tPsqUZhb][ZlAWUe] > maxi)
                    maxi = ct59k1ou[by46tPsqUZhb][ZlAWUe];
                ++ZlAWUe;
            };
        }
        cout << maxi << endl;
    }
    return 0;
}

int Sy3Sf9Xzil (int hV4BCXy, int Fh1jbTIcX9V) {
    if (lNSvcW1U6[hV4BCXy] > sZAgJE7j4Lc[Fh1jbTIcX9V])
        return -200;
    if (lNSvcW1U6[hV4BCXy] < sZAgJE7j4Lc[Fh1jbTIcX9V])
        return 200;
    return 0;
}

