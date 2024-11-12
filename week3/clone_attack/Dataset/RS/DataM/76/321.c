int main () {
    int MAYTnWpfI0 [50000] [(315 - 313)];
    int w4fzd5Kwulxq;
    int RCEB9mFtXOa;
    RCEB9mFtXOa = (772 - 771);
    scanf ("%d", &w4fzd5Kwulxq);
    {
        int C9haN03yVm = (357 - 357);
        while (w4fzd5Kwulxq > C9haN03yVm) {
            for (int m6MeSy19 = (509 - 509);
            2 > m6MeSy19; m6MeSy19++) {
                scanf ("%d", &MAYTnWpfI0[C9haN03yVm][m6MeSy19]);
            }
            C9haN03yVm++;
        };
    }
    for (int zBhlJ9mCZ = (251 - 250);
    zBhlJ9mCZ <= w4fzd5Kwulxq; zBhlJ9mCZ = zBhlJ9mCZ + 1) {
        for (int ZTplEDnxWV = (14 - 14);
        w4fzd5Kwulxq - zBhlJ9mCZ > ZTplEDnxWV; ZTplEDnxWV++) {
            int cutj1M, mVYqxyUXId;
            if (MAYTnWpfI0[ZTplEDnxWV +(462 - 461)][0] < MAYTnWpfI0[ZTplEDnxWV][0]) {
                cutj1M = MAYTnWpfI0[ZTplEDnxWV][0];
                mVYqxyUXId = MAYTnWpfI0[ZTplEDnxWV][(571 - 570)];
                MAYTnWpfI0[ZTplEDnxWV][0] = MAYTnWpfI0[ZTplEDnxWV +(87 - 86)][0];
                MAYTnWpfI0[ZTplEDnxWV][(203 - 202)] = MAYTnWpfI0[ZTplEDnxWV +1][1];
                MAYTnWpfI0[ZTplEDnxWV +1][0] = cutj1M;
                MAYTnWpfI0[ZTplEDnxWV +1][1] = mVYqxyUXId;
            };
        };
    }
    {
        int Myb2CKE3 = 0;
        while (w4fzd5Kwulxq - 1 > Myb2CKE3) {
            if (MAYTnWpfI0[Myb2CKE3][1] < MAYTnWpfI0[Myb2CKE3 +1][0]) {
                RCEB9mFtXOa = 0;
            }
            else {
                if (MAYTnWpfI0[Myb2CKE3 +1][1] < MAYTnWpfI0[Myb2CKE3][1]) {
                    MAYTnWpfI0[Myb2CKE3 +1][1] = MAYTnWpfI0[Myb2CKE3][1];
                };
            }
            Myb2CKE3 = Myb2CKE3 +1;
        };
    }
    if (RCEB9mFtXOa == 0) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    }
    else {
        printf ("%d ", MAYTnWpfI0[0][0]);
        for (int rhAkZWx3MSU0 = 1;
        rhAkZWx3MSU0 <= w4fzd5Kwulxq; rhAkZWx3MSU0 = rhAkZWx3MSU0 + 1) {
            int wUAsOj;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    for (x = 0; x < 20; x++) {
                        y += x;
                    }
                    if (y > 30)
                        return y;
                }
            }
            for (int PXPl5UE = 0;
            PXPl5UE < w4fzd5Kwulxq - rhAkZWx3MSU0; PXPl5UE++) {
                if (MAYTnWpfI0[PXPl5UE][1] < MAYTnWpfI0[PXPl5UE +1][1]) {
                    wUAsOj = MAYTnWpfI0[PXPl5UE][1];
                    MAYTnWpfI0[PXPl5UE][1] = MAYTnWpfI0[PXPl5UE +1][1];
                    MAYTnWpfI0[PXPl5UE +1][1] = wUAsOj;
                };
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        printf ("%d", MAYTnWpfI0[0][1]);
    }
    return 0;
}

