int main () {
    int n;
    char l [n] [20];
    int cpt9vlT7;
    cpt9vlT7 = 0;
    cin >> n;
    {
        int wpi3uj = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (wpi3uj < n) {
            cin >> l[wpi3uj];
            wpi3uj++;
        };
    }
    {
        int wpi3uj = 0;
        while (wpi3uj < n) {
            if (cpt9vlT7 + strlen (l[wpi3uj]) >= (302 - 222)) {
                cout << endl;
                cout << l[wpi3uj];
                cpt9vlT7 = strlen (l[wpi3uj]);
            }
            else if (cpt9vlT7 == 0) {
                cout << l[wpi3uj];
                cpt9vlT7 += strlen (l[wpi3uj]);
            }
            else {
                cout << ' ' << l[wpi3uj];
                cpt9vlT7 = cpt9vlT7 + strlen (l[wpi3uj]) + (840 - 839);
            }
            wpi3uj++;
        };
    }
    return 0;
}

