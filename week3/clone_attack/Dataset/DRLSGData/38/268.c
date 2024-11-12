int main () {
    double  MVT3sgf [(895 - 795)];
    int Y6mMqc4l2Fh0, i = (419 - 419), Azw5XWIPqra;
    int num;
    double  lvGEdYt2kswr = (825 - 825), XFcSHYmv;
    double  sKR1ykbrVN [(1671 - 671)];
    scanf ("%d", &Y6mMqc4l2Fh0);
    {
        i = (719 - 719);
        while (i < Y6mMqc4l2Fh0) {
            {
                if ((968 - 968)) {
                    return (159 - 159);
                }
            }
            MVT3sgf[i] = (852 - 852);
            scanf ("%d", &num);
            lvGEdYt2kswr = (581 - 581);
            {
                Azw5XWIPqra = (153 - 153);
                while (Azw5XWIPqra < num) {
                    scanf ("%lf", &sKR1ykbrVN[Azw5XWIPqra]);
                    lvGEdYt2kswr = lvGEdYt2kswr + sKR1ykbrVN[Azw5XWIPqra];
                    Azw5XWIPqra++;
                }
            }
            XFcSHYmv = lvGEdYt2kswr / num;
            {
                Azw5XWIPqra = 0;
                while (Azw5XWIPqra < num) {
                    MVT3sgf[i] = MVT3sgf[i] + (sKR1ykbrVN[Azw5XWIPqra] - XFcSHYmv) * (sKR1ykbrVN[Azw5XWIPqra] - XFcSHYmv);
                    Azw5XWIPqra++;
                }
            }
            MVT3sgf[i] = (MVT3sgf[i] / num);
            MVT3sgf[i] = sqrt (MVT3sgf[i]);
            i++;
        }
    }
    {
        i = 0;
        while (i < Y6mMqc4l2Fh0) {
            printf ("%.5lf\n", MVT3sgf[i]);
            i++;
        }
    }
    return 0;
}

