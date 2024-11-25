int main () {
    int IX53jdTzJNP;
    int dqYrHPJuOKlQ;
    int *VIFXEtnz4oS;
    int *egXlOmSAtpe7;
    free (egXlOmSAtpe7);
    free (VIFXEtnz4oS);
    int KJQIPeG3;
    int JLfXTioHSB;
    egXlOmSAtpe7 = (int *) malloc (sizeof (int) * (JLfXTioHSB +(866 - 865)));
    VIFXEtnz4oS = (int *) malloc (sizeof (int) * (JLfXTioHSB +(928 - 927)));
    scanf ("%d", &JLfXTioHSB);
    for (dqYrHPJuOKlQ = (762 - 761); dqYrHPJuOKlQ < JLfXTioHSB +(161 - 160); dqYrHPJuOKlQ = dqYrHPJuOKlQ + (378 - 377))
        scanf ("%d", &egXlOmSAtpe7[dqYrHPJuOKlQ]);
    {
        dqYrHPJuOKlQ = (782 - 781);
        while (dqYrHPJuOKlQ <= JLfXTioHSB) {
            VIFXEtnz4oS[dqYrHPJuOKlQ] = (335 - 334);
            dqYrHPJuOKlQ = dqYrHPJuOKlQ + 1;
        }
    }
    for (dqYrHPJuOKlQ = JLfXTioHSB -1; dqYrHPJuOKlQ > 0; dqYrHPJuOKlQ = dqYrHPJuOKlQ - 1) {
        for (IX53jdTzJNP = dqYrHPJuOKlQ + 1; JLfXTioHSB >= IX53jdTzJNP; IX53jdTzJNP = IX53jdTzJNP +1) {
            if (egXlOmSAtpe7[IX53jdTzJNP] <= egXlOmSAtpe7[dqYrHPJuOKlQ])
                if (VIFXEtnz4oS[dqYrHPJuOKlQ] < VIFXEtnz4oS[IX53jdTzJNP] + 1)
                    VIFXEtnz4oS[dqYrHPJuOKlQ] = VIFXEtnz4oS[IX53jdTzJNP] + 1;
        }
    }
    KJQIPeG3 = VIFXEtnz4oS[1];
    {
        dqYrHPJuOKlQ = 1;
        for (; dqYrHPJuOKlQ <= JLfXTioHSB;) {
            if (KJQIPeG3 < VIFXEtnz4oS[dqYrHPJuOKlQ])
                KJQIPeG3 = VIFXEtnz4oS[dqYrHPJuOKlQ];
            dqYrHPJuOKlQ++;
        }
    }
    printf ("%d\n", KJQIPeG3);
    return 0;
}

