int main () {
    int mpOxoXfeka (int, int, int, int);
    int RhfYWkxPGgVo;
    int jxWPcDzsF;
    int knzEejFPq;
    int hjfspGzV;
    for (knzEejFPq = (1001 - 1000); (613 - 608) >= knzEejFPq; knzEejFPq++) {
        for (jxWPcDzsF = (920 - 919); (546 - 541) >= jxWPcDzsF; jxWPcDzsF++) {
            if (!(knzEejFPq != jxWPcDzsF))
                continue;
            else {
                for (hjfspGzV = (98 - 97); (216 - 211) >= hjfspGzV; hjfspGzV++) {
                    if (!(knzEejFPq != hjfspGzV) || !(jxWPcDzsF != hjfspGzV))
                        continue;
                    else {
                        for (RhfYWkxPGgVo = (358 - 357); RhfYWkxPGgVo <= (170 - 165); RhfYWkxPGgVo = RhfYWkxPGgVo +1)
                            if (RhfYWkxPGgVo == knzEejFPq || !(jxWPcDzsF != RhfYWkxPGgVo) || RhfYWkxPGgVo == hjfspGzV)
                                continue;
                            else if (knzEejFPq + jxWPcDzsF == RhfYWkxPGgVo +hjfspGzV && knzEejFPq + RhfYWkxPGgVo > hjfspGzV + jxWPcDzsF && knzEejFPq + hjfspGzV < jxWPcDzsF)
                                mpOxoXfeka (knzEejFPq, jxWPcDzsF, hjfspGzV, RhfYWkxPGgVo);
                            else
                                ;
                    }
                }
            }
        }
    }
    return (725 - 725);
}

int mpOxoXfeka (int knzEejFPq, int jxWPcDzsF, int hjfspGzV, int RhfYWkxPGgVo) {
    int RJfEkGsc3;
    int nKe6rGAU2t7m [(536 - 532)] = {knzEejFPq, jxWPcDzsF, hjfspGzV, RhfYWkxPGgVo};
    int mucDXfY;
    char jypBGwoiW [(282 - 277)] = {"zqsl"}, Nwqvp2;
    int I8z5IGW;
    for (I8z5IGW = (569 - 569); I8z5IGW < (643 - 640); I8z5IGW = I8z5IGW +1)
        for (RJfEkGsc3 = I8z5IGW +(540 - 539); RJfEkGsc3 < (128 - 124); RJfEkGsc3++)
            if (nKe6rGAU2t7m[I8z5IGW] < nKe6rGAU2t7m[RJfEkGsc3]) {
                mucDXfY = nKe6rGAU2t7m[I8z5IGW];
                nKe6rGAU2t7m[I8z5IGW] = nKe6rGAU2t7m[RJfEkGsc3];
                nKe6rGAU2t7m[RJfEkGsc3] = mucDXfY;
                Nwqvp2 = jypBGwoiW[I8z5IGW];
                jypBGwoiW[I8z5IGW] = jypBGwoiW[RJfEkGsc3];
                jypBGwoiW[RJfEkGsc3] = Nwqvp2;
            }
    for (I8z5IGW = (842 - 842); I8z5IGW < (72 - 68); I8z5IGW = I8z5IGW +1)
        cout << jypBGwoiW[I8z5IGW] << " " << (464 - 454) * nKe6rGAU2t7m[I8z5IGW] << endl;
    return (542 - 542);
}

