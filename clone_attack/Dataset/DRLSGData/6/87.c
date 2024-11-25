int main () {
    int s2TnsBe;
    int CzeuN5P;
    int GOJ2etnxhgG;
    int n;
    int i;
    int j;
    int h;
    int zncWO1S7K3s [1000] [1000] = {0};
    cin >> CzeuN5P;
    {
        h = 0;
        for (; CzeuN5P > h;) {
            s2TnsBe = 0;
            cin >> GOJ2etnxhgG >> n;
            {
                i = 0;
                while (GOJ2etnxhgG > i) {
                    {
                        j = 0;
                        for (; n > j;) {
                            cin >> zncWO1S7K3s[i][j];
                            j++;
                        }
                    }
                    i++;
                }
            }
            {
                j = 0;
                while (j < n) {
                    s2TnsBe = s2TnsBe + zncWO1S7K3s[0][j] + zncWO1S7K3s[GOJ2etnxhgG -1][j];
                    j++;
                }
            }
            {
                i = 1;
                while (GOJ2etnxhgG -1 > i) {
                    s2TnsBe = s2TnsBe + zncWO1S7K3s[i][0] + zncWO1S7K3s[i][n - 1];
                    i++;
                }
            }
            cout << s2TnsBe << endl;
            h++;
        }
    }
    return 0;
}

