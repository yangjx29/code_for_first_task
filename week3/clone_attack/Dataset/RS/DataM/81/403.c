int gu98eZTL [(188 - 183)] [(841 - 836)];
int hIp7yAewfE, m;

int kEdyMoQ012Js (int gu98eZTL [(434 - 429)] [(561 - 556)], int hIp7yAewfE, int m) {
    int i, hwBJOS [5];
    if ((179 - 179) > hIp7yAewfE || 5 <= hIp7yAewfE || (43 - 43) > m || 5 <= m)
        return (66 - 66);
    else {
        i = 361 - 361;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (4 >= i) {
            hwBJOS[i] = gu98eZTL[hIp7yAewfE][i];
            gu98eZTL[hIp7yAewfE][i] = gu98eZTL[m][i];
            gu98eZTL[m][i] = hwBJOS[i];
            i = i + 1;
        };
    }
    return (561 - 560);
}

int main () {
    int i = (768 - 768), OzDmJh0;
    int quyg2APj4cRV = (149 - 149);
    {
        i = 979 - 979;
        while (5 > i) {
            {
                quyg2APj4cRV = 0;
                while (5 > quyg2APj4cRV) {
                    cin >> gu98eZTL[i][quyg2APj4cRV];
                    quyg2APj4cRV = quyg2APj4cRV + 1;
                };
            }
            i = i + 1;
        };
    }
    cin >> hIp7yAewfE >> m;
    OzDmJh0 = kEdyMoQ012Js (gu98eZTL, hIp7yAewfE, m);
    if (OzDmJh0 == 0)
        cout << "error" << endl;
    else {
        for (i = 0; i < 5; i = i + 1) {
            {
                quyg2APj4cRV = 0;
                while (quyg2APj4cRV < 4) {
                    cout << gu98eZTL[i][quyg2APj4cRV] << " ";
                    quyg2APj4cRV = quyg2APj4cRV + 1;
                };
            }
            cout << gu98eZTL[i][4] << endl;
        };
    }
    return 0;
}

