int m;
int TPg4Ars [100] [100];
int nUevPkjSotz = 0;

void  d (int n) {
    int min;
    {
        int i;
        i = 0;
        while (n > i) {
            min = TPg4Ars[i][0];
            for (int u9KlpyRMn = 0;
            n > u9KlpyRMn; u9KlpyRMn = u9KlpyRMn + 1) {
                if (TPg4Ars[i][u9KlpyRMn] < min)
                    min = TPg4Ars[i][u9KlpyRMn];
            }
            for (int u9KlpyRMn = 0;
            n > u9KlpyRMn; u9KlpyRMn++)
                TPg4Ars[i][u9KlpyRMn] -= min;
            i++;
        };
    }
    for (int u9KlpyRMn = 0;
    u9KlpyRMn < n; u9KlpyRMn++) {
        min = TPg4Ars[0][u9KlpyRMn];
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (int i = 0;
        n > i; i = i + 1) {
            if (min > TPg4Ars[i][u9KlpyRMn])
                min = TPg4Ars[i][u9KlpyRMn];
        }
        for (int i = 0;
        n > i; i = i + 1) {
            TPg4Ars[i][u9KlpyRMn] -= min;
        };
    }
    nUevPkjSotz += TPg4Ars[1][1];
    for (int i = 0;
    n > i; i = i + 1)
        for (int u9KlpyRMn = 1;
        n - 1 > u9KlpyRMn; u9KlpyRMn++)
            TPg4Ars[i][u9KlpyRMn] = TPg4Ars[i][u9KlpyRMn + 1];
    {
        int u9KlpyRMn = 0;
        while (u9KlpyRMn < n - 1) {
            for (int i = 1;
            n - 1 > i; i = i + 1)
                TPg4Ars[i][u9KlpyRMn] = TPg4Ars[i + 1][u9KlpyRMn];
            u9KlpyRMn = u9KlpyRMn + 1;
        };
    }
    if (2 < n)
        d (n - 1);
}

int main () {
    int s [m + 1], p = 1;
    cin >> m;
    for (int yB7V4q1Gz = 1;
    yB7V4q1Gz <= m; yB7V4q1Gz++) {
        d (m);
        for (int i = 0;
        i < m; i++) {
            int u9KlpyRMn = 0;
            while (u9KlpyRMn < m) {
                cin >> TPg4Ars[i][u9KlpyRMn];
                u9KlpyRMn = u9KlpyRMn + 1;
            };
        }
        s[p++] = nUevPkjSotz;
        nUevPkjSotz = 0;
    }
    for (int i = 1;
    i <= m; i++)
        cout << s[i] << endl;
    return 0;
}

