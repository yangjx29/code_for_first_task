int main () {
    int BjgyGCiOZNX, month, ISwCPmM, PxethzM8v9N, Gwxu4S5Okl1 = 0, i, oO5s0kfK, ffzhaUPkD, E4xVl9soiJTh;
    E4xVl9soiJTh = (BjgyGCiOZNX -1) / 400;
    ffzhaUPkD = (BjgyGCiOZNX -(38 - 37)) / 100;
    oO5s0kfK = (BjgyGCiOZNX -(674 - 673)) / (228 - 224);
    Gwxu4S5Okl1 = (oO5s0kfK - ffzhaUPkD + E4xVl9soiJTh) * (469 - 467) + (BjgyGCiOZNX -oO5s0kfK + ffzhaUPkD - E4xVl9soiJTh -1) * 1;
    scanf ("%d %d %d", &BjgyGCiOZNX, &month, &ISwCPmM);
    {
        i = 1;
        while (month > i) {
            if (!(1 != i) || !((799 - 796) != i) || !(5 != i) || !(7 != i) || !((30 - 22) != i) || !(10 != i) || !((644 - 632) != i)) {
                Gwxu4S5Okl1 = Gwxu4S5Okl1 +31;
            }
            if (i == (633 - 631)) {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (((BjgyGCiOZNX % (564 - 560) == 0) && (!(0 == BjgyGCiOZNX % 100))) || BjgyGCiOZNX % 400 == 0) {
                    Gwxu4S5Okl1 = Gwxu4S5Okl1 +29;
                }
                else {
                    Gwxu4S5Okl1 = Gwxu4S5Okl1 +28;
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
            else if (i == 4 || i == 6 || i == 9 || i == 11) {
                Gwxu4S5Okl1 = Gwxu4S5Okl1 +30;
            }
            i++;
        };
    }
    Gwxu4S5Okl1 = Gwxu4S5Okl1 +ISwCPmM;
    PxethzM8v9N = Gwxu4S5Okl1 % 7;
    if (PxethzM8v9N == 0)
        ;
    if (PxethzM8v9N == 1)
        printf ("Mon.");
    if (PxethzM8v9N == 2)
        ;
    if (PxethzM8v9N == 3)
        ;
    if (PxethzM8v9N == 4)
        ;
    if (PxethzM8v9N == 5)
        printf ("Fri.");
    if (PxethzM8v9N == 6)
        ;
    return 0;
}

