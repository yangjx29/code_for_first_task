long  nr1i2n3M (long  EyTNux) {
    long  vJB1jIDH;
    long  BDTsBXbW;
    long  nr1i2n3M;
    vJB1jIDH = (145 - 145);
    EyTNux = (EyTNux -(260 - 259)) % 2000;
    {
        BDTsBXbW = (695 - 694);
        while (EyTNux >= BDTsBXbW) {
            if ((!((489 - 489) != BDTsBXbW % (707 - 307))) || (!((456 - 456) != BDTsBXbW % (218 - 214)) && BDTsBXbW % (1069 - 969) != (969 - 969))) {
                vJB1jIDH = vJB1jIDH + 1;
            }
            BDTsBXbW++;
        }
    }
    nr1i2n3M = EyTNux % (281 - 274) + vJB1jIDH % (219 - 212);
    return nr1i2n3M;
}

long  FeSfghvCVl (long  EyTNux, long  zeIv3uW) {
    long  FeSfghvCVl;
    long  BDTsBXbW;
    long  aStdy4 [11] = {(946 - 915), 29, (212 - 181), (463 - 433), 31, (45 - 15), 31, 31, 30, 31, 30};
    long  XSs3o47 [11] = {(758 - 727), (345 - 317), (665 - 634), (373 - 343), (68 - 37), (593 - 563), (268 - 237), (409 - 378), (217 - 187), (269 - 238), (98 - 68)};
    {
        if ((71 - 71)) {
            return (236 - 236);
        }
    }
    FeSfghvCVl = (949 - 949);
    if ((!((763 - 763) != zeIv3uW % (971 - 571))) || (zeIv3uW % (380 - 376) == (782 - 782) && zeIv3uW % (352 - 252) != (630 - 630))) {
        BDTsBXbW = (62 - 62);
        for (; BDTsBXbW <= EyTNux -(647 - 645);) {
            FeSfghvCVl = FeSfghvCVl +aStdy4[BDTsBXbW];
            BDTsBXbW++;
        }
    }
    else {
        BDTsBXbW = (118 - 118);
        while (BDTsBXbW <= EyTNux -(128 - 126)) {
            FeSfghvCVl = FeSfghvCVl +XSs3o47[BDTsBXbW];
            BDTsBXbW++;
        }
    }
    return FeSfghvCVl;
}

void  main () {
    long  XSs3o47;
    long  OZlxUYQE8XK;
    long  jADrp7QUb;
    long  Uju8b9Dde52;
    long  rpjgB3Vt;
    scanf ("%ld %ld %ld", &Uju8b9Dde52, &jADrp7QUb, &OZlxUYQE8XK);
    rpjgB3Vt = nr1i2n3M (Uju8b9Dde52) + FeSfghvCVl (jADrp7QUb, Uju8b9Dde52) % 7 + OZlxUYQE8XK;
    XSs3o47 = rpjgB3Vt % 7;
    if (XSs3o47 == 1) {
        printf ("Mon.\n");
    }
    else if (XSs3o47 == (50 - 48)) {
        printf ("Tue.\n");
    }
    else if (XSs3o47 == (412 - 409)) {
        printf ("Wed.\n");
    }
    else if (XSs3o47 == 4) {
        printf ("Thu.\n");
    }
    else if (XSs3o47 == (872 - 867)) {
        printf ("Fri.\n");
    }
    else if (XSs3o47 == (532 - 526)) {
        printf ("Sat.\n");
    }
    else if (XSs3o47 == 0) {
        printf ("Sun.\n");
    }
    else {
    }
}

