int main () {
    int EQat4mrZ;
    int iIs72tFxiO;
    int mZmyAIC;
    int Tzcy0Kh4;
    int TXHqTQo [1001] [1001];
    EQat4mrZ = 0;
    int (*p) [1001], x1 = 0, y1 = 0, pDdX8Tkzlo = 0, DfD2AXcke0v = 0;
    cin >> iIs72tFxiO;
    p = TXHqTQo;
    {
        mZmyAIC = 0;
        while (mZmyAIC < iIs72tFxiO) {
            {
                Tzcy0Kh4 = 0;
                while (Tzcy0Kh4 < iIs72tFxiO) {
                    cin >> *(*(p + mZmyAIC) + Tzcy0Kh4);
                    Tzcy0Kh4 = Tzcy0Kh4 +1;
                };
            }
            mZmyAIC = mZmyAIC + 1;
        };
    }
    {
        mZmyAIC = 0;
        while (mZmyAIC < iIs72tFxiO) {
            {
                Tzcy0Kh4 = 0;
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
                while (Tzcy0Kh4 < iIs72tFxiO) {
                    if (*(*(p + mZmyAIC) + Tzcy0Kh4) == 0) {
                        if ((!(0 != *(*(p + mZmyAIC) + Tzcy0Kh4 +1))) && (*(*(p + mZmyAIC + 1) + Tzcy0Kh4) == 0)) {
                            x1 = mZmyAIC;
                            y1 = Tzcy0Kh4;
                        }
                        if ((*(*(p + mZmyAIC) + Tzcy0Kh4 -1) == 0) && (*(*(p + mZmyAIC - 1) + Tzcy0Kh4) == 0)) {
                            pDdX8Tkzlo = mZmyAIC;
                            DfD2AXcke0v = Tzcy0Kh4;
                        };
                    }
                    Tzcy0Kh4 = Tzcy0Kh4 +1;
                };
            }
            mZmyAIC = mZmyAIC + 1;
        };
    }
    EQat4mrZ = (pDdX8Tkzlo - x1 - 1) * (DfD2AXcke0v -y1 - 1);
    cout << EQat4mrZ << endl;
    return 0;
}

