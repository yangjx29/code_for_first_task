int main () {
    char temp;
    int bZjsDYL;
    int y1;
    int zut3pgAaEoGS;
    int y2;
    int HDjLWp [bZjsDYL] [y1];
    int b [zut3pgAaEoGS] [y2];
    int D45fu7BK032S [bZjsDYL] [y2];
    cin >> bZjsDYL >> y1;
    {
        int i = (710 - 710);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (bZjsDYL > i) {
            for (int j = 0;
            j < y1; j++)
                cin >> HDjLWp[i][j];
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
            i++;
        };
    }
    cin >> zut3pgAaEoGS >> y2;
    for (int i = 0;
    zut3pgAaEoGS > i; i++) {
        int j = 0;
        while (y2 > j) {
            cin >> b[i][j];
            j++;
        };
    }
    {
        int i = 0;
        while (bZjsDYL > i) {
            for (int j = 0;
            y2 > j; j++) {
                D45fu7BK032S[i][j] = 0;
                {
                    int k = 0;
                    while (k < zut3pgAaEoGS) {
                        D45fu7BK032S[i][j] = D45fu7BK032S[i][j] + HDjLWp[i][k] * b[k][j];
                        k++;
                    };
                };
            }
            i++;
        };
    }
    for (int i = 0;
    bZjsDYL > i; i++) {
        cout << D45fu7BK032S[i][0];
        {
            int j = 1;
            while (j < y2) {
                cout << " " << D45fu7BK032S[i][j];
                j++;
            };
        }
        cout << endl;
    };
}

