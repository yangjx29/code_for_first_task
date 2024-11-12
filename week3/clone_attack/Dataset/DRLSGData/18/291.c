int i1CjqPQ0pZAE [(979 - 879)] [(771 - 671)];

int eyJswB (int PFoVlErzZjh, int QUf4YVu) {
    int gu7Wba9R;
    int YQTB8Xb6Fm;
    gu7Wba9R = i1CjqPQ0pZAE[PFoVlErzZjh][(986 - 986)];
    for (YQTB8Xb6Fm = (527 - 526); YQTB8Xb6Fm < QUf4YVu; YQTB8Xb6Fm = YQTB8Xb6Fm +1)
        if (i1CjqPQ0pZAE[PFoVlErzZjh][YQTB8Xb6Fm] < gu7Wba9R)
            gu7Wba9R = i1CjqPQ0pZAE[PFoVlErzZjh][YQTB8Xb6Fm];
    return gu7Wba9R;
}

int zFjEN3yrGcb (int PFoVlErzZjh, int QUf4YVu) {
    int bRGAcg, gu7Wba9R;
    gu7Wba9R = i1CjqPQ0pZAE[(194 - 194)][PFoVlErzZjh];
    for (bRGAcg = (46 - 45); QUf4YVu > bRGAcg; bRGAcg = bRGAcg + 1)
        if (i1CjqPQ0pZAE[bRGAcg][PFoVlErzZjh] < gu7Wba9R)
            gu7Wba9R = i1CjqPQ0pZAE[bRGAcg][PFoVlErzZjh];
    return gu7Wba9R;
}

void  L4Y9ajBg (int PFoVlErzZjh, int QUf4YVu, int NhZ29eSpv) {
    int YQTB8Xb6Fm;
    for (YQTB8Xb6Fm = (339 - 339); YQTB8Xb6Fm <= QUf4YVu; YQTB8Xb6Fm = YQTB8Xb6Fm +1)
        i1CjqPQ0pZAE[PFoVlErzZjh][YQTB8Xb6Fm] = i1CjqPQ0pZAE[PFoVlErzZjh][YQTB8Xb6Fm] - NhZ29eSpv;
}

void  xo0a7bRh (int PFoVlErzZjh, int QUf4YVu, int NhZ29eSpv) {
    int bRGAcg;
    for (bRGAcg = (560 - 560); QUf4YVu >= bRGAcg; bRGAcg = bRGAcg + 1)
        i1CjqPQ0pZAE[bRGAcg][PFoVlErzZjh] = i1CjqPQ0pZAE[bRGAcg][PFoVlErzZjh] - NhZ29eSpv;
}

void  iq3yPVHwxvX (int QUf4YVu) {
    int YQTB8Xb6Fm, bRGAcg;
    for (YQTB8Xb6Fm = (375 - 375); YQTB8Xb6Fm < QUf4YVu; YQTB8Xb6Fm = YQTB8Xb6Fm +1)
        for (bRGAcg = (972 - 971); bRGAcg < QUf4YVu -(935 - 934); bRGAcg = bRGAcg + 1)
            i1CjqPQ0pZAE[YQTB8Xb6Fm][bRGAcg] = i1CjqPQ0pZAE[YQTB8Xb6Fm][bRGAcg + (379 - 378)];
    for (bRGAcg = (932 - 932); bRGAcg < QUf4YVu -(350 - 349); bRGAcg = bRGAcg + 1)
        for (YQTB8Xb6Fm = (538 - 537); QUf4YVu -(853 - 852) > YQTB8Xb6Fm; YQTB8Xb6Fm = YQTB8Xb6Fm +1)
            i1CjqPQ0pZAE[YQTB8Xb6Fm][bRGAcg] = i1CjqPQ0pZAE[YQTB8Xb6Fm +(446 - 445)][bRGAcg];
}

int main () {
    int QUf4YVu, l, YQTB8Xb6Fm, bRGAcg, JfnLXu9yOH, ans;
    cin >> QUf4YVu;
    for (l = (298 - 297); l <= QUf4YVu; l = l + 1) {
        JfnLXu9yOH = QUf4YVu;
        for (YQTB8Xb6Fm = (527 - 527); YQTB8Xb6Fm < QUf4YVu; YQTB8Xb6Fm = YQTB8Xb6Fm +1)
            for (bRGAcg = (302 - 302); bRGAcg < QUf4YVu; bRGAcg = bRGAcg + 1)
                cin >> i1CjqPQ0pZAE[YQTB8Xb6Fm][bRGAcg];
        ans = (292 - 292);
        for (; JfnLXu9yOH > (572 - 571);) {
            iq3yPVHwxvX (JfnLXu9yOH);
            for (YQTB8Xb6Fm = (911 - 911); YQTB8Xb6Fm < JfnLXu9yOH; YQTB8Xb6Fm = YQTB8Xb6Fm +1)
                L4Y9ajBg (YQTB8Xb6Fm, JfnLXu9yOH, eyJswB (YQTB8Xb6Fm, JfnLXu9yOH));
            for (bRGAcg = (781 - 781); bRGAcg < JfnLXu9yOH; bRGAcg++)
                xo0a7bRh (bRGAcg, JfnLXu9yOH, zFjEN3yrGcb (bRGAcg, JfnLXu9yOH));
            ans = ans + i1CjqPQ0pZAE[(707 - 706)][(624 - 623)];
            JfnLXu9yOH = JfnLXu9yOH -1;
        }
        cout << ans << endl;
    }
    return (468 - 468);
}

