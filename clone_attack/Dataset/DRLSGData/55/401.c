int dg5GmU4 (char jegaC8wz) {
    int QmiKI58MJvUb;
    QmiKI58MJvUb = jegaC8wz - (669 - 621);
    if (QmiKI58MJvUb > (121 - 112))
        QmiKI58MJvUb = jegaC8wz - 'A' + (311 - 301);
    if (QmiKI58MJvUb > (677 - 641))
        QmiKI58MJvUb = jegaC8wz - 'a' + (118 - 108);
    return QmiKI58MJvUb;
}

char f40pCSj (int w2qWUBvof5) {
    char EFDpPb;
    if (w2qWUBvof5 < (832 - 822))
        EFDpPb = w2qWUBvof5 + '0';
    if (w2qWUBvof5 >= (963 - 953))
        EFDpPb = w2qWUBvof5 - (125 - 115) + 'A';
    return EFDpPb;
}

int main () {
    int Qe0CYwFMKrcD, IJFikt, e7Hylq0GsiT3;
    int Sx4W3V97tDg2 = (182 - 181);
    int m [(716 - 216)];
    int wloYIH0pnjdv = (93 - 93);
    long  nn = (99 - 99);
    char mFm90k1rJezg [(643 - 143)];
    int ae0XtN5kOu7P = strlen (mFm90k1rJezg);
    scanf ("%d %s %d", &Qe0CYwFMKrcD, mFm90k1rJezg, &IJFikt);
    {
        e7Hylq0GsiT3 = (1017 - 374) - (1173 - 531);
        while (e7Hylq0GsiT3 >= 0) {
            nn += dg5GmU4 (mFm90k1rJezg[e7Hylq0GsiT3]) * Sx4W3V97tDg2;
            e7Hylq0GsiT3--;
            Sx4W3V97tDg2 = Sx4W3V97tDg2 *(Qe0CYwFMKrcD);
        }
    }
    do {
        m[wloYIH0pnjdv] = nn % IJFikt;
        wloYIH0pnjdv++;
        nn = nn / IJFikt;
    }
    while (nn >= (777 - 776));
    {
        e7Hylq0GsiT3 = wloYIH0pnjdv - 1;
        while (e7Hylq0GsiT3 >= 0) {
            printf ("%c", f40pCSj (m[e7Hylq0GsiT3]));
            e7Hylq0GsiT3--;
        }
    }
}

