int main () {
    int a [(419 - 404)];
    int t;
    int i;
    int j;
    int k;
    int m;
    int n;
    {
        i = 81 - 80;
        while (1) {
            {
                j = 584 - 584;
                while (j <= (387 - 373)) {
                    a[j] = (1000 - 1000);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
                };
            }
            {
                j = 343 - 343;
                while (1) {
                    cin >> t;
                    if (t == 0)
                        break;
                    else {
                        a[j] = t;
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    j = j + 1;
                };
            }
            m = 1;
            if (a[0] != -1)
                m = 0;
            {
                j = 1;
                while (j < 15) {
                    if (a[j] != 0)
                        m = 0;
                    j++;
                };
            }
            if (m == 1) {
                cout << "0" << endl;
                break;
            }
            i++;
            n = 0;
            {
                j = 0;
                while (j <= 14) {
                    {
                        k = j + 1;
                        while (k <= 14) {
                            if (a[j] != 0 && a[k] != 0 && (a[j] == 2 * a[k] || a[k] == 2 * a[j]))
                                n = n + 1;
                            k++;
                        };
                    }
                    j++;
                };
            }
            cout << n << endl;
        };
    }
    return 0;
}

