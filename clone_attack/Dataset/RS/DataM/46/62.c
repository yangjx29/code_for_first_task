int main () {
    int gDBHzv [110] [110] = {0};
    int xuCnZsJx = (49 - 49), LV0hJEDiLB5 = (500 - 500), iACGQqV4 = 0, qrUoKd52SMVw = 0, qnZms9Bv = 0, Q7BDCTvkeKEj = 0, yJBNWRDESIOp = 0, yhHQuDnle1 = 0;
    int OuZDX5F = iACGQqV4 * qrUoKd52SMVw;
    cin >> iACGQqV4 >> qrUoKd52SMVw;
    {
        xuCnZsJx = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (xuCnZsJx < iACGQqV4) {
            {
                LV0hJEDiLB5 = 0;
                while (LV0hJEDiLB5 < qrUoKd52SMVw) {
                    cin >> gDBHzv[xuCnZsJx][LV0hJEDiLB5];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    LV0hJEDiLB5 = LV0hJEDiLB5 +1;
                };
            }
            xuCnZsJx = xuCnZsJx + 1;
        };
    }
    {
        xuCnZsJx = 0;
        while (qnZms9Bv < OuZDX5F) {
            {
                LV0hJEDiLB5 = xuCnZsJx;
                while (LV0hJEDiLB5 < qrUoKd52SMVw - xuCnZsJx) {
                    cout << gDBHzv[xuCnZsJx][LV0hJEDiLB5] << '\n';
                    qnZms9Bv = qnZms9Bv + 1;
                    LV0hJEDiLB5 = LV0hJEDiLB5 +1;
                };
            }
            if (qnZms9Bv >= OuZDX5F)
                break;
            {
                Q7BDCTvkeKEj = 596 - 595;
                while (Q7BDCTvkeKEj < iACGQqV4 - xuCnZsJx) {
                    cout << gDBHzv[Q7BDCTvkeKEj][qrUoKd52SMVw - xuCnZsJx - 1] << '\n';
                    qnZms9Bv = qnZms9Bv + 1;
                    Q7BDCTvkeKEj = Q7BDCTvkeKEj +1;
                };
            }
            if (qnZms9Bv >= OuZDX5F)
                break;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            {
                yJBNWRDESIOp = qrUoKd52SMVw - xuCnZsJx - 2;
                while (yJBNWRDESIOp >= xuCnZsJx) {
                    qnZms9Bv = qnZms9Bv + 1;
                    cout << gDBHzv[iACGQqV4 - xuCnZsJx - 1][yJBNWRDESIOp] << '\n';
                    yJBNWRDESIOp = yJBNWRDESIOp - 1;
                };
            }
            if (qnZms9Bv >= OuZDX5F)
                break;
            {
                yhHQuDnle1 = iACGQqV4 - xuCnZsJx - 2;
                while (yhHQuDnle1 >= xuCnZsJx + 1) {
                    qnZms9Bv = qnZms9Bv + 1;
                    cout << gDBHzv[yhHQuDnle1][xuCnZsJx] << '\n';
                    yhHQuDnle1 = yhHQuDnle1 - 1;
                };
            }
            xuCnZsJx = xuCnZsJx + 1;
        };
    }
    return 0;
}

