int main () {
    char oxjY4u5FfR [350];
    char qNIgAZ9Tn [350];
    gets (oxjY4u5FfR);
    int icJXD5Lda;
    int JJzHnC;
    int UNLwh4ieoT;
    int ZFdVy8jlSf;
    int RvnPe9Sw7kR6;
    int a;
    int xsR67WLMC2X;
    icJXD5Lda = 0;
    JJzHnC = 1;
    for (UNLwh4ieoT = 0; strlen (oxjY4u5FfR) > UNLwh4ieoT; UNLwh4ieoT = UNLwh4ieoT +1) {
        if (123 > (int) oxjY4u5FfR[UNLwh4ieoT] && (int) oxjY4u5FfR[UNLwh4ieoT] > 96) {
            qNIgAZ9Tn[icJXD5Lda] = oxjY4u5FfR[UNLwh4ieoT];
            icJXD5Lda = icJXD5Lda + 1;
        };
    }
    for (a = icJXD5Lda - 1; 0 < a; a = a - 1) {
        for (xsR67WLMC2X = 0; xsR67WLMC2X < a; xsR67WLMC2X = xsR67WLMC2X + 1)
            if (qNIgAZ9Tn[xsR67WLMC2X + 1] < qNIgAZ9Tn[xsR67WLMC2X]) {
                int yzgxiX;
                yzgxiX = qNIgAZ9Tn[xsR67WLMC2X];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                qNIgAZ9Tn[xsR67WLMC2X] = qNIgAZ9Tn[xsR67WLMC2X + 1];
                qNIgAZ9Tn[xsR67WLMC2X + 1] = yzgxiX;
            };
    }
    if (!(0 == icJXD5Lda)) {
        for (UNLwh4ieoT = 0; icJXD5Lda > UNLwh4ieoT; UNLwh4ieoT = UNLwh4ieoT +1) {
            for (ZFdVy8jlSf = UNLwh4ieoT +1; ZFdVy8jlSf < icJXD5Lda; ZFdVy8jlSf++) {
                if (qNIgAZ9Tn[UNLwh4ieoT] == qNIgAZ9Tn[ZFdVy8jlSf] && qNIgAZ9Tn[UNLwh4ieoT] != '0') {
                    qNIgAZ9Tn[ZFdVy8jlSf] = '0';
                    JJzHnC = JJzHnC +1;
                };
            }
            if (qNIgAZ9Tn[UNLwh4ieoT] != '0') {
                printf ("%c=%d\n", qNIgAZ9Tn[UNLwh4ieoT], JJzHnC);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int temp = 0;
                        while (temp < 10) {
                            printf ("%d\n", temp);
                            temp = temp + 1;
                            if (temp == 9)
                                break;
                        }
                    }
                };
            }
            JJzHnC = 1;
        };
    }
    else
        printf ("No");
    return 0;
}

