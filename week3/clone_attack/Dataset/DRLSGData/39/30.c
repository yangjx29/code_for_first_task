int main () {
    int VPKvfzqc0TWp;
    int aNhpbFis;
    struct   student {
        char BifwtSo6uZ [20];
        int aNaltQ6Jvi;
        int JMkGnm;
        char wY2XR7;
        char yqeYJ2QOC;
        int yEc8gTVKZ93l;
    }
    kwRX6k [100];
    int PHn3vrjRM;
    int PEOm0CWj;
    int uj8zNA9 [100];
    PHn3vrjRM = (904 - 904);
    PEOm0CWj = (401 - 401);
    scanf ("%d\n", &aNhpbFis);
    for (VPKvfzqc0TWp = 0; VPKvfzqc0TWp < aNhpbFis; VPKvfzqc0TWp++)
        scanf ("%s %d %d %c %c %d\n", &kwRX6k[VPKvfzqc0TWp].BifwtSo6uZ, &kwRX6k[VPKvfzqc0TWp].aNaltQ6Jvi, &kwRX6k[VPKvfzqc0TWp].JMkGnm, &kwRX6k[VPKvfzqc0TWp].wY2XR7, &kwRX6k[VPKvfzqc0TWp].yqeYJ2QOC, &kwRX6k[VPKvfzqc0TWp].yEc8gTVKZ93l);
    for (VPKvfzqc0TWp = 0; VPKvfzqc0TWp < aNhpbFis; VPKvfzqc0TWp++) {
        if (kwRX6k[VPKvfzqc0TWp].aNaltQ6Jvi > 80 && kwRX6k[VPKvfzqc0TWp].yEc8gTVKZ93l >= 1)
            uj8zNA9[VPKvfzqc0TWp] = uj8zNA9[VPKvfzqc0TWp] + 8000;
        if ((869 - 784) < kwRX6k[VPKvfzqc0TWp].aNaltQ6Jvi && 80 < kwRX6k[VPKvfzqc0TWp].JMkGnm)
            uj8zNA9[VPKvfzqc0TWp] = uj8zNA9[VPKvfzqc0TWp] + 4000;
        if (kwRX6k[VPKvfzqc0TWp].aNaltQ6Jvi > 90)
            uj8zNA9[VPKvfzqc0TWp] = uj8zNA9[VPKvfzqc0TWp] + 2000;
        if (85 < kwRX6k[VPKvfzqc0TWp].aNaltQ6Jvi && kwRX6k[VPKvfzqc0TWp].yqeYJ2QOC == 'Y')
            uj8zNA9[VPKvfzqc0TWp] = uj8zNA9[VPKvfzqc0TWp] + 1000;
        if (kwRX6k[VPKvfzqc0TWp].JMkGnm > 80 && kwRX6k[VPKvfzqc0TWp].wY2XR7 == 'Y')
            uj8zNA9[VPKvfzqc0TWp] = uj8zNA9[VPKvfzqc0TWp] + 850;
        PEOm0CWj = PEOm0CWj +uj8zNA9[VPKvfzqc0TWp];
    }
    for (VPKvfzqc0TWp = 1; VPKvfzqc0TWp < aNhpbFis; VPKvfzqc0TWp++)
        if (uj8zNA9[VPKvfzqc0TWp] > uj8zNA9[PHn3vrjRM])
            PHn3vrjRM = VPKvfzqc0TWp;
    printf ("%s\n", kwRX6k[PHn3vrjRM].BifwtSo6uZ);
    printf ("%d\n", uj8zNA9[PHn3vrjRM]);
    printf ("%d\n", PEOm0CWj);
    return 0;
}

