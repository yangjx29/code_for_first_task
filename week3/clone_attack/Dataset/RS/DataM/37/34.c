int main () {
    char Ad2PHWF [100000];
    char c [(703 - 603)];
    int f2jsMgDrt, cycle, bvluOCLjiK, j, bpF8xDzB4Kc, PdFvHCs2oI7;
    scanf ("%d", &f2jsMgDrt);
    for (cycle = (445 - 444); cycle <= f2jsMgDrt; cycle++) {
        PdFvHCs2oI7 = (487 - 487);
        memset (c, (686 - 686), (494 - 394) * sizeof (char));
        scanf ("%s", Ad2PHWF);
        bpF8xDzB4Kc = strlen (Ad2PHWF);
        for (bvluOCLjiK = 0; bvluOCLjiK <= bpF8xDzB4Kc - (602 - 601); bvluOCLjiK++) {
            for (j = 0; j < PdFvHCs2oI7; j = j + 1)
                if (Ad2PHWF[bvluOCLjiK] == c[j])
                    break;
            if (j < PdFvHCs2oI7) {
                continue;
            }
            else {
                c[PdFvHCs2oI7] = Ad2PHWF[bvluOCLjiK];
                PdFvHCs2oI7++;
                for (j = bvluOCLjiK + 1; j <= bpF8xDzB4Kc - 1; j++)
                    if (Ad2PHWF[j] == Ad2PHWF[bvluOCLjiK])
                        break;
                if (j == bpF8xDzB4Kc)
                    break;
            };
        }
        if (bvluOCLjiK < bpF8xDzB4Kc)
            printf ("%c\n", Ad2PHWF[bvluOCLjiK]);
        else
            ;
    }
    return 0;
}

