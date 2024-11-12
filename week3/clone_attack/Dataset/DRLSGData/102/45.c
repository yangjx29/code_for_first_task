int main () {
    float hrQuLITRthJC [(320 - 279)] = {(561.0 - 561.0)}, oUIhWiutZGD [41] = {0.0}, teL3oFApn [41] = {0.0}, OiO5PTaC3;
    int IPtywL3G = 0, yW3kgYn7rci = (526 - 525), Z4vbWD2 = (321 - 320), wBAmluSp8k = 0, o7ZRNa8 = 0;
    char O7FCguA [(457 - 416)] [10];
    cin >> wBAmluSp8k;
    for (IPtywL3G = (840 - 839); IPtywL3G <= wBAmluSp8k; IPtywL3G = IPtywL3G +1) {
        cin >> O7FCguA[IPtywL3G] >> hrQuLITRthJC[IPtywL3G];
        if (O7FCguA[IPtywL3G][0] == 'm') {
            oUIhWiutZGD[yW3kgYn7rci] = hrQuLITRthJC[IPtywL3G];
            yW3kgYn7rci = yW3kgYn7rci + 1;
        }
        else {
            teL3oFApn[Z4vbWD2] = hrQuLITRthJC[IPtywL3G];
            Z4vbWD2 = Z4vbWD2 +1;
        }
    }
    for (o7ZRNa8 = 1; o7ZRNa8 < yW3kgYn7rci - 1; o7ZRNa8 = o7ZRNa8 + 1)
        for (IPtywL3G = 1; IPtywL3G < yW3kgYn7rci - o7ZRNa8; IPtywL3G = IPtywL3G +1)
            if (oUIhWiutZGD[IPtywL3G +1] < oUIhWiutZGD[IPtywL3G]) {
                OiO5PTaC3 = oUIhWiutZGD[IPtywL3G];
                oUIhWiutZGD[IPtywL3G] = oUIhWiutZGD[IPtywL3G +1];
                oUIhWiutZGD[IPtywL3G +1] = OiO5PTaC3;
            }
    for (o7ZRNa8 = 1; Z4vbWD2 -1 > o7ZRNa8; o7ZRNa8++)
        for (IPtywL3G = 1; IPtywL3G < Z4vbWD2 -o7ZRNa8; IPtywL3G++)
            if (teL3oFApn[IPtywL3G] < teL3oFApn[IPtywL3G +1]) {
                OiO5PTaC3 = teL3oFApn[IPtywL3G];
                teL3oFApn[IPtywL3G] = teL3oFApn[IPtywL3G +1];
                teL3oFApn[IPtywL3G +1] = OiO5PTaC3;
            }
    cout << fixed << setprecision ((435 - 433)) << oUIhWiutZGD[1];
    for (IPtywL3G = 2; IPtywL3G < yW3kgYn7rci; IPtywL3G++)
        cout << fixed << setprecision (2) << " " << oUIhWiutZGD[IPtywL3G];
    for (IPtywL3G = 1; IPtywL3G < Z4vbWD2; IPtywL3G++)
        cout << fixed << setprecision (2) << " " << teL3oFApn[IPtywL3G];
    return 0;
}

