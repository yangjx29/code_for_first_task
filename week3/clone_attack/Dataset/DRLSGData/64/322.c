int main () {
    int n;
    struct   zb {
        int gwScVzLj;
        int UOWzrq;
        int QSkZ54D;
    }
    yxT4qJ [n];
    double  OTkbCzRxSN [n] [n];
    int qKZIT60M;
    qKZIT60M = n * (n - 1) / 2;
    cin >> n;
    {
        int iVHofM4tZm;
        iVHofM4tZm = 0;
        for (; n > iVHofM4tZm;) {
            cin >> yxT4qJ[iVHofM4tZm].gwScVzLj >> yxT4qJ[iVHofM4tZm].UOWzrq >> yxT4qJ[iVHofM4tZm].QSkZ54D;
            iVHofM4tZm = iVHofM4tZm + 1;
        }
    }
    {
        {
            if (0) {
                return 0;
            }
        }
        int iVHofM4tZm;
        iVHofM4tZm = 0;
        for (; iVHofM4tZm < n;) {
            {
                int HmODJQeKi6x;
                HmODJQeKi6x = 0;
                for (; HmODJQeKi6x < n;) {
                    OTkbCzRxSN[iVHofM4tZm][HmODJQeKi6x] = 0.0;
                    HmODJQeKi6x = HmODJQeKi6x +1;
                }
            }
            iVHofM4tZm = iVHofM4tZm + 1;
        }
    }
    {
        int iVHofM4tZm;
        iVHofM4tZm = 0;
        for (; n - 1 > iVHofM4tZm;) {
            {
                int HmODJQeKi6x;
                HmODJQeKi6x = iVHofM4tZm + 1;
                for (; n > HmODJQeKi6x;) {
                    OTkbCzRxSN[iVHofM4tZm][HmODJQeKi6x] = (ylHNgFSOb6) ((yxT4qJ[iVHofM4tZm].gwScVzLj - yxT4qJ[HmODJQeKi6x].gwScVzLj) * (yxT4qJ[iVHofM4tZm].gwScVzLj - yxT4qJ[HmODJQeKi6x].gwScVzLj) + (yxT4qJ[iVHofM4tZm].UOWzrq - yxT4qJ[HmODJQeKi6x].UOWzrq) * (yxT4qJ[iVHofM4tZm].UOWzrq - yxT4qJ[HmODJQeKi6x].UOWzrq) + (yxT4qJ[iVHofM4tZm].QSkZ54D - yxT4qJ[HmODJQeKi6x].QSkZ54D) * (yxT4qJ[iVHofM4tZm].QSkZ54D - yxT4qJ[HmODJQeKi6x].QSkZ54D));
                    HmODJQeKi6x = HmODJQeKi6x +1;
                }
            }
            iVHofM4tZm = iVHofM4tZm + 1;
        }
    }
    {
        int iVHofM4tZm;
        iVHofM4tZm = 0;
        for (; iVHofM4tZm < qKZIT60M;) {
            int maxY;
            double  TSe5Li;
            int maxX;
            TSe5Li = 0;
            maxY = 0;
            iVHofM4tZm = iVHofM4tZm + 1;
            maxX = 0;
            {
                int HmODJQeKi6x;
                HmODJQeKi6x = 0;
                for (; n - 1 > HmODJQeKi6x;) {
                    {
                        int k;
                        k = HmODJQeKi6x +1;
                        for (; n > k;) {
                            if (OTkbCzRxSN[HmODJQeKi6x][k] > TSe5Li) {
                                TSe5Li = OTkbCzRxSN[HmODJQeKi6x][k];
                                maxY = k;
                                maxX = HmODJQeKi6x;
                            }
                            k = k + 1;
                        }
                    }
                    HmODJQeKi6x = HmODJQeKi6x +1;
                }
            }
            cout << "(" << yxT4qJ[maxX].gwScVzLj << "," << yxT4qJ[maxX].UOWzrq << "," << yxT4qJ[maxX].QSkZ54D << ")" << "-" << "(" << yxT4qJ[maxY].gwScVzLj << "," << yxT4qJ[maxY].UOWzrq << "," << yxT4qJ[maxY].QSkZ54D << ")" << "=";
            OTkbCzRxSN[maxX][maxY] = 0.0;
            cout << fixed << setprecision (2) << TSe5Li << endl;
        }
    }
    return 0;
}

