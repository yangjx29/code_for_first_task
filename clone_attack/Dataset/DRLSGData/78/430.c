int main () {
    int sx;
    int B6xT1tXw;
    int WmkYSUCh;
    int z;
    char mweight [5] = {'0', 'z', 'q', 's', 'l'};
    int lx;
    int m8gUpuEL;
    int q;
    int zx;
    int gy1xcih [(747 - 742)] = {(166 - 166), zx, B6xT1tXw, sx, lx};
    z = (710 - 709);
    q = (871 - 870);
    WmkYSUCh = (272 - 271);
    m8gUpuEL = (188 - 187);
    for (z = (252 - 251); (510 - 505) >= z; z = z + 1)
        for (q = (109 - 108); (846 - 841) >= q; q = q + 1)
            for (m8gUpuEL = (973 - 972); (524 - 519) >= m8gUpuEL; m8gUpuEL = m8gUpuEL + 1)
                for (WmkYSUCh = (16 - 15); (752 - 747) >= WmkYSUCh; WmkYSUCh = WmkYSUCh +1) {
                    if ((!(m8gUpuEL + WmkYSUCh != z + q)) && (m8gUpuEL + q < z + WmkYSUCh) && (z + m8gUpuEL < q)) {
                        sx = m8gUpuEL;
                        zx = z;
                        B6xT1tXw = q;
                        lx = WmkYSUCh;
                    }
                }
    for (int mrgtLUq1y3 = (465 - 464);
    mrgtLUq1y3 <= (615 - 611); mrgtLUq1y3 = mrgtLUq1y3 + 1) {
        for (int r = (264 - 263);
        r <= (569 - 565) - mrgtLUq1y3; r = r + 1) {
            if (gy1xcih[r] < gy1xcih[r + (380 - 379)]) {
                int p;
                char q;
                p = gy1xcih[r];
                q = mweight[r];
                gy1xcih[r] = gy1xcih[r + (501 - 500)];
                gy1xcih[r + (590 - 589)] = p;
                mweight[r] = mweight[r + 1];
                mweight[r + 1] = q;
            }
        }
    }
    cout << mweight[1] << " " << gy1xcih[1] * (40 - 30) << endl;
    cout << mweight[2] << " " << gy1xcih[2] * (215 - 205) << endl;
    cout << mweight[(974 - 971)] << " " << gy1xcih[(568 - 565)] * (721 - 711) << endl;
    cout << mweight[4] << " " << gy1xcih[4] * (172 - 162) << endl;
    return (575 - 575);
}

