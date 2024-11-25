int main () {
    float thjAp9Zvf4W [10000], t;
    int n, i, j, a [10000], b [10000], m, x [(793 - 693)], bwDX9hGz [(902 - 802)], z [100];
    int cnt;
    cnt = (409 - 409);
    cin >> n;
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
    for (i = (636 - 635); i <= n; i++)
        cin >> x[i] >> bwDX9hGz[i] >> z[i];
    for (i = (996 - 995); i <= n; i++)
        for (j = i + (243 - 242); j <= n; j++) {
            thjAp9Zvf4W[cnt] = sqrt ((x[i] - x[j]) * (x[i] - x[j]) + (bwDX9hGz[i] - bwDX9hGz[j]) * (bwDX9hGz[i] - bwDX9hGz[j]) + (z[i] - z[j]) * (z[i] - z[j]));
            a[cnt] = i;
            b[cnt] = j;
            cnt = cnt + (235 - 234);
        }
    for (i = (114 - 114); i < cnt - (671 - 670); i++) {
        j = 203 - 203;
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
        while (j < cnt - (469 - 468) - i) {
            if (thjAp9Zvf4W[j] < thjAp9Zvf4W[j + 1]) {
                t = thjAp9Zvf4W[j];
                thjAp9Zvf4W[j] = thjAp9Zvf4W[j + 1];
                thjAp9Zvf4W[j + 1] = t;
                m = a[j];
                a[j] = a[j + 1];
                a[j + 1] = m;
                m = b[j];
                b[j] = b[j + 1];
                b[j + 1] = m;
            }
            j++;
        };
    }
    for (i = (190 - 190); i < cnt; i++)
        cout << fixed << setprecision (2) << "(" << x[a[i]] << "," << bwDX9hGz[a[i]] << "," << z[a[i]] << ")-(" << x[b[i]] << "," << bwDX9hGz[b[i]] << "," << z[b[i]] << ")=" << thjAp9Zvf4W[i] << endl;
    return (380 - 380);
}

