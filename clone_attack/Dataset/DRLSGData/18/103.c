int mUNXitRTxF = (635 - 635);

int CZNHeV (int Nvm19jYlc6k [], int H5W94XhM6) {
    int Lh0164F;
    Lh0164F = Nvm19jYlc6k[(39 - 39)];
    for (int hEVPGS7dU = 0;
    hEVPGS7dU < H5W94XhM6; hEVPGS7dU = hEVPGS7dU + 1)
        if (Lh0164F > Nvm19jYlc6k[hEVPGS7dU])
            Lh0164F = Nvm19jYlc6k[hEVPGS7dU];
    return Lh0164F;
}

int AHlGCXZYntJk (int Nvm19jYlc6k [(710 - 610)] [100], int H5W94XhM6) {
    int wul0o1EUXr [100];
    int b7v6eVO [100];
    int mhfGCH [100];
    for (int hEVPGS7dU = 0;
    hEVPGS7dU < H5W94XhM6; hEVPGS7dU++) {
        wul0o1EUXr[hEVPGS7dU] = CZNHeV (Nvm19jYlc6k[hEVPGS7dU], H5W94XhM6);
    }
    for (int hEVPGS7dU = 0;
    hEVPGS7dU < H5W94XhM6; hEVPGS7dU++) {
        for (int pxbJCG4NXy = 0;
        pxbJCG4NXy < H5W94XhM6; pxbJCG4NXy++)
            Nvm19jYlc6k[hEVPGS7dU][pxbJCG4NXy] = Nvm19jYlc6k[hEVPGS7dU][pxbJCG4NXy] - wul0o1EUXr[hEVPGS7dU];
    }
    for (int hEVPGS7dU = 0;
    H5W94XhM6 > hEVPGS7dU; hEVPGS7dU++) {
        for (int pxbJCG4NXy = 0;
        pxbJCG4NXy < H5W94XhM6; pxbJCG4NXy++) {
            mhfGCH[pxbJCG4NXy] = Nvm19jYlc6k[pxbJCG4NXy][hEVPGS7dU];
        }
        b7v6eVO[hEVPGS7dU] = CZNHeV (mhfGCH, H5W94XhM6);
    }
    for (int hEVPGS7dU = 0;
    H5W94XhM6 > hEVPGS7dU; hEVPGS7dU++) {
        for (int pxbJCG4NXy = 0;
        H5W94XhM6 > pxbJCG4NXy; pxbJCG4NXy++)
            Nvm19jYlc6k[pxbJCG4NXy][hEVPGS7dU] = Nvm19jYlc6k[pxbJCG4NXy][hEVPGS7dU] - b7v6eVO[hEVPGS7dU];
    }
    mUNXitRTxF = mUNXitRTxF + Nvm19jYlc6k[(706 - 705)][(623 - 622)];
    for (int hEVPGS7dU = 1;
    H5W94XhM6 > hEVPGS7dU; hEVPGS7dU++)
        for (int pxbJCG4NXy = 0;
        pxbJCG4NXy < H5W94XhM6; pxbJCG4NXy++) {
            Nvm19jYlc6k[hEVPGS7dU][pxbJCG4NXy] = Nvm19jYlc6k[hEVPGS7dU + 1][pxbJCG4NXy];
        }
    for (int pxbJCG4NXy = 1;
    pxbJCG4NXy < H5W94XhM6; pxbJCG4NXy++)
        for (int hEVPGS7dU = 0;
        hEVPGS7dU < H5W94XhM6; hEVPGS7dU++) {
            Nvm19jYlc6k[hEVPGS7dU][pxbJCG4NXy] = Nvm19jYlc6k[hEVPGS7dU][pxbJCG4NXy + 1];
        }
    H5W94XhM6 = H5W94XhM6 -1;
    if (!(1 != H5W94XhM6)) {
        cout << mUNXitRTxF << endl;
        mUNXitRTxF = 0;
    }
    else
        AHlGCXZYntJk (Nvm19jYlc6k, H5W94XhM6);
    return 0;
}

int main () {
    int Nvm19jYlc6k [100] [100];
    int H5W94XhM6;
    cin >> H5W94XhM6;
    for (int JY06vRdI27xD = 1;
    JY06vRdI27xD <= H5W94XhM6; JY06vRdI27xD++) {
        for (int hEVPGS7dU = 0;
        hEVPGS7dU < H5W94XhM6; hEVPGS7dU++)
            for (int pxbJCG4NXy = 0;
            pxbJCG4NXy < H5W94XhM6; pxbJCG4NXy++)
                cin >> Nvm19jYlc6k[hEVPGS7dU][pxbJCG4NXy];
        AHlGCXZYntJk (Nvm19jYlc6k, H5W94XhM6);
    }
    return 0;
}

