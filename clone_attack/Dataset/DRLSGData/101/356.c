int main () {
    int jTxjln6MIo;
    int d8q0MY46HB;
    int WZ4olfy0RJt;
    int Em62ZedP9Fz;
    int KQygMzO;
    int jQHFrEkjsLq;
    int u1MZNuvsL;
    int zompfG;
    int NEJWHwu;
    char BPn9hlN;
    int LJ7oqH;
    int H57sVnzy;
    int bifNqIjmuOa;
    char aFhaXEJ [(512 - 509)] = {'A', 'B', 'C'};
    int w08ot5e;
    int XvhzpT;
    int YG3Qgf [(993 - 990)];
    int GBuVmX;
    for (LJ7oqH = (117 - 116); 3 >= LJ7oqH; LJ7oqH++) {
        for (w08ot5e = 1; 3 >= w08ot5e; w08ot5e = w08ot5e + 1) {
            for (zompfG = 1; 3 >= zompfG; zompfG++) {
                jTxjln6MIo = ((LJ7oqH < w08ot5e) + (!(LJ7oqH != zompfG)));
                WZ4olfy0RJt = ((LJ7oqH > w08ot5e) + (LJ7oqH > zompfG));
                jQHFrEkjsLq = ((zompfG > w08ot5e) + (w08ot5e > LJ7oqH));
                if (((LJ7oqH > w08ot5e) && (jTxjln6MIo < WZ4olfy0RJt)) || ((w08ot5e > LJ7oqH) && (jTxjln6MIo > WZ4olfy0RJt)) || ((!(LJ7oqH != w08ot5e)) && (!(jTxjln6MIo != WZ4olfy0RJt)))) {
                    if (((zompfG > w08ot5e) && (WZ4olfy0RJt > jQHFrEkjsLq)) || ((w08ot5e > zompfG) && (jQHFrEkjsLq > WZ4olfy0RJt)) || ((!(zompfG != w08ot5e)) && (!(jQHFrEkjsLq != WZ4olfy0RJt)))) {
                        if (((LJ7oqH > zompfG) && (jTxjln6MIo < jQHFrEkjsLq)) || ((LJ7oqH < zompfG) && (jQHFrEkjsLq < jTxjln6MIo)) || ((!(LJ7oqH != zompfG)) && (jQHFrEkjsLq == jTxjln6MIo))) {
                            XvhzpT = zompfG;
                            GBuVmX = LJ7oqH;
                            u1MZNuvsL = jTxjln6MIo;
                            Em62ZedP9Fz = jQHFrEkjsLq;
                            NEJWHwu = WZ4olfy0RJt;
                            bifNqIjmuOa = w08ot5e;
                        }
                    }
                }
            }
        }
    }
    YG3Qgf[(508 - 508)] = GBuVmX;
    YG3Qgf[1] = bifNqIjmuOa;
    YG3Qgf[(329 - 327)] = XvhzpT;
    for (d8q0MY46HB = 2; d8q0MY46HB > 0; d8q0MY46HB = d8q0MY46HB - 1) {
        for (KQygMzO = 0; KQygMzO < d8q0MY46HB; KQygMzO = KQygMzO +1) {
            if (YG3Qgf[KQygMzO] > YG3Qgf[KQygMzO +1]) {
                H57sVnzy = YG3Qgf[KQygMzO];
                BPn9hlN = aFhaXEJ[KQygMzO];
                YG3Qgf[KQygMzO] = YG3Qgf[KQygMzO +1];
                aFhaXEJ[KQygMzO] = aFhaXEJ[KQygMzO +1];
                aFhaXEJ[KQygMzO +1] = BPn9hlN;
                YG3Qgf[KQygMzO +1] = H57sVnzy;
            }
        }
    }
    printf ("%c%c%c", aFhaXEJ[0], aFhaXEJ[1], aFhaXEJ[2]);
    return 0;
}

