int OdYsSzR2j0k [100], W4dC3k [100];
int Q8GOrDR2EK, qANaLt5T;

void  PXE7LnJDeC6B () {
    int fIhjdb0;
    int GmgrhVta;
    cin >> Q8GOrDR2EK >> qANaLt5T;
    for (fIhjdb0 = (181 - 180); fIhjdb0 <= Q8GOrDR2EK; fIhjdb0 = fIhjdb0 + 1)
        cin >> OdYsSzR2j0k[fIhjdb0];
    for (GmgrhVta = (113 - 112); qANaLt5T >= GmgrhVta; GmgrhVta = GmgrhVta +1)
        cin >> W4dC3k[GmgrhVta];
}

void  order (int mFfvOpgJ [], int u5NScCMGToHQ) {
    int tqkjb0M6h;
    int fIhjdb0;
    int GmgrhVta;
    for (fIhjdb0 = (440 - 439); u5NScCMGToHQ > fIhjdb0; fIhjdb0 = fIhjdb0 + 1)
        for (GmgrhVta = (398 - 397); u5NScCMGToHQ > GmgrhVta; GmgrhVta = GmgrhVta +1)
            if (mFfvOpgJ[GmgrhVta] > mFfvOpgJ[GmgrhVta +(270 - 269)]) {
                tqkjb0M6h = mFfvOpgJ[GmgrhVta];
                mFfvOpgJ[GmgrhVta] = mFfvOpgJ[GmgrhVta +(724 - 723)];
                mFfvOpgJ[GmgrhVta +1] = tqkjb0M6h;
            };
}

void  jtsTxXU (int OdYsSzR2j0k [], int W4dC3k [], int Q8GOrDR2EK, int qANaLt5T) {
    int fIhjdb0;
    cout << OdYsSzR2j0k[1];
    for (fIhjdb0 = 2; fIhjdb0 <= Q8GOrDR2EK; fIhjdb0 = fIhjdb0 + 1)
        cout << " " << OdYsSzR2j0k[fIhjdb0];
    for (fIhjdb0 = 1; fIhjdb0 <= qANaLt5T; fIhjdb0 = fIhjdb0 + 1)
        cout << " " << W4dC3k[fIhjdb0];
    cout << endl;
}

int main () {
    PXE7LnJDeC6B ();
    order (OdYsSzR2j0k, Q8GOrDR2EK);
    order (W4dC3k, qANaLt5T);
    jtsTxXU (OdYsSzR2j0k, W4dC3k, Q8GOrDR2EK, qANaLt5T);
    return 0;
}

