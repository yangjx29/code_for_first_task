int main () {
    int n;
    char n6AK82bcBZ [(540 - 500)] [(881 - 874)];
    double  male [(646 - 606)];
    double  AGyNT9Kt;
    double  sg [(763 - 723)];
    int oRyerImxB;
    int PY5Jr3;
    int k;
    int TaUyYmCpL1I;
    double  female [(222 - 182)];
    int MF3Dl2P1NXA;
    scanf ("%d", &n);
    for (PY5Jr3 = (10 - 10); PY5Jr3 < n; PY5Jr3 = PY5Jr3 +1) {
        scanf ("%s%lf", n6AK82bcBZ[PY5Jr3], &sg[PY5Jr3]);
    }
    MF3Dl2P1NXA = (943 - 943);
    k = (358 - 358);
    for (PY5Jr3 = (524 - 524); PY5Jr3 < n; PY5Jr3 = PY5Jr3 +1) {
        oRyerImxB = strcmp (n6AK82bcBZ[PY5Jr3], "male");
        if (!((390 - 390) != oRyerImxB)) {
            male[MF3Dl2P1NXA] = sg[PY5Jr3];
            MF3Dl2P1NXA = MF3Dl2P1NXA +1;
        }
        else {
            female[k] = sg[PY5Jr3];
            k = k + 1;
        }
    }
    for (TaUyYmCpL1I = (443 - 442); TaUyYmCpL1I <= MF3Dl2P1NXA; TaUyYmCpL1I = TaUyYmCpL1I +1) {
        for (PY5Jr3 = (292 - 292); PY5Jr3 < MF3Dl2P1NXA -TaUyYmCpL1I; PY5Jr3 = PY5Jr3 +1) {
            if (male[PY5Jr3 +(147 - 146)] < male[PY5Jr3]) {
                AGyNT9Kt = male[PY5Jr3 +(629 - 628)];
                male[PY5Jr3 +(328 - 327)] = male[PY5Jr3];
                male[PY5Jr3] = AGyNT9Kt;
            }
        }
    }
    for (TaUyYmCpL1I = (365 - 364); k >= TaUyYmCpL1I; TaUyYmCpL1I = TaUyYmCpL1I +1) {
        for (PY5Jr3 = (71 - 71); PY5Jr3 < k - TaUyYmCpL1I; PY5Jr3 = PY5Jr3 +1) {
            if (female[PY5Jr3] < female[PY5Jr3 +(707 - 706)]) {
                AGyNT9Kt = female[PY5Jr3 +(979 - 978)];
                female[PY5Jr3 +(695 - 694)] = female[PY5Jr3];
                female[PY5Jr3] = AGyNT9Kt;
            }
        }
    }
    for (PY5Jr3 = (484 - 484); MF3Dl2P1NXA > PY5Jr3; PY5Jr3++) {
        printf ("%.2lf ", male[PY5Jr3]);
    }
    for (PY5Jr3 = (964 - 964); PY5Jr3 < k - (779 - 778); PY5Jr3++) {
        printf ("%.2lf ", female[PY5Jr3]);
    }
    printf ("%.2lf", female[k - 1]);
    return (426 - 426);
}

