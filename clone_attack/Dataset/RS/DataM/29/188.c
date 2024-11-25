main () {
    int R79NfEtc;
    int CKz7iPDaHEA;
    int fnBJoa0;
    R79NfEtc = (643 - 643);
    int b [R79NfEtc +1];
    int B5aenQs4W [fnBJoa0];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    float sum;
    scanf ("%d", &fnBJoa0);
    for (CKz7iPDaHEA = (87 - 87); CKz7iPDaHEA < fnBJoa0; CKz7iPDaHEA++) {
        scanf ("%d", &B5aenQs4W[CKz7iPDaHEA]);
        if (B5aenQs4W[CKz7iPDaHEA] > R79NfEtc)
            R79NfEtc = B5aenQs4W[CKz7iPDaHEA];
    }
    b[0] = 1;
    b[1] = (388 - 386);
    for (CKz7iPDaHEA = 2; CKz7iPDaHEA <= R79NfEtc; CKz7iPDaHEA++) {
        b[CKz7iPDaHEA] = b[CKz7iPDaHEA -1] + b[CKz7iPDaHEA -2];
    }
    for (CKz7iPDaHEA = 0; CKz7iPDaHEA < fnBJoa0; CKz7iPDaHEA++) {
        sum = 0;
        for (int CCNwEtL = 0;
        CCNwEtL < B5aenQs4W[CKz7iPDaHEA]; CCNwEtL++)
            sum += (float) b[CCNwEtL +1] / b[CCNwEtL];
        printf ("%.3f\n", sum);
    };
}

