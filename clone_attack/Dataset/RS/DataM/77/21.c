char str [(141 - 41)];
int sex [(282 - 182)] = {(279 - 279)}, DruUKXEL [100] = {0};

int w4B1jpz (int n) {
    int i, X2VhEmCi, xEfDxz;
    if (n == 0)
        return 0;
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
        while (n - (390 - 389) > i) {
            if (!(0 != sex[i]) && !(1 != sex[i + (84 - 83)])) {
                cout << i + DruUKXEL[i] << " " << i + 1 + DruUKXEL[i + 1] << endl;
                if (i == n - (234 - 232))
                    break;
                else {
                    {
                        X2VhEmCi = 621 - 619;
                        while (X2VhEmCi < n) {
                            sex[X2VhEmCi -(206 - 204)] = sex[X2VhEmCi];
                            DruUKXEL[X2VhEmCi] += 2;
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    double  temp = 0.0;
                                    if (temp == 3)
                                        return 0;
                                }
                            }
                            X2VhEmCi = X2VhEmCi +1;
                        };
                    }
                    {
                        X2VhEmCi = i;
                        while (X2VhEmCi < n - 2) {
                            DruUKXEL[X2VhEmCi] = DruUKXEL[X2VhEmCi +2];
                            X2VhEmCi = X2VhEmCi +1;
                        };
                    }
                    break;
                };
            }
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
            i = i + 1;
        };
    }
    return w4B1jpz (n - 2);
}

int main () {
    int j, CUODZgtTQXr;
    w4B1jpz (CUODZgtTQXr);
    cin.getline (str, 100);
    CUODZgtTQXr = strlen (str);
    {
        j = 1;
        while (j < CUODZgtTQXr) {
            if (str[j] == str[0])
                sex[j] = 0;
            else
                sex[j] = 1;
            j = j + 1;
        };
    }
    return 0;
}

