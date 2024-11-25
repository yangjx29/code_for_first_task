int main () {
    int sfrpG3bVd;
    int RWm3IUAulT [(593 - 588)] [(684 - 679)];
    sfrpG3bVd = (615 - 615);
    for (int i = (89 - 89);
    5 > i; i = i + 1)
        for (int mIyNCxg = 0;
        mIyNCxg < 5; mIyNCxg = mIyNCxg + 1) {
            cin >> RWm3IUAulT[i][mIyNCxg];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            };
        }
    for (int i = 0;
    5 > i; i = i + 1) {
        int v7aqefCS;
        int Qfta4mRAwD;
        int x1;
        v7aqefCS = RWm3IUAulT[i][0];
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
        Qfta4mRAwD = 0;
        x1 = -(441 - 440);
        for (int mIyNCxg = (43 - 42);
        mIyNCxg < 5; mIyNCxg = mIyNCxg + 1)
            if (v7aqefCS < RWm3IUAulT[i][mIyNCxg]) {
                v7aqefCS = RWm3IUAulT[i][mIyNCxg];
                Qfta4mRAwD = mIyNCxg;
            }
        for (int mIyNCxg = 0;
        mIyNCxg < 5; ++mIyNCxg) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (RWm3IUAulT[mIyNCxg][Qfta4mRAwD] < RWm3IUAulT[i][Qfta4mRAwD]) {
                x1 = i;
                break;
            };
        }
        if (x1 == -1) {
            sfrpG3bVd = 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            cout << i + 1 << " " << Qfta4mRAwD +1 << " " << RWm3IUAulT[i][Qfta4mRAwD];
        };
    }
    if (sfrpG3bVd == 0)
        cout << "not found";
    return 0;
}

