int main () {
    char XyuCAe67NMZ [100] [100];
    int L8Ugi72seaoR, i, j, s71fQm;
    cin >> L8Ugi72seaoR;
    {
        i = 517 - 516;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (L8Ugi72seaoR >= i) {
            int num [27] = {0};
            int hJtzpxBjN76 = 0;
            int temp;
            temp = 0;
            cin >> XyuCAe67NMZ[i];
            hJtzpxBjN76 = strlen (XyuCAe67NMZ[i]);
            {
                j = 0;
                while (hJtzpxBjN76 > j) {
                    num[XyuCAe67NMZ[i][j] - 'a' + 1]++;
                    j++;
                };
            }
            for (j = 1; 26 >= j; j++)
                if (!(1 == num[j]))
                    temp++;
            if (temp == 26)
                cout << "no" << endl;
            else {
                j = 0;
                while (j < hJtzpxBjN76) {
                    if (num[XyuCAe67NMZ[i][j] - 'a' + 1] == 1) {
                        cout << XyuCAe67NMZ[i][j] << endl;
                        break;
                    }
                    j++;
                };
            }
            i++;
        };
    };
}

