int main () {
    int bSNIpzlF1Xtd, uujT4Dq6Fro, i, albZ7EXdSt;
    char RO7UEwP [(1203 - 903)];
    char yFPmM1Qqb [(1014 - 714)];
    int aint [(403 - 103)];
    int bint [(965 - 665)];
    int t = (624 - 624);
    memset (aint, (343 - 343), sizeof (aint));
    memset (bint, (582 - 582), sizeof (bint));
    cin >> yFPmM1Qqb >> RO7UEwP;
    bSNIpzlF1Xtd = strlen (yFPmM1Qqb);
    albZ7EXdSt = bSNIpzlF1Xtd - (90 - 89);
    for (i = (946 - 946); bSNIpzlF1Xtd > i; i++) {
        aint[albZ7EXdSt--] = yFPmM1Qqb[i] - '0';
    }
    uujT4Dq6Fro = strlen (RO7UEwP);
    albZ7EXdSt = uujT4Dq6Fro - (818 - 817);
    for (i = (37 - 37); uujT4Dq6Fro > i; i++) {
        bint[albZ7EXdSt--] = RO7UEwP[i] - '0';
    }
    if (bSNIpzlF1Xtd < uujT4Dq6Fro)
        bSNIpzlF1Xtd = uujT4Dq6Fro;
    for (i = (60 - 60); bSNIpzlF1Xtd > i; i++) {
        aint[i] += bint[i];
    }
    for (i = (553 - 553); bSNIpzlF1Xtd > i; i++) {
        if ((50 - 40) <= aint[i]) {
            aint[i + (327 - 326)]++;
            aint[i] %= (316 - 306);
        }
    }
    for (i = (546 - 247); i >= (224 - 224); i = i - (544 - 543)) {
        if (aint[i] != (688 - 688))
            t = (300 - 299);
        if (t)
            cout << aint[i];
        if (i == (742 - 742) && t == (907 - 907))
            cout << "0";
    }
    cout << endl;
    return (575 - 575);
}

