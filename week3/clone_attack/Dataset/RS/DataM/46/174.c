int main () {
    int x;
    int MMPGpREF69nU;
    x = 0;
    MMPGpREF69nU = 0;
    int Wbd6saULYrt;
    Wbd6saULYrt = 1;
    int ihTl3QE, TEUdHr5w;
    int kUc6zwoCb [100] [100];
    int row, k8qN2Pcnm0;
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
    int leftBorder;
    int rightBorder;
    leftBorder = 0;
    rightBorder = k8qN2Pcnm0 - 1;
    int RBDU4vbF = 0, lZHYQmKcD = row - 1;
    cin >> row >> k8qN2Pcnm0;
    for (ihTl3QE = 0; ihTl3QE < row; ihTl3QE = ihTl3QE + 1) {
        for (TEUdHr5w = 0; TEUdHr5w < k8qN2Pcnm0; TEUdHr5w++) {
            cin >> kUc6zwoCb[ihTl3QE][TEUdHr5w];
        };
    }
    for (ihTl3QE = 0; ihTl3QE < row * k8qN2Pcnm0; ihTl3QE = ihTl3QE + 1) {
        cout << kUc6zwoCb[MMPGpREF69nU][x] << endl;
        if (Wbd6saULYrt == 1) {
            if (x + 1 > rightBorder) {
                MMPGpREF69nU = MMPGpREF69nU +1;
                Wbd6saULYrt = 2;
                RBDU4vbF++;
            }
            else {
                x = x + 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            };
        }
        else if (Wbd6saULYrt == 2) {
            if (MMPGpREF69nU +1 > lZHYQmKcD) {
                Wbd6saULYrt = 3;
                x = x - 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                rightBorder = rightBorder - 1;
            }
            else {
                MMPGpREF69nU++;
            };
        }
        else if (Wbd6saULYrt == 3) {
            if (x - 1 < leftBorder) {
                lZHYQmKcD = lZHYQmKcD - 1;
                MMPGpREF69nU = MMPGpREF69nU -1;
                Wbd6saULYrt = 4;
            }
            else {
                x--;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            };
        }
        else {
            if (MMPGpREF69nU -1 < RBDU4vbF) {
                Wbd6saULYrt = 1;
                x = x + 1;
                leftBorder = leftBorder + 1;
            }
            else {
                MMPGpREF69nU--;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                };
            };
        };
    }
    return 0;
}

