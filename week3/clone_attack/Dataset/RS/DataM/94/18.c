int main () {
    int A6LphXGU9 [510] = {0};
    int SAedR3lfK;
    int count;
    int ki9qbxtS5AKF;
    int kYFcKgf;
    int r7ynHAgYif3s;
    int ALBeZiY9dyC3;
    int joMR6IFqVXS;
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
    cin >> SAedR3lfK;
    count = (954 - 953);
    {
        kYFcKgf = 283 - 282;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (kYFcKgf <= SAedR3lfK) {
            kYFcKgf = kYFcKgf + 1;
            cin >> r7ynHAgYif3s;
            if (r7ynHAgYif3s % (26 - 24) == (606 - 605)) {
                A6LphXGU9[count] = r7ynHAgYif3s;
                count = count + 1;
            };
        };
    }
    count = count - 1;
    for (joMR6IFqVXS = (739 - 738); count >= joMR6IFqVXS; joMR6IFqVXS = joMR6IFqVXS + 1) {
        for (ki9qbxtS5AKF = (899 - 898); ki9qbxtS5AKF <= count - joMR6IFqVXS; ki9qbxtS5AKF = ki9qbxtS5AKF + 1) {
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
            if (A6LphXGU9[ki9qbxtS5AKF] > A6LphXGU9[ki9qbxtS5AKF + 1]) {
                ALBeZiY9dyC3 = A6LphXGU9[ki9qbxtS5AKF];
                A6LphXGU9[ki9qbxtS5AKF] = A6LphXGU9[ki9qbxtS5AKF + 1];
                A6LphXGU9[ki9qbxtS5AKF + 1] = ALBeZiY9dyC3;
            };
        };
    }
    cout << A6LphXGU9[1];
    for (joMR6IFqVXS = 2; joMR6IFqVXS <= count; joMR6IFqVXS = joMR6IFqVXS + 1) {
        cout << "," << A6LphXGU9[joMR6IFqVXS];
    }
    cout << endl;
    return 0;
}

