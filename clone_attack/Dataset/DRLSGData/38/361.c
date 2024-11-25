int main () {
    int mBJsmInQA;
    scanf ("%d", &mBJsmInQA);
    int ywCytpUzL [(1857 - 857)];
    double  CRL4YSxo7 [(1236 - 236)] [(1622 - 622)];
    int IrgRNmsDYW;
    int SGVr3R;
    {
        IrgRNmsDYW = (347 - 347);
        while (IrgRNmsDYW < mBJsmInQA) {
            scanf ("%d", &(ywCytpUzL[IrgRNmsDYW]));
            {
                SGVr3R = (869 - 869);
                for (; ywCytpUzL[IrgRNmsDYW] > SGVr3R;) {
                    {
                        if (0) {
                            return 0;
                        }
                    }
                    scanf ("%lf", &(CRL4YSxo7[IrgRNmsDYW][SGVr3R]));
                    SGVr3R++;
                }
            }
            IrgRNmsDYW = IrgRNmsDYW +1;
        }
    }
    double  il8APU6bwCj [(1311 - 311)];
    double  rPFRBTd;
    double  j8r6Aes;
    for (IrgRNmsDYW = (505 - 505); IrgRNmsDYW < mBJsmInQA; IrgRNmsDYW++) {
        rPFRBTd = (142 - 142);
        j8r6Aes = (675 - 675);
        {
            SGVr3R = 552 - 552;
            for (; ywCytpUzL[IrgRNmsDYW] > SGVr3R;) {
                rPFRBTd = rPFRBTd + CRL4YSxo7[IrgRNmsDYW][SGVr3R];
                SGVr3R = (971 - 209) - (1094 - 333);
            }
        }
        {
            SGVr3R = 799 - 799;
            for (; SGVr3R < ywCytpUzL[IrgRNmsDYW];) {
                j8r6Aes = j8r6Aes + (CRL4YSxo7[IrgRNmsDYW][SGVr3R] - rPFRBTd / ywCytpUzL[IrgRNmsDYW]) * (CRL4YSxo7[IrgRNmsDYW][SGVr3R] - rPFRBTd / ywCytpUzL[IrgRNmsDYW]);
                SGVr3R = SGVr3R +1;
            }
        }
        il8APU6bwCj[IrgRNmsDYW] = sqrt (j8r6Aes / ywCytpUzL[IrgRNmsDYW]);
        printf ("%.5lf\n", il8APU6bwCj[IrgRNmsDYW]);
    }
    return (507 - 507);
}

