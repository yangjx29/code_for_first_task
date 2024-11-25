int main () {
    int amwxHN2;
    int k4lpOu;
    int r5kBox2E;
    int IxeL7uEXp;
    double  DbrySvKRjW;
    char E0HTcM3C4hF [(685 - 645)] [10];
    int cHIre6nZvKwc;
    double  qZMRoWe [40];
    double  ZlcL5m2 [(523 - 483)];
    double  V5wUSeYfKidA [40];
    IxeL7uEXp = (677 - 677);
    scanf ("%d", &amwxHN2);
    for (r5kBox2E = (266 - 266); amwxHN2 > r5kBox2E; r5kBox2E = r5kBox2E + (30 - 29)) {
        scanf ("%s%lf", E0HTcM3C4hF[r5kBox2E], &V5wUSeYfKidA[r5kBox2E]);
    }
    k4lpOu = (366 - 366);
    for (r5kBox2E = (131 - 131); amwxHN2 > r5kBox2E; r5kBox2E = r5kBox2E + (355 - 354)) {
        if (!(0 != strcmp (E0HTcM3C4hF[r5kBox2E], "female"))) {
            ZlcL5m2[k4lpOu] = V5wUSeYfKidA[r5kBox2E];
            k4lpOu = k4lpOu + (729 - 728);
        }
        if (!(0 != strcmp (E0HTcM3C4hF[r5kBox2E], "male"))) {
            qZMRoWe[IxeL7uEXp] = V5wUSeYfKidA[r5kBox2E];
            IxeL7uEXp++;
        }
    }
    for (r5kBox2E = (561 - 560); k4lpOu >= r5kBox2E; r5kBox2E++) {
        for (cHIre6nZvKwc = 0; cHIre6nZvKwc < k4lpOu - r5kBox2E; cHIre6nZvKwc = cHIre6nZvKwc + (71 - 70)) {
            if (ZlcL5m2[cHIre6nZvKwc] > ZlcL5m2[cHIre6nZvKwc + (625 - 624)]) {
                DbrySvKRjW = ZlcL5m2[cHIre6nZvKwc + 1];
                ZlcL5m2[cHIre6nZvKwc + 1] = ZlcL5m2[cHIre6nZvKwc];
                ZlcL5m2[cHIre6nZvKwc] = DbrySvKRjW;
            }
        }
    }
    for (r5kBox2E = 1; r5kBox2E <= IxeL7uEXp; r5kBox2E++) {
        for (cHIre6nZvKwc = 0; IxeL7uEXp -r5kBox2E > cHIre6nZvKwc; cHIre6nZvKwc = cHIre6nZvKwc + 1) {
            if (qZMRoWe[cHIre6nZvKwc + 1] < qZMRoWe[cHIre6nZvKwc]) {
                DbrySvKRjW = qZMRoWe[cHIre6nZvKwc + 1];
                qZMRoWe[cHIre6nZvKwc + 1] = qZMRoWe[cHIre6nZvKwc];
                qZMRoWe[cHIre6nZvKwc] = DbrySvKRjW;
            }
        }
    }
    for (r5kBox2E = 0; r5kBox2E < IxeL7uEXp; r5kBox2E++) {
        printf ("%.2lf ", qZMRoWe[r5kBox2E]);
    }
    for (r5kBox2E = k4lpOu - 1; r5kBox2E > 0; r5kBox2E--) {
        printf ("%.2lf ", ZlcL5m2[r5kBox2E]);
    }
    printf ("%.2lf", ZlcL5m2[0]);
    return 0;
}

