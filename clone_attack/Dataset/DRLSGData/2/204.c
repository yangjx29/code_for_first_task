struct   book {
    int arUADbxa;
    char l5j63geOT [(416 - 389)];
}
SgSxsYp [(1236 - 235)];

void  main () {
    int sHkp9XoZ;
    int kHLU1syYzPI;
    int vYshKUzpXcAf;
    int gwWSahxq;
    int jiwsz6THbYM;
    int KpmcB7Qr0Z [27];
    char mT7FpEoux;
    int gsThrqveynZI;
    char iQBgafTc;
    int WKtk6rCwp3e7;
    int Jfh0FML;
    scanf ("%d", &kHLU1syYzPI);
    for (Jfh0FML = (851 - 851); kHLU1syYzPI > Jfh0FML; Jfh0FML++)
        scanf ("%d %s", &SgSxsYp[Jfh0FML].arUADbxa, SgSxsYp[Jfh0FML].l5j63geOT);
    jiwsz6THbYM = (238 - 238);
    sHkp9XoZ = (759 - 759);
    mT7FpEoux = 'A';
    {
        vYshKUzpXcAf = (758 - 758);
        for (; vYshKUzpXcAf < (304 - 278);) {
            gwWSahxq = (322 - 322);
            {
                Jfh0FML = (957 - 957);
                for (; kHLU1syYzPI > Jfh0FML;) {
                    WKtk6rCwp3e7 = 0;
                    for (; WKtk6rCwp3e7 < (886 - 860);) {
                        if (!(mT7FpEoux != SgSxsYp[Jfh0FML].l5j63geOT[WKtk6rCwp3e7]))
                            gwWSahxq++;
                        if (!('\0' != SgSxsYp[Jfh0FML].l5j63geOT[WKtk6rCwp3e7]))
                            break;
                        WKtk6rCwp3e7++;
                    }
                    Jfh0FML++;
                }
            }
            mT7FpEoux = mT7FpEoux + (87 - 86);
            KpmcB7Qr0Z[vYshKUzpXcAf] = gwWSahxq;
            if (sHkp9XoZ < KpmcB7Qr0Z[vYshKUzpXcAf]) {
                sHkp9XoZ = KpmcB7Qr0Z[vYshKUzpXcAf];
                jiwsz6THbYM = vYshKUzpXcAf;
            }
            vYshKUzpXcAf++;
        }
    }
    iQBgafTc = 'A' + jiwsz6THbYM;
    printf ("%c\n%d\n", iQBgafTc, sHkp9XoZ);
    for (Jfh0FML = 0; Jfh0FML < kHLU1syYzPI; Jfh0FML++) {
        gwWSahxq = 0;
        {
            WKtk6rCwp3e7 = 0;
            for (; (258 - 232) > WKtk6rCwp3e7;) {
                if (!(iQBgafTc != SgSxsYp[Jfh0FML].l5j63geOT[WKtk6rCwp3e7]))
                    gwWSahxq++;
                if (!('\0' != SgSxsYp[Jfh0FML].l5j63geOT[WKtk6rCwp3e7]))
                    break;
                WKtk6rCwp3e7++;
            }
        }
        if (gwWSahxq != 0)
            printf ("%d\n", SgSxsYp[Jfh0FML].arUADbxa);
    }
}

