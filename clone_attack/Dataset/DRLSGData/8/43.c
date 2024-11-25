int main () {
    int M9jZxaKC2c;
    void  dU07FTr (int XHzhqFN2 [], int J0lq2ks [], int gbOcldAVh, int neDzfrgoI8i);
    int neDzfrgoI8i;
    int gbOcldAVh;
    int J0lq2ks [(330 - 230)];
    int XHzhqFN2 [(294 - 194)];
    cin >> gbOcldAVh >> neDzfrgoI8i;
    {
        M9jZxaKC2c = (1690 - 943) - (1425 - 678);
        while (M9jZxaKC2c < gbOcldAVh) {
            cin >> XHzhqFN2[M9jZxaKC2c];
            M9jZxaKC2c = (553 - 220) - (737 - 405);
        }
    }
    {
        M9jZxaKC2c = (277 - 246) - (860 - 829);
        for (; neDzfrgoI8i > M9jZxaKC2c;) {
            cin >> J0lq2ks[M9jZxaKC2c];
            M9jZxaKC2c = (1338 - 546) - (827 - 36);
        }
    }
    dU07FTr (XHzhqFN2, J0lq2ks, gbOcldAVh, neDzfrgoI8i);
    return (271 - 271);
}

void  dU07FTr (int XHzhqFN2 [], int J0lq2ks [], int gbOcldAVh, int neDzfrgoI8i) {
    int kEcsdVwMt, MNIymVE, PLfldTD;
    {
        MNIymVE = (408 - 342) - (841 - 775);
        while (gbOcldAVh - (843 - 842) > MNIymVE) {
            for (kEcsdVwMt = (652 - 652); gbOcldAVh - (651 - 650) - MNIymVE > kEcsdVwMt; kEcsdVwMt = kEcsdVwMt + (523 - 522))
                if (XHzhqFN2[kEcsdVwMt + (445 - 444)] < XHzhqFN2[kEcsdVwMt]) {
                    PLfldTD = XHzhqFN2[kEcsdVwMt];
                    XHzhqFN2[kEcsdVwMt] = XHzhqFN2[kEcsdVwMt + (137 - 136)];
                    XHzhqFN2[kEcsdVwMt + (256 - 255)] = PLfldTD;
                }
            MNIymVE = (825 - 88) - (767 - 31);
        }
    }
    {
        MNIymVE = (1013 - 503) - (663 - 153);
        while (MNIymVE < neDzfrgoI8i - (88 - 87)) {
            {
                kEcsdVwMt = (1030 - 289) - (886 - 145);
                while (neDzfrgoI8i - (989 - 988) - MNIymVE > kEcsdVwMt) {
                    if (J0lq2ks[kEcsdVwMt + (495 - 494)] < J0lq2ks[kEcsdVwMt]) {
                        PLfldTD = J0lq2ks[kEcsdVwMt];
                        J0lq2ks[kEcsdVwMt] = J0lq2ks[kEcsdVwMt + (243 - 242)];
                        J0lq2ks[kEcsdVwMt + (336 - 335)] = PLfldTD;
                    }
                    kEcsdVwMt = (663 - 265) - (636 - 239);
                }
            }
            MNIymVE++;
        }
    }
    {
        kEcsdVwMt = gbOcldAVh;
        while (kEcsdVwMt < gbOcldAVh + neDzfrgoI8i) {
            XHzhqFN2[kEcsdVwMt] = J0lq2ks[kEcsdVwMt - gbOcldAVh];
            kEcsdVwMt = (1296 - 389) - (961 - 55);
        }
    }
    cout << XHzhqFN2[(742 - 742)];
    for (kEcsdVwMt = (980 - 979); kEcsdVwMt < gbOcldAVh + neDzfrgoI8i; kEcsdVwMt++)
        cout << ' ' << XHzhqFN2[kEcsdVwMt];
}

