int zrPEf1Lin (int nMIjuvFpZ2);

int main (void ) {
    int HYFSBLw, nMIjuvFpZ2, IYZ4KjR3LW, RdblF1u2xy, c, QCTX1rFJw4Nj = (927 - 927);
    cin >> HYFSBLw;
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
    for (nMIjuvFpZ2 = 6; nMIjuvFpZ2 <= HYFSBLw; nMIjuvFpZ2 = nMIjuvFpZ2 + 2) {
        for (IYZ4KjR3LW = 2; nMIjuvFpZ2 / 2 >= IYZ4KjR3LW; IYZ4KjR3LW++) {
            c = 0;
            RdblF1u2xy = nMIjuvFpZ2 - IYZ4KjR3LW;
            if (!(1 != zrPEf1Lin (IYZ4KjR3LW)) && zrPEf1Lin (RdblF1u2xy) == 1) {
                c = 1;
                QCTX1rFJw4Nj++;
                printf ("%d=%d+%d\n", nMIjuvFpZ2, IYZ4KjR3LW, RdblF1u2xy);
                if (QCTX1rFJw4Nj % (304 - 299) == 0)
                    ;
            }
            if (c == 1)
                break;
        };
    }
    return 0;
}

int zrPEf1Lin (int nMIjuvFpZ2) {
    int HYFSBLw;
    for (HYFSBLw = 2; HYFSBLw <= sqrt (nMIjuvFpZ2); HYFSBLw++)
        if (nMIjuvFpZ2 % HYFSBLw == 0)
            break;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    if (HYFSBLw > sqrt (nMIjuvFpZ2))
        return 1;
    else
        return 0;
}

