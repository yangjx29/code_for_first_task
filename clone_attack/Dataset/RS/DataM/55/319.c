int main () {
    long  b3NIFB [10000];
    long  l [10000];
    long  k = (799 - 799), F8h3Ds, ZCgePDKLR, IyUFakRGhuco, sCNFTu = 0, c;
    unsigned  int hesStNdq04BP [100];
    char qidsckLSRfYh [100];
    getchar ();
    getchar ();
    scanf ("%d %s %d", &F8h3Ds, qidsckLSRfYh, &ZCgePDKLR);
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
    c = strlen (qidsckLSRfYh);
    {
        IyUFakRGhuco = 0;
        while (c - 1 >= IyUFakRGhuco) {
            if ('0' <= qidsckLSRfYh[IyUFakRGhuco] && '9' >= qidsckLSRfYh[IyUFakRGhuco])
                qidsckLSRfYh[IyUFakRGhuco] = qidsckLSRfYh[IyUFakRGhuco] - ('0' - 0);
            if ('Z' >= qidsckLSRfYh[IyUFakRGhuco] && qidsckLSRfYh[IyUFakRGhuco] >= 'A')
                qidsckLSRfYh[IyUFakRGhuco] = qidsckLSRfYh[IyUFakRGhuco] - ('A' - 10);
            if (qidsckLSRfYh[IyUFakRGhuco] >= 'a' && qidsckLSRfYh[IyUFakRGhuco] <= 'z')
                qidsckLSRfYh[IyUFakRGhuco] = qidsckLSRfYh[IyUFakRGhuco] - 'a' + 10;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            sCNFTu = F8h3Ds *sCNFTu + qidsckLSRfYh[IyUFakRGhuco];
            IyUFakRGhuco++;
        };
    }
    if (sCNFTu == 0)
        ;
    {
        IyUFakRGhuco = 0;
        while (sCNFTu > 0) {
            k = k + 1;
            hesStNdq04BP[IyUFakRGhuco] = sCNFTu % ZCgePDKLR;
            sCNFTu = sCNFTu - hesStNdq04BP[IyUFakRGhuco];
            IyUFakRGhuco++;
            sCNFTu = sCNFTu / ZCgePDKLR;
        };
    }
    {
        IyUFakRGhuco = 0;
        while (IyUFakRGhuco <= k - 1) {
            qidsckLSRfYh[IyUFakRGhuco] = hesStNdq04BP[k - 1 - IyUFakRGhuco];
            if (qidsckLSRfYh[IyUFakRGhuco] > 9)
                qidsckLSRfYh[IyUFakRGhuco] = qidsckLSRfYh[IyUFakRGhuco] + 'A' - 10;
            else
                qidsckLSRfYh[IyUFakRGhuco] = qidsckLSRfYh[IyUFakRGhuco] + '0';
            IyUFakRGhuco++;
        };
    }
    qidsckLSRfYh[k] = '\0';
    printf ("%s\n", qidsckLSRfYh);
    getchar ();
    getchar ();
    return 0;
}

