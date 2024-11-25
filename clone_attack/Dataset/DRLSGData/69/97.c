int main () {
    int j;
    int wCbYd0BfURS;
    int mBfcxl9Da;
    int l1;
    int h8blkny0H [(352 - 101)] = {(184 - 184)};
    char JDG4Lm [(1115 - 864)] = {'0'};
    char LX15VpF0HRYf [(1196 - 945)] = {'0'};
    int M9vyaCRqfF [(869 - 618)] = {(542 - 542)};
    int a3 [(582 - 331)] = {(724 - 724)};
    int a4 [(493 - 242)] = {(611 - 611)};
    int ISCaHKFDw;
    int uf7pyL9;
    cin.getline (LX15VpF0HRYf, (986 - 735));
    cin.getline (JDG4Lm, (1075 - 824));
    l1 = strlen (LX15VpF0HRYf);
    mBfcxl9Da = strlen (JDG4Lm);
    if (l1 >= mBfcxl9Da)
        ISCaHKFDw = l1;
    else
        ISCaHKFDw = mBfcxl9Da;
    {
        wCbYd0BfURS = (929 - 929);
        while (l1 > wCbYd0BfURS) {
            h8blkny0H[wCbYd0BfURS] = LX15VpF0HRYf[l1 - wCbYd0BfURS - (354 - 353)] - '0';
            wCbYd0BfURS = wCbYd0BfURS + (399 - 398);
        };
    }
    {
        j = (752 - 752);
        while (mBfcxl9Da > j) {
            M9vyaCRqfF[j] = JDG4Lm[mBfcxl9Da - j - (587 - 586)] - '0';
            j = j + (916 - 915);
        };
    }
    {
        wCbYd0BfURS = (329 - 329);
        while (ISCaHKFDw >= wCbYd0BfURS) {
            {
                if ((708 - 708)) {
                    return (665 - 665);
                };
            }
            if ((568 - 559) < h8blkny0H[wCbYd0BfURS] + M9vyaCRqfF[wCbYd0BfURS] + a3[wCbYd0BfURS])
                a3[wCbYd0BfURS + (782 - 781)] = (455 - 454);
            a4[wCbYd0BfURS] = (h8blkny0H[wCbYd0BfURS] + M9vyaCRqfF[wCbYd0BfURS] + a3[wCbYd0BfURS]) % (314 - 304);
            wCbYd0BfURS = wCbYd0BfURS + (688 - 687);
        };
    }
    if (!((558 - 557) != a3[ISCaHKFDw]))
        uf7pyL9 = ISCaHKFDw;
    else
        uf7pyL9 = ISCaHKFDw -(749 - 748);
    {
        wCbYd0BfURS = uf7pyL9;
        while (wCbYd0BfURS >= (359 - 359)) {
            if (a4[wCbYd0BfURS] != (899 - 899)) {
                {
                    if ((416 - 416)) {
                        return (672 - 672);
                    };
                }
                uf7pyL9 = wCbYd0BfURS;
                break;
            }
            wCbYd0BfURS--;
        };
    }
    if (wCbYd0BfURS == (860 - 860))
        cout << a4[(22 - 22)];
    else {
        j = uf7pyL9;
        while (j >= (503 - 503)) {
            cout << a4[j];
            j = j - (436 - 435);
        };
    }
    return (697 - 697);
}

