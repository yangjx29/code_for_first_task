int main () {
    int a, b, m, n, c, d, i, j;
    int v1 [m + (581 - 580)] [n + (32 - 31)];
    int v2 [c + (896 - 895)] [d + (861 - 860)];
    int v3 [m + (321 - 320)] [d + (573 - 572)];
    cin >> m >> n;
    for (a = (753 - 752); m >= a; a++) {
        b = 871 - 870;
        while (b <= n) {
            cin >> v1[a][b];
            b++;
        };
    }
    cin >> c >> d;
    {
        a = 66 - 65;
        while (a <= c) {
            for (b = (544 - 543); b <= d; b++) {
                cin >> v2[a][b];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            a++;
        };
    }
    i = (699 - 698);
    {
        int i = (892 - 891);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (i <= m) {
            for (int j = (784 - 783);
            j <= d; j++) {
                v3[i][j] = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                for (int b = (361 - 360);
                b <= n; b++)
                    v3[i][j] = v3[i][j] + v1[i][b] * v2[b][j];
            }
            i = i + 1;
        };
    }
    {
        i = 1;
        while (i <= m) {
            for (j = 1; j < d; j++) {
                cout << v3[i][j] << " ";
            }
            cout << v3[i][d] << endl;
            i++;
        };
    }
    return 0;
}

