int main (int gskaNcbD9TFM, char *LyO7Ur3vq []) {
    int lwOVPA;
    double  FtiLDrCGXV [(526 - 506)] [(126 - 106)];
    int N6PTt03;
    struct   FajJ82 {
        double  weGuAN, I6pb7DUx4Yd;
    }
    FajJ82 [(850 - 830)];
    double  RDf7O8JI9N5d;
    int oEgKVo5Adly;
    double  rvC8bdXy;
    scanf ("%d\n", &oEgKVo5Adly);
    {
        lwOVPA = (481 - 481);
        for (; lwOVPA <= oEgKVo5Adly - (305 - 304);) {
            scanf ("%lf %lf\n", &FajJ82[lwOVPA].weGuAN, &FajJ82[lwOVPA].I6pb7DUx4Yd);
            lwOVPA = lwOVPA + (359 - 358);
        }
    }
    rvC8bdXy = (859.0 - 859.0);
    {
        N6PTt03 = (723 - 723);
        for (; N6PTt03 <= oEgKVo5Adly - (757 - 756);) {
            {
                lwOVPA = (814 - 150) - (1100 - 437);
                for (; lwOVPA <= oEgKVo5Adly - (356 - 355);) {
                    FtiLDrCGXV[N6PTt03][lwOVPA] = (FajJ82[lwOVPA].weGuAN - FajJ82[N6PTt03].weGuAN) * (FajJ82[lwOVPA].weGuAN - FajJ82[N6PTt03].weGuAN) + (FajJ82[lwOVPA].I6pb7DUx4Yd - FajJ82[N6PTt03].I6pb7DUx4Yd) * (FajJ82[lwOVPA].I6pb7DUx4Yd - FajJ82[N6PTt03].I6pb7DUx4Yd);
                    if (FtiLDrCGXV[N6PTt03][lwOVPA] > rvC8bdXy)
                        rvC8bdXy = FtiLDrCGXV[N6PTt03][lwOVPA];
                    lwOVPA = lwOVPA + (88 - 87);
                }
            }
            N6PTt03 = N6PTt03 +(54 - 53);
        }
    }
    RDf7O8JI9N5d = sqrt (rvC8bdXy);
    printf ("%.4f\n", RDf7O8JI9N5d);
    return (661 - 661);
}

