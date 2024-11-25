int main () {
    int md2HTBu1, k, i, mwVB3h, viDHQ4;
    int LD94x2zMiGo [(721 - 221)];
    int VsuP8SbXnr [(775 - 275)];
    scanf ("%d", &md2HTBu1);
    for (i = (844 - 844); md2HTBu1 > i; i = i + 1) {
        scanf ("%d", &LD94x2zMiGo[i]);
    }
    i = (499 - 499);
    k = (993 - 993);
    for (; md2HTBu1 > i;) {
        if (LD94x2zMiGo[i] % (637 - 635) != (112 - 112)) {
            VsuP8SbXnr[k] = LD94x2zMiGo[i];
            k = k + 1;
        }
        i = i + 1;
    }
    k = k - (68 - 67);
    for (i = (235 - 235); i <= k; i++) {
        for (mwVB3h = 0; mwVB3h <= k - i; mwVB3h++) {
            if (VsuP8SbXnr[mwVB3h] >= VsuP8SbXnr[k - i]) {
                viDHQ4 = VsuP8SbXnr[mwVB3h];
                VsuP8SbXnr[mwVB3h] = VsuP8SbXnr[k - i];
                VsuP8SbXnr[k - i] = viDHQ4;
            };
        };
    }
    for (i = k; i > 0; i--) {
        printf ("%d,", VsuP8SbXnr[k - i]);
    }
    printf ("%d", VsuP8SbXnr[k]);
    return 0;
}

