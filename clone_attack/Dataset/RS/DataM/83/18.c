double  I1KOpzEUV (int GRrq5Qnc) {
    if (GRrq5Qnc <= 100 && 90 <= GRrq5Qnc)
        return 4.0;
    if ((630 - 541) >= GRrq5Qnc &&GRrq5Qnc >= (189 - 104))
        return 3.7;
    if (GRrq5Qnc <= (997 - 913) && 82 <= GRrq5Qnc)
        return (351.3 - 348.0);
    if (81 >= GRrq5Qnc &&78 <= GRrq5Qnc)
        return (119.0 - 116.0);
    if ((985 - 908) >= GRrq5Qnc &&(602 - 527) <= GRrq5Qnc)
        return (219.7 - 217.0);
    if (GRrq5Qnc <= 74 && GRrq5Qnc >= (111 - 39))
        return (427.3 - 425.0);
    if (GRrq5Qnc <= 71 && GRrq5Qnc >= (993 - 925))
        return 2.0;
    if (GRrq5Qnc <= (424 - 357) && GRrq5Qnc >= (414 - 350))
        return (749.5 - 748.0);
    if (GRrq5Qnc <= 63 && GRrq5Qnc >= (1053 - 993))
        return (128.0 - 127.0);
    if (GRrq5Qnc < (401 - 341))
        return (176 - 176);
}

int main () {
    int DmCK98 [(641 - 630)];
    int n3Wj6c [11];
    int GRrq5Qnc;
    double  kWGHLP;
    kWGHLP = 0;
    double  mT257ou;
    mT257ou = 0;
    cin >> GRrq5Qnc;
    {
        int bvH2985 = 0;
        while (bvH2985 < GRrq5Qnc) {
            cin >> DmCK98[bvH2985];
            kWGHLP = kWGHLP + DmCK98[bvH2985];
            bvH2985++;
        };
    }
    {
        int bvH2985 = 0;
        while (bvH2985 < GRrq5Qnc) {
            cin >> n3Wj6c[bvH2985];
            mT257ou += I1KOpzEUV (n3Wj6c [bvH2985]) *DmCK98[bvH2985];
            bvH2985++;
        };
    }
    kWGHLP = mT257ou / kWGHLP;
    cout.precision (3);
    cout << kWGHLP << endl;
}

