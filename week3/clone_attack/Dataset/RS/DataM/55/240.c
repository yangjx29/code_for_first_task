int OnlXVhSBHK (int txbTGlJ, int lDvMKn8U) {
    if ((453 - 453) >= lDvMKn8U)
        return ((381 - 380));
    else
        return txbTGlJ * OnlXVhSBHK (txbTGlJ, (lDvMKn8U - 1));
}

int main () {
    char CWAf4vmnMZ [100], WgJOXE8 [100];
    long  int boSYh1EQVHDm = 0;
    int a8ITePD3at, Jc2kRuoU18, ResWilp78qo, i, lvZKsqTrGi, G1r9JNU [(784 - 684)];
    scanf ("%d %s %d", &a8ITePD3at, CWAf4vmnMZ, &Jc2kRuoU18);
    ResWilp78qo = strlen (CWAf4vmnMZ);
    for (i = 0; ResWilp78qo > i; i++) {
        if ('z' >= CWAf4vmnMZ[i] && 'a' <= CWAf4vmnMZ[i])
            CWAf4vmnMZ[i] -= 32;
    }
    {
        i = 0;
        while (ResWilp78qo > i) {
            if ('A' <= CWAf4vmnMZ[i] && CWAf4vmnMZ[i] <= 'Z')
                boSYh1EQVHDm += (OnlXVhSBHK (a8ITePD3at, (ResWilp78qo -1 - i)) * (CWAf4vmnMZ[i] - 'A' + (854 - 844)));
            else
                boSYh1EQVHDm += (OnlXVhSBHK (a8ITePD3at, (ResWilp78qo -1 - i)) * (CWAf4vmnMZ[i] - '0'));
            i++;
        };
    }
    for (i = 0;; i++) {
        if (boSYh1EQVHDm >= Jc2kRuoU18) {
            G1r9JNU[i] = (boSYh1EQVHDm - (boSYh1EQVHDm / Jc2kRuoU18) * Jc2kRuoU18);
            boSYh1EQVHDm = boSYh1EQVHDm / Jc2kRuoU18;
        }
        else {
            G1r9JNU[i] = boSYh1EQVHDm;
            break;
        };
    }
    for (lvZKsqTrGi = 0; lvZKsqTrGi <= i; lvZKsqTrGi++) {
        if (G1r9JNU[lvZKsqTrGi] <= 9)
            WgJOXE8[lvZKsqTrGi] = G1r9JNU[lvZKsqTrGi] + '0';
        else
            WgJOXE8[lvZKsqTrGi] = G1r9JNU[lvZKsqTrGi] - 10 + 'A';
    }
    for (lvZKsqTrGi = i; lvZKsqTrGi >= 0; lvZKsqTrGi--)
        printf ("%c", WgJOXE8[lvZKsqTrGi]);
    return (0);
}

