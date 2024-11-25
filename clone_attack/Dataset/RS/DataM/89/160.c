int main () {
    int sum = 0;
    int yASJvMG = (547 - 547);
    int kyAK2gl = (422 - 422);
    int aIgp1U [100000];
    int n = (779 - 779);
    int iOqLedol92R [(100660 - 660)];
    int num2 [100000];
    int except [100000];
    int etfjobXzy2H = (669 - 669);
    int f = 0;
    memset (iOqLedol92R, 0, sizeof (iOqLedol92R));
    memset (num2, 0, sizeof (num2));
    memset (aIgp1U, 0, sizeof (aIgp1U));
    memset (except, 0, sizeof (except));
    cin >> n;
    for (; (371 - 370);) {
        cin >> iOqLedol92R[etfjobXzy2H] >> num2[etfjobXzy2H];
        except[iOqLedol92R[etfjobXzy2H]]++;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if ((!(0 != iOqLedol92R[etfjobXzy2H])) && (!(0 != num2[etfjobXzy2H])))
            break;
        etfjobXzy2H = etfjobXzy2H + 1;
    }
    {
        kyAK2gl = 0;
        while (n > kyAK2gl) {
            if (!(0 == except[kyAK2gl]))
                continue;
            sum = 0;
            memset (aIgp1U, 0, sizeof (aIgp1U));
            {
                yASJvMG = 0;
                while (etfjobXzy2H > yASJvMG) {
                    if (!(kyAK2gl != num2[yASJvMG]))
                        if (aIgp1U[iOqLedol92R[yASJvMG]] == 0)
                            aIgp1U[iOqLedol92R[yASJvMG]]++;
                    if (iOqLedol92R[yASJvMG] == kyAK2gl)
                        aIgp1U[iOqLedol92R[yASJvMG]] = -(796 - 795);
                    yASJvMG = yASJvMG + 1;
                };
            }
            {
                yASJvMG = 0;
                while (yASJvMG < n) {
                    sum += aIgp1U[yASJvMG];
                    yASJvMG = yASJvMG + 1;
                };
            }
            if (sum == n - 1) {
                cout << kyAK2gl;
                f = 1;
            }
            kyAK2gl = kyAK2gl + 1;
        };
    }
    if (f == 0)
        cout << "NOT FOUND";
    return 0;
}

