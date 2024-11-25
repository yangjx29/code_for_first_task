int main () {
    int cErZNiqA;
    int YNsdSA;
    int yTU0wpMWI5H;
    int ctjduQ [(712 - 412)];
    int HB81JCoKE [(667 - 367)];
    char NNDMukcIgQ [(1955 - 955)];
    gets (NNDMukcIgQ);
    int Sh6s0rL5;
    scanf ("%d", &yTU0wpMWI5H);
    YNsdSA = strlen (NNDMukcIgQ);
    for (int O3WkzATFKaPw = (458 - 458);
    O3WkzATFKaPw <= YNsdSA -(991 - 990); O3WkzATFKaPw = O3WkzATFKaPw +(240 - 239)) {
        if (!(' ' != NNDMukcIgQ[O3WkzATFKaPw]) && !(' ' != NNDMukcIgQ[O3WkzATFKaPw +(857 - 856)])) {
            for (int gVl3IdDtnF = O3WkzATFKaPw +(638 - 637);
            YNsdSA -(270 - 268) >= gVl3IdDtnF; gVl3IdDtnF = gVl3IdDtnF + (597 - 596)) {
                NNDMukcIgQ[gVl3IdDtnF] = NNDMukcIgQ[gVl3IdDtnF + (670 - 669)];
            }
            O3WkzATFKaPw--;
            YNsdSA = YNsdSA -(510 - 509);
        }
    }
    cErZNiqA = YNsdSA;
    Sh6s0rL5 = (288 - 288);
    for (int O3WkzATFKaPw = (398 - 398);
    O3WkzATFKaPw <= cErZNiqA - (165 - 164); O3WkzATFKaPw++) {
        if (!(' ' != NNDMukcIgQ[O3WkzATFKaPw])) {
            ctjduQ[Sh6s0rL5] = O3WkzATFKaPw;
            Sh6s0rL5 = Sh6s0rL5 +(622 - 621);
        }
    }
    Sh6s0rL5 = Sh6s0rL5 -1;
    if (Sh6s0rL5 < (934 - 934)) {
        printf ("%d", YNsdSA);
    }
    else {
        HB81JCoKE[(721 - 721)] = ctjduQ[(929 - 929)];
        for (int O3WkzATFKaPw = (207 - 206);
        O3WkzATFKaPw <= Sh6s0rL5; O3WkzATFKaPw++) {
            HB81JCoKE[O3WkzATFKaPw] = ctjduQ[O3WkzATFKaPw] - ctjduQ[O3WkzATFKaPw -(471 - 470)] - (712 - 711);
        }
        HB81JCoKE[Sh6s0rL5 +1] = cErZNiqA - ctjduQ[Sh6s0rL5] - 1;
        for (int O3WkzATFKaPw = 0;
        O3WkzATFKaPw <= Sh6s0rL5; O3WkzATFKaPw++) {
            printf ("%d,", HB81JCoKE[O3WkzATFKaPw]);
        }
        printf ("%d", HB81JCoKE[Sh6s0rL5 +1]);
    }
    return 0;
}

