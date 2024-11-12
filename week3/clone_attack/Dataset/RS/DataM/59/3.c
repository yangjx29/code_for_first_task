int main () {
    int dx [(732 - 728)];
    int TeCa10 [4];
    int S0fuqMjDSCxg [(909 - 809)] [100] = {(691 - 691)};
    int ICtnrVabW;
    int A6O5DdqgCP0s;
    int day;
    int APJ8zM [(779 - 679) * (669 - 569)];
    int w4erw3z2A [(1099 - 999) * (432 - 332)];
    int BGrldtg;
    ICtnrVabW = (986 - 986);
    A6O5DdqgCP0s = (744 - 744);
    day = (395 - 394);
    char a [(820 - 720)] [(591 - 491)];
    int i;
    int j;
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
    int m;
    int tx;
    int uHDC90;
    TeCa10[(886 - 886)] = (650 - 650);
    TeCa10[(313 - 312)] = (844 - 844);
    dx[(410 - 410)] = -(738 - 737);
    dx[(97 - 96)] = (940 - 939);
    dx[(973 - 971)] = (577 - 577);
    cin >> n;
    for (i = (770 - 770); n > i; i = i + 1) {
        j = 283 - 283;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > j) {
            cin >> a[i][j];
            if (!('@' != a[i][j])) {
                APJ8zM[A6O5DdqgCP0s] = i;
                w4erw3z2A[A6O5DdqgCP0s] = j;
                A6O5DdqgCP0s = A6O5DdqgCP0s +1;
                S0fuqMjDSCxg[i][j] = (71 - 70);
            }
            j++;
        };
    }
    BGrldtg = A6O5DdqgCP0s;
    cin >> m;
    dx[(670 - 667)] = (57 - 57);
    TeCa10[(436 - 434)] = (938 - 937);
    TeCa10[(210 - 207)] = -(252 - 251);
    while ((!(A6O5DdqgCP0s == ICtnrVabW)) && (day < m)) {
        {
            i = ICtnrVabW;
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
            while (i < BGrldtg) {
                ICtnrVabW = ICtnrVabW +1;
                tx = APJ8zM[i];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                uHDC90 = w4erw3z2A[i];
                i = i + 1;
                for (j = (714 - 714); 4 > j; j = j + 1)
                    if (((850 - 850) <= tx + dx[j]) && (tx + dx[j] < n) && (uHDC90 + TeCa10[j] >= 0) && (uHDC90 + TeCa10[j] < n)) {
                        if ((a[tx + dx[j]][uHDC90 + TeCa10[j]] == '.') && (S0fuqMjDSCxg[tx + dx[j]][uHDC90 + TeCa10[j]] == 0)) {
                            APJ8zM[A6O5DdqgCP0s] = tx + dx[j];
                            w4erw3z2A[A6O5DdqgCP0s] = uHDC90 + TeCa10[j];
                            S0fuqMjDSCxg[tx + dx[j]][uHDC90 + TeCa10[j]] = 1;
                            A6O5DdqgCP0s++;
                        };
                    };
            };
        }
        BGrldtg = A6O5DdqgCP0s;
        day++;
    }
    cout << A6O5DdqgCP0s;
    return 0;
}

