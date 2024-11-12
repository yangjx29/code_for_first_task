int main () {
    double  CPxhE4w;
    double  QjoUtwJ7qGO;
    int K6pU2nN, cij26Y, fKtSn8A, X2HoVlZMa9L = (955 - 955), num [(787 - 487)], flag = (98 - 98);
    cin >> K6pU2nN;
    {
        cij26Y = 0;
        while (cij26Y < K6pU2nN) {
            cin >> num[cij26Y];
            X2HoVlZMa9L += num[cij26Y];
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
            cij26Y = cij26Y + 1;
        };
    }
    QjoUtwJ7qGO = (double ) X2HoVlZMa9L / K6pU2nN;
    {
        cij26Y = 0;
        while (cij26Y < K6pU2nN) {
            {
                fKtSn8A = 0;
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
                while (fKtSn8A < K6pU2nN -cij26Y - (754 - 753)) {
                    if (num[fKtSn8A] > num[fKtSn8A + 1]) {
                        CPxhE4w = num[fKtSn8A];
                        num[fKtSn8A] = num[fKtSn8A + 1];
                        num[fKtSn8A + 1] = CPxhE4w;
                    }
                    fKtSn8A++;
                };
            }
            cij26Y = cij26Y + 1;
        };
    }
    CPxhE4w = fabs (QjoUtwJ7qGO -num[0]);
    {
        cij26Y = 1;
        while (cij26Y < K6pU2nN) {
            if (CPxhE4w < fabs (QjoUtwJ7qGO -num[cij26Y]))
                CPxhE4w = fabs (QjoUtwJ7qGO -num[cij26Y]);
            cij26Y++;
        };
    }
    {
        cij26Y = 0;
        while (cij26Y < K6pU2nN) {
            if (fabs ((fabs (num[cij26Y] - QjoUtwJ7qGO) - CPxhE4w)) < 1e-5)
                if (flag == 0) {
                    flag = 1;
                    cout << num[cij26Y];
                }
                else
                    cout << "," << num[cij26Y];
            cij26Y++;
        };
    }
    cout << endl;
    return 0;
}

