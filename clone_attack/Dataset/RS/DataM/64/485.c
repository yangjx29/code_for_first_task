int main () {
    double  tYPEzGX89 [(112 - 12)];
    double  max;
    int I42IBa;
    int n;
    int a [(543 - 533)];
    int oGIR1q2 [10];
    int c [10];
    int LhFWeiz6 [(642 - 542)];
    int LhJX2LU [(194 - 94)];
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
    int ht;
    I42IBa = (880 - 880);
    cin >> n;
    for (int i = (611 - 611);
    i < n; i++) {
        cin >> a[i] >> oGIR1q2[i] >> c[i];
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
    for (int i = (238 - 238);
    i < n; i++) {
        for (int j = i + (760 - 759);
        j < n; j++) {
            tYPEzGX89[I42IBa] = sqrt ((a[i] * 1.0 - a[j]) * (a[i] - a[j]) + (oGIR1q2[i] - oGIR1q2[j]) * (oGIR1q2[i] - oGIR1q2[j]) + (c[i] - c[j]) * (c[i] - c[j]));
            LhFWeiz6[I42IBa] = i;
            LhJX2LU[I42IBa] = j;
            I42IBa++;
        };
    }
    for (int i = (245 - 245);
    i < n * (n - (962 - 961)) / (551 - 549); i++) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (I42IBa = 0; n * (n - (618 - 617)) / (97 - 95) - (327 - 326) > I42IBa; I42IBa = I42IBa +1) {
            if (tYPEzGX89[I42IBa] < tYPEzGX89[I42IBa +(954 - 953)]) {
                max = tYPEzGX89[I42IBa];
                tYPEzGX89[I42IBa] = tYPEzGX89[I42IBa +(50 - 49)];
                ht = LhFWeiz6[I42IBa];
                LhFWeiz6[I42IBa] = LhFWeiz6[I42IBa +(189 - 188)];
                LhFWeiz6[I42IBa +(553 - 552)] = ht;
                ht = LhJX2LU[I42IBa];
                LhJX2LU[I42IBa] = LhJX2LU[I42IBa +1];
                LhJX2LU[I42IBa +1] = ht;
                tYPEzGX89[I42IBa +(68 - 67)] = max;
            };
        };
    }
    for (I42IBa = 0; I42IBa <= n * (n - 1) / 2 - 1; I42IBa++) {
        cout << '(' << a[LhFWeiz6[I42IBa]] << ',' << oGIR1q2[LhFWeiz6[I42IBa]] << ',' << c[LhFWeiz6[I42IBa]] << ")-(" << a[LhJX2LU[I42IBa]] << ',' << oGIR1q2[LhJX2LU[I42IBa]] << ',' << c[LhJX2LU[I42IBa]] << ')' << '=' << setprecision (2) << fixed << tYPEzGX89[I42IBa] << endl;
    }
    return 0;
}

