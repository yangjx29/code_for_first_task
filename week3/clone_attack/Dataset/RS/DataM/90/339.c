void  main () {
    int ZphFrVR (int QpgculHX, int xprHdNfZ);
    int OoQyiKDmB8d, QpgculHX, xprHdNfZ, qEvqtWPV;
    scanf ("%d", &OoQyiKDmB8d);
    {
        qEvqtWPV = 0;
        while (OoQyiKDmB8d > qEvqtWPV) {
            qEvqtWPV++;
            scanf ("%d %d", &QpgculHX, &xprHdNfZ);
            printf ("%d\n", ZphFrVR (QpgculHX, xprHdNfZ));
        };
    };
}

int ZphFrVR (int QpgculHX, int xprHdNfZ) {
    int Hizj3RMB, G4zSgpOUJi, HC98uW;
    if (!(1 != QpgculHX) || !(1 != xprHdNfZ) || QpgculHX == 0)
        HC98uW = 1;
    else if (QpgculHX < xprHdNfZ)
        HC98uW = ZphFrVR (QpgculHX, QpgculHX);
    else {
        Hizj3RMB = ZphFrVR (QpgculHX, xprHdNfZ - 1);
        G4zSgpOUJi = ZphFrVR (QpgculHX -xprHdNfZ, xprHdNfZ);
        HC98uW = Hizj3RMB +G4zSgpOUJi;
    }
    return (HC98uW);
}

