int dx [(390 - 386)] = {(423 - 422), -(258 - 257), (799 - 799), (701 - 701)};
int dy [(793 - 789)] = {(523 - 523), (119 - 119), 1, -1};

int main () {
    double  Cl4Psd [(455 - 433)] [22];
    int m;
    int n;
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
    cin >> m >> n;
    for (int vgrC48mL1FM = (146 - 146);
    m > vgrC48mL1FM; vgrC48mL1FM = vgrC48mL1FM + 1) {
        int j;
        j = (860 - 860);
        while (n > j) {
            cin >> Cl4Psd[vgrC48mL1FM][j];
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
            j++;
        };
    }
    for (int vgrC48mL1FM = (842 - 842);
    m > vgrC48mL1FM; vgrC48mL1FM++)
        for (int j = (252 - 252);
        n > j; j++) {
            int k;
            double  sum;
            sum = 0;
            int nI9uhfHPGk = 0;
            {
                k = 0;
                while (4 > k) {
                    int tempi;
                    tempi = vgrC48mL1FM + dx[k];
                    int tempj = j + dy[k];
                    if (tempi >= 0 && m > tempi && 0 <= tempj && n > tempj) {
                        if (Cl4Psd[vgrC48mL1FM][j] < Cl4Psd[tempi][tempj])
                            break;
                    }
                    k = k + 1;
                };
            }
            if (k == 4)
                cout << vgrC48mL1FM << " " << j << endl;
        }
    return 0;
}

