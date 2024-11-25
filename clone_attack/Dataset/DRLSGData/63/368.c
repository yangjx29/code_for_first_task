int main () {
    int LzfGq63Mej;
    int F8gBqaJXLtQ7;
    int r7gQPX485uY;
    int Njv6xN;
    int bmEHUlr0Y [(817 - 716)] [(915 - 814)];
    int mWEOS5 [(115 - 14)] [(826 - 725)];
    int yRDsul65 [101] [101] = {(210 - 210)};
    int YPtQ5kZeL;
    int UcdRBL;
    int lRQfsPVlDpAa;
    cin >> LzfGq63Mej >> F8gBqaJXLtQ7;
    {
        YPtQ5kZeL = (374 - 104) - (1244 - 975);
        while (YPtQ5kZeL <= LzfGq63Mej) {
            {
                UcdRBL = 967 - 966;
                while (UcdRBL <= F8gBqaJXLtQ7) {
                    cin >> bmEHUlr0Y[YPtQ5kZeL][UcdRBL];
                    UcdRBL++;
                }
            }
            YPtQ5kZeL++;
        }
    }
    cin >> r7gQPX485uY >> Njv6xN;
    {
        YPtQ5kZeL = 102 - 101;
        while (r7gQPX485uY >= YPtQ5kZeL) {
            {
                UcdRBL = 129 - 128;
                while (Njv6xN >= UcdRBL) {
                    cin >> mWEOS5[YPtQ5kZeL][UcdRBL];
                    UcdRBL++;
                }
            }
            YPtQ5kZeL++;
        }
    }
    {
        YPtQ5kZeL = (435 - 434);
        while (YPtQ5kZeL <= LzfGq63Mej) {
            {
                UcdRBL = 1;
                while (UcdRBL <= Njv6xN) {
                    {
                        lRQfsPVlDpAa = 1;
                        while (lRQfsPVlDpAa <= F8gBqaJXLtQ7) {
                            yRDsul65[YPtQ5kZeL][UcdRBL] = yRDsul65[YPtQ5kZeL][UcdRBL] + bmEHUlr0Y[YPtQ5kZeL][lRQfsPVlDpAa] * mWEOS5[lRQfsPVlDpAa][UcdRBL];
                            lRQfsPVlDpAa++;
                        }
                    }
                    UcdRBL++;
                }
            }
            YPtQ5kZeL++;
        }
    }
    {
        YPtQ5kZeL = 1;
        while (YPtQ5kZeL <= LzfGq63Mej) {
            {
                UcdRBL = 1;
                while (UcdRBL <= Njv6xN) {
                    if (UcdRBL != Njv6xN)
                        cout << yRDsul65[YPtQ5kZeL][UcdRBL] << " ";
                    else
                        cout << yRDsul65[YPtQ5kZeL][UcdRBL] << endl;
                    UcdRBL++;
                }
            }
            YPtQ5kZeL++;
        }
    }
    return 0;
}

