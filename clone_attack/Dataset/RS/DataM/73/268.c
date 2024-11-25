int main () {
    int i, j, mysdW8JREhux [(650 - 645)] [5], max [5], KfH1PWASO [5], UyHZYCJj [5], k, v8yB3j;
    {
        i = 601 - 601;
        while (i <= (481 - 477)) {
            UyHZYCJj[i] = (228 - 228);
            KfH1PWASO[i] = (178 - 178);
            {
                j = 0;
                while (j <= (947 - 943)) {
                    cin >> mysdW8JREhux[i][j];
                    j++;
                };
            }
            i = i + 1;
        };
    }
    v8yB3j = (875 - 875);
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
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        while (i <= 4) {
            max[i] = mysdW8JREhux[i][0];
            {
                j = 1;
                while (j <= 4) {
                    if (mysdW8JREhux[i][j] > max[i]) {
                        max[i] = mysdW8JREhux[i][j];
                        KfH1PWASO[i] = j;
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    j++;
                };
            }
            {
                k = 0;
                while (k <= 4) {
                    if (mysdW8JREhux[i][KfH1PWASO[i]] <= mysdW8JREhux[k][KfH1PWASO[i]]) {
                        UyHZYCJj[i] = UyHZYCJj[i] + 1;
                    }
                    k++;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (UyHZYCJj[i] == 5) {
                cout << i + 1 << ' ' << KfH1PWASO[i] + 1 << ' ' << max[i] << '\n';
            }
            else {
                v8yB3j = v8yB3j + 1;
            }
            i++;
        };
    }
    if (v8yB3j == 5) {
        cout << "not found" << endl;
    }
    return 0;
}

