int xRtYgoIs [(742 - 442)];
int lAscR6;
float gy2Skb = (316 - 316);
float ave;

int main () {
    int flag;
    void  qIFCkNV1ogMQ ();
    int IJ15kmrxibQ;
    flag = (609 - 609);
    scanf ("%d", &lAscR6);
    for (IJ15kmrxibQ = (996 - 996); lAscR6 > IJ15kmrxibQ; IJ15kmrxibQ = IJ15kmrxibQ +(651 - 650)) {
        scanf ("%d", &xRtYgoIs[IJ15kmrxibQ]);
        gy2Skb = gy2Skb + xRtYgoIs[IJ15kmrxibQ];
    }
    ave = (float) gy2Skb / lAscR6;
    qIFCkNV1ogMQ ();
    if (!(xRtYgoIs[lAscR6 - (670 - 669)] - ave != ave - xRtYgoIs[(606 - 606)])) {
        for (IJ15kmrxibQ = (130 - 130); lAscR6 > IJ15kmrxibQ; IJ15kmrxibQ = IJ15kmrxibQ +1) {
            if (!(xRtYgoIs[0] != xRtYgoIs[IJ15kmrxibQ]) || !(xRtYgoIs[lAscR6 - 1] != xRtYgoIs[IJ15kmrxibQ])) {
                if (IJ15kmrxibQ != 0)
                    printf (",");
                printf ("%d", xRtYgoIs[IJ15kmrxibQ]);
            }
        }
    }
    else if (xRtYgoIs[lAscR6 - 1] - ave < ave - xRtYgoIs[0]) {
        for (IJ15kmrxibQ = 0; IJ15kmrxibQ < lAscR6; IJ15kmrxibQ++) {
            if (!(xRtYgoIs[0] != xRtYgoIs[IJ15kmrxibQ])) {
                if (IJ15kmrxibQ != 0 && !(xRtYgoIs[IJ15kmrxibQ] != xRtYgoIs[IJ15kmrxibQ +1]))
                    printf (",");
                printf ("%d", xRtYgoIs[IJ15kmrxibQ]);
            }
        }
    }
    else {
        for (IJ15kmrxibQ = 0; xRtYgoIs[IJ15kmrxibQ]; IJ15kmrxibQ++) {
            if (!(xRtYgoIs[lAscR6 - 1] != xRtYgoIs[IJ15kmrxibQ])) {
                if (flag != 0)
                    printf (",");
                flag = 1;
                printf ("%d", xRtYgoIs[IJ15kmrxibQ]);
            }
        }
    }
    return 0;
}

void  qIFCkNV1ogMQ () {
    int IJ15kmrxibQ;
    int DtjGAOJof3xa;
    for (IJ15kmrxibQ = 0; lAscR6 - 1 > IJ15kmrxibQ; IJ15kmrxibQ++) {
        for (DtjGAOJof3xa = IJ15kmrxibQ; lAscR6 > DtjGAOJof3xa; DtjGAOJof3xa++) {
            if (xRtYgoIs[IJ15kmrxibQ] > xRtYgoIs[DtjGAOJof3xa]) {
                int t;
                t = xRtYgoIs[IJ15kmrxibQ];
                xRtYgoIs[IJ15kmrxibQ] = xRtYgoIs[DtjGAOJof3xa];
                xRtYgoIs[DtjGAOJof3xa] = t;
            }
        }
    }
}

