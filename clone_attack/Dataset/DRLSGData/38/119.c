double  Xkit3CzOf (int jy4iHB) {
    int a4ZFNjSb;
    double  ob5JFc [jy4iHB];
    double  NCeNTn7PwaS;
    double  MP4vA6;
    MP4vA6 = (962 - 962);
    {
        a4ZFNjSb = 127 - 127;
        while (jy4iHB > a4ZFNjSb) {
            scanf ("%lf", &ob5JFc[a4ZFNjSb]);
            MP4vA6 += ob5JFc[a4ZFNjSb];
            a4ZFNjSb = a4ZFNjSb + 1;
        }
    }
    MP4vA6 /= jy4iHB;
    NCeNTn7PwaS = (666 - 666);
    {
        a4ZFNjSb = (439 - 439);
        while (a4ZFNjSb < jy4iHB) {
            NCeNTn7PwaS = NCeNTn7PwaS +(ob5JFc[a4ZFNjSb] - MP4vA6) * (ob5JFc[a4ZFNjSb] - MP4vA6);
            a4ZFNjSb = a4ZFNjSb + 1;
        }
    }
    return (sqrt (NCeNTn7PwaS / jy4iHB));
}

int main () {
    int jy4iHB;
    int ctbuhA;
    {
        while (ctbuhA > (958 - 958)) {
            scanf ("%d", &jy4iHB);
            printf ("%.5f\n", Xkit3CzOf (jy4iHB));
            ctbuhA = ctbuhA - 1;
        }
    }
    return (518 - 518);
}

