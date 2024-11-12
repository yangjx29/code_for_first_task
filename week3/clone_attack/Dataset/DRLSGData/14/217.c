struct   student {
    int GQE21FqcJkfm;
    double  M6kwrcufHp;
    double  CBM7AROQK;
    double  YZtHM3GPhf1Y;
};
int main () {
    int e7f8so, ZRf8lK, pk7wurj, A4HUBFejafP;
    struct   student iM8hRpy14 [(100059 - 59)];
    struct   student temp;
    scanf ("%d", &e7f8so);
    for (ZRf8lK = (259 - 259); ZRf8lK < e7f8so; ZRf8lK = ZRf8lK +(573 - 572)) {
        scanf ("%d%lf%lf", &iM8hRpy14[ZRf8lK].GQE21FqcJkfm, &iM8hRpy14[ZRf8lK].M6kwrcufHp, &iM8hRpy14[ZRf8lK].CBM7AROQK);
        iM8hRpy14[ZRf8lK].YZtHM3GPhf1Y = iM8hRpy14[ZRf8lK].M6kwrcufHp + iM8hRpy14[ZRf8lK].CBM7AROQK;
    }
    for (ZRf8lK = (250 - 250); ZRf8lK < (343 - 340); ZRf8lK = ZRf8lK +(52 - 51)) {
        A4HUBFejafP = ZRf8lK;
        for (pk7wurj = ZRf8lK; pk7wurj < e7f8so; pk7wurj = pk7wurj + 1) {
            if (iM8hRpy14[A4HUBFejafP].YZtHM3GPhf1Y < iM8hRpy14[pk7wurj].YZtHM3GPhf1Y) {
                A4HUBFejafP = pk7wurj;
            }
        }
        if (A4HUBFejafP != ZRf8lK) {
            temp = iM8hRpy14[ZRf8lK];
            iM8hRpy14[ZRf8lK] = iM8hRpy14[A4HUBFejafP];
            iM8hRpy14[A4HUBFejafP] = temp;
        }
    }
    for (ZRf8lK = (771 - 771); ZRf8lK < (828 - 825); ZRf8lK = ZRf8lK +1) {
        printf ("%d %.0lf\n", iM8hRpy14[ZRf8lK].GQE21FqcJkfm, iM8hRpy14[ZRf8lK].YZtHM3GPhf1Y);
    }
    return (999 - 999);
}

