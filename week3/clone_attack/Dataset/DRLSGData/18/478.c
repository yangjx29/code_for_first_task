int sEFQip (int sxH5gO1 [(603 - 503)] [(190 - 90)], int, int, int);

int main () {
    int qM5dNBVAo2, sxH5gO1 [(671 - 571)] [(699 - 599)], Sr6w4T8moR, YCOvRZQ, RdSjyVPA, ThLf5xkst;
    cin >> qM5dNBVAo2;
    for (int J6nb0a = (448 - 447);
    qM5dNBVAo2 >= J6nb0a; J6nb0a++) {
        Sr6w4T8moR = (571 - 571);
        {
            YCOvRZQ = (1033 - 522) - (686 - 175);
            while (YCOvRZQ < qM5dNBVAo2) {
                for (RdSjyVPA = (649 - 649); RdSjyVPA < qM5dNBVAo2; RdSjyVPA++) {
                    cin >> sxH5gO1[YCOvRZQ][RdSjyVPA];
                }
                YCOvRZQ++;
            }
        }
        for (int yFyXNGr = (811 - 811);
        yFyXNGr < qM5dNBVAo2 - (317 - 316); yFyXNGr++) {
            for (YCOvRZQ = (149 - 149); qM5dNBVAo2 - yFyXNGr > YCOvRZQ; YCOvRZQ++) {
                ThLf5xkst = sEFQip (sxH5gO1, (111 - 111), YCOvRZQ, qM5dNBVAo2 - yFyXNGr);
                {
                    RdSjyVPA = (1130 - 888) - (783 - 541);
                    while (RdSjyVPA < qM5dNBVAo2 - yFyXNGr) {
                        sxH5gO1[YCOvRZQ][RdSjyVPA] -= ThLf5xkst;
                        RdSjyVPA++;
                    }
                }
            }
            for (YCOvRZQ = (975 - 975); YCOvRZQ < qM5dNBVAo2 - yFyXNGr; YCOvRZQ++) {
                ThLf5xkst = sEFQip (sxH5gO1, (705 - 704), YCOvRZQ, qM5dNBVAo2 - yFyXNGr);
                {
                    RdSjyVPA = (979 - 537) - (1399 - 957);
                    while (RdSjyVPA < qM5dNBVAo2 - yFyXNGr) {
                        sxH5gO1[RdSjyVPA][YCOvRZQ] -= ThLf5xkst;
                        RdSjyVPA++;
                    }
                }
            }
            Sr6w4T8moR += sxH5gO1[(961 - 960)][(565 - 564)];
            for (YCOvRZQ = (819 - 819); YCOvRZQ < qM5dNBVAo2 - yFyXNGr; YCOvRZQ++) {
                RdSjyVPA = (1712 - 935) - (1723 - 947);
                while (qM5dNBVAo2 - yFyXNGr - (160 - 159) > RdSjyVPA) {
                    sxH5gO1[YCOvRZQ][RdSjyVPA] = sxH5gO1[YCOvRZQ][RdSjyVPA +(912 - 911)];
                    RdSjyVPA++;
                }
            }
            for (YCOvRZQ = (519 - 519); qM5dNBVAo2 - yFyXNGr - (561 - 560) > YCOvRZQ; YCOvRZQ++) {
                RdSjyVPA = (750 - 749);
                while (qM5dNBVAo2 - yFyXNGr - (538 - 537) > RdSjyVPA) {
                    sxH5gO1[RdSjyVPA][YCOvRZQ] = sxH5gO1[RdSjyVPA +(941 - 940)][YCOvRZQ];
                    RdSjyVPA++;
                }
            }
        }
        cout << Sr6w4T8moR << endl;
    }
    return (546 - 546);
}

int sEFQip (int sxH5gO1 [(1044 - 944)] [100], int QkeMHErXax8, int yFyXNGr, int qM5dNBVAo2) {
    int ThLf5xkst;
    if (!((855 - 855) != QkeMHErXax8)) {
        ThLf5xkst = sxH5gO1[yFyXNGr][(794 - 794)];
        {
            int J6nb0a = (996 - 996);
            while (qM5dNBVAo2 > J6nb0a) {
                if (ThLf5xkst > sxH5gO1[yFyXNGr][J6nb0a])
                    ThLf5xkst = sxH5gO1[yFyXNGr][J6nb0a];
                J6nb0a++;
            }
        }
    }
    else {
        ThLf5xkst = sxH5gO1[(989 - 989)][yFyXNGr];
        for (int YCOvRZQ = (73 - 73);
        YCOvRZQ < qM5dNBVAo2; YCOvRZQ++) {
            if (ThLf5xkst > sxH5gO1[YCOvRZQ][yFyXNGr])
                ThLf5xkst = sxH5gO1[YCOvRZQ][yFyXNGr];
        }
    }
    return ThLf5xkst;
}

