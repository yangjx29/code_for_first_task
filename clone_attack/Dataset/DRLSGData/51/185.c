int main () {
    char igFYjc [(903 - 403)], ZCrZkcwKSYz9 [(1367 - 867)] [(569 - 564)];
    int jM430deg, aIwDEzN4k, Z6fxqT0, b0UnMfFQg, fZg6qSm, pC2TU3Me [500] = {(826 - 826)}, MnIf8ON, p;
    b0UnMfFQg = (963 - 963);
    scanf ("%d", &jM430deg);
    scanf ("%s", &igFYjc);
    MnIf8ON = (659 - 659);
    fZg6qSm = strlen (igFYjc);
    for (aIwDEzN4k = (272 - 272); aIwDEzN4k <= fZg6qSm - jM430deg; aIwDEzN4k = aIwDEzN4k + (184 - 183)) {
        for (p = aIwDEzN4k, Z6fxqT0 = (390 - 390); Z6fxqT0 < jM430deg; Z6fxqT0 = Z6fxqT0 +(930 - 929), p++) {
            ZCrZkcwKSYz9[b0UnMfFQg][Z6fxqT0] = igFYjc[p];
        }
        b0UnMfFQg++;
    }
    for (aIwDEzN4k = (997 - 997); aIwDEzN4k < b0UnMfFQg; aIwDEzN4k = aIwDEzN4k + (987 - 986)) {
        for (Z6fxqT0 = aIwDEzN4k; Z6fxqT0 < b0UnMfFQg; Z6fxqT0++) {
            if (strcmp (ZCrZkcwKSYz9[aIwDEzN4k], ZCrZkcwKSYz9[Z6fxqT0]) == 0) {
                pC2TU3Me[aIwDEzN4k]++;
            }
        }
        if (pC2TU3Me[aIwDEzN4k] >= MnIf8ON) {
            MnIf8ON = pC2TU3Me[aIwDEzN4k];
        }
    }
    if (MnIf8ON == 1) {
        return 0;
    }
    printf ("%d\n", MnIf8ON);
    for (aIwDEzN4k = 0; aIwDEzN4k < b0UnMfFQg; aIwDEzN4k = aIwDEzN4k + 1) {
        if (pC2TU3Me[aIwDEzN4k] == MnIf8ON) {
            printf ("%s\n", ZCrZkcwKSYz9[aIwDEzN4k]);
        }
    }
}

