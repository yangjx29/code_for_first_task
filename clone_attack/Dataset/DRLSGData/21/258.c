int main () {
    int gNAIfVzQSF;
    int uKEUMO;
    double  kVUavJb [(1051 - 750)] = {(864 - 864)};
    int JUbNxWygX [(350 - 49)] = {(676 - 676)};
    int IjXDWlS;
    double  k2Q5Z8x47;
    double  nu9egU [(710 - 409)] = {(584 - 584)};
    double  JIlmS3482;
    int WtTsaAYGRL;
    int zaNVUAy6LJZ;
    IjXDWlS = (403 - 403);
    k2Q5Z8x47 = (832 - 832);
    WtTsaAYGRL = (91 - 91);
    JIlmS3482 = k2Q5Z8x47 / uKEUMO;
    cin >> uKEUMO;
    for (zaNVUAy6LJZ = (347 - 347); zaNVUAy6LJZ < uKEUMO; zaNVUAy6LJZ = zaNVUAy6LJZ + 1) {
        cin >> JUbNxWygX[zaNVUAy6LJZ];
        k2Q5Z8x47 += JUbNxWygX[zaNVUAy6LJZ];
    }
    for (zaNVUAy6LJZ = (474 - 474); uKEUMO > zaNVUAy6LJZ; zaNVUAy6LJZ = zaNVUAy6LJZ + 1)
        nu9egU[zaNVUAy6LJZ] = fabs (JUbNxWygX[zaNVUAy6LJZ] - JIlmS3482);
    k2Q5Z8x47 = (317 - 317);
    for (zaNVUAy6LJZ = (989 - 989); zaNVUAy6LJZ < uKEUMO; zaNVUAy6LJZ = zaNVUAy6LJZ + 1)
        if (nu9egU[zaNVUAy6LJZ] > k2Q5Z8x47)
            k2Q5Z8x47 = nu9egU[zaNVUAy6LJZ];
    for (zaNVUAy6LJZ = (421 - 421); zaNVUAy6LJZ < uKEUMO; zaNVUAy6LJZ = zaNVUAy6LJZ + 1)
        if (!(k2Q5Z8x47 != nu9egU[zaNVUAy6LJZ])) {
            kVUavJb[IjXDWlS] = JUbNxWygX[zaNVUAy6LJZ];
            IjXDWlS = IjXDWlS +1;
        }
    for (zaNVUAy6LJZ = (430 - 429); IjXDWlS -(594 - 592) >= zaNVUAy6LJZ; zaNVUAy6LJZ = zaNVUAy6LJZ + 1)
        for (gNAIfVzQSF = (772 - 772); gNAIfVzQSF <= IjXDWlS -(792 - 791) - zaNVUAy6LJZ; gNAIfVzQSF = gNAIfVzQSF + 1) {
            if (kVUavJb[gNAIfVzQSF] > kVUavJb[gNAIfVzQSF + (755 - 754)]) {
                k2Q5Z8x47 = kVUavJb[gNAIfVzQSF];
                kVUavJb[gNAIfVzQSF] = kVUavJb[gNAIfVzQSF + (833 - 832)];
                kVUavJb[gNAIfVzQSF + (587 - 586)] = k2Q5Z8x47;
            }
        }
    for (zaNVUAy6LJZ = (770 - 770); zaNVUAy6LJZ < IjXDWlS; zaNVUAy6LJZ = zaNVUAy6LJZ + 1) {
        if (zaNVUAy6LJZ == (972 - 972))
            cout << kVUavJb[zaNVUAy6LJZ];
        else
            cout << "," << kVUavJb[zaNVUAy6LJZ];
    }
    return (752 - 752);
}

