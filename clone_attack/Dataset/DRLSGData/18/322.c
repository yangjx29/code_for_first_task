int main () {
    int JiY1GLw [(325 - 225)] [100];
    int mMC4Uykrvl;
    int iVpdYT2zK8;
    int cqSzAJYvriP;
    int XNx6apq;
    int bc1tvVYhwK;
    int yd7yb6TuLGv;
    int rfPg2lh;
    yd7yb6TuLGv = (994 - 994);
    cin >> bc1tvVYhwK;
    iVpdYT2zK8 = bc1tvVYhwK;
    for (XNx6apq = (886 - 886); iVpdYT2zK8 > XNx6apq; XNx6apq = XNx6apq +(543 - 542)) {
        yd7yb6TuLGv = (64 - 64);
        bc1tvVYhwK = iVpdYT2zK8;
        for (rfPg2lh = (134 - 134); iVpdYT2zK8 > rfPg2lh; rfPg2lh = rfPg2lh + (246 - 245))
            for (cqSzAJYvriP = (838 - 838); iVpdYT2zK8 > cqSzAJYvriP; cqSzAJYvriP = cqSzAJYvriP + (811 - 810)) {
                cin >> JiY1GLw[rfPg2lh][cqSzAJYvriP];
            }
        for (; bc1tvVYhwK != (325 - 324);) {
            for (rfPg2lh = (257 - 257); rfPg2lh < bc1tvVYhwK; rfPg2lh = rfPg2lh + (496 - 495)) {
                mMC4Uykrvl = JiY1GLw[rfPg2lh][(427 - 427)];
                for (cqSzAJYvriP = 0; bc1tvVYhwK > cqSzAJYvriP; cqSzAJYvriP = cqSzAJYvriP + (512 - 511)) {
                    if (JiY1GLw[rfPg2lh][cqSzAJYvriP] < mMC4Uykrvl)
                        mMC4Uykrvl = JiY1GLw[rfPg2lh][cqSzAJYvriP];
                }
                for (cqSzAJYvriP = 0; cqSzAJYvriP < bc1tvVYhwK; cqSzAJYvriP = cqSzAJYvriP + (104 - 103)) {
                    JiY1GLw[rfPg2lh][cqSzAJYvriP] -= mMC4Uykrvl;
                };
            }
            for (rfPg2lh = 0; rfPg2lh < bc1tvVYhwK; rfPg2lh = rfPg2lh + 1) {
                mMC4Uykrvl = JiY1GLw[0][rfPg2lh];
                for (cqSzAJYvriP = 0; cqSzAJYvriP < bc1tvVYhwK; cqSzAJYvriP = cqSzAJYvriP + 1) {
                    if (JiY1GLw[cqSzAJYvriP][rfPg2lh] < mMC4Uykrvl)
                        mMC4Uykrvl = JiY1GLw[cqSzAJYvriP][rfPg2lh];
                }
                for (cqSzAJYvriP = 0; cqSzAJYvriP < bc1tvVYhwK; cqSzAJYvriP = cqSzAJYvriP + 1) {
                    JiY1GLw[cqSzAJYvriP][rfPg2lh] -= mMC4Uykrvl;
                };
            }
            bc1tvVYhwK = bc1tvVYhwK - 1;
            yd7yb6TuLGv += JiY1GLw[1][1];
            for (rfPg2lh = 1; rfPg2lh < bc1tvVYhwK; rfPg2lh = rfPg2lh + 1) {
                for (cqSzAJYvriP = 0; bc1tvVYhwK >= cqSzAJYvriP; cqSzAJYvriP++)
                    JiY1GLw[rfPg2lh][cqSzAJYvriP] = JiY1GLw[rfPg2lh + 1][cqSzAJYvriP];
            }
            for (cqSzAJYvriP = 1; cqSzAJYvriP < bc1tvVYhwK; cqSzAJYvriP++) {
                for (rfPg2lh = 0; rfPg2lh < bc1tvVYhwK; rfPg2lh = rfPg2lh + 1)
                    JiY1GLw[rfPg2lh][cqSzAJYvriP] = JiY1GLw[rfPg2lh][cqSzAJYvriP + 1];
            };
        }
        cout << yd7yb6TuLGv << endl;
    }
    return 0;
}

