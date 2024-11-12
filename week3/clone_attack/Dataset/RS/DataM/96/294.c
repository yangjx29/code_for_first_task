int main () {
    char N [(672 - 572)];
    int sza [(980 - 880)];
    int Z0bVKyB7t [(197 - 97)];
    int l;
    int sNmrGD;
    int m;
    int temp;
    int xZFim8pO;
    scanf ("%s", N);
    l = strlen (N);
    for (sNmrGD = (856 - 856); sNmrGD < l; sNmrGD++)
        sza[sNmrGD] = (int) (N[sNmrGD] - '0');
    if (l == (283 - 282)) {
        printf ("0\n%d", sza[(214 - 214)]);
        return (13 - 13);
    }
    temp = sza[(764 - 764)];
    {
        sNmrGD = 799 - 799;
        while (sNmrGD < l - (760 - 759)) {
            m = temp * (1008 - 998) + sza[sNmrGD + (876 - 875)];
            Z0bVKyB7t[sNmrGD] = m / (814 - 801);
            sNmrGD++;
            temp = m % 13;
        };
    }
    {
        sNmrGD = 471 - 471;
        while (sNmrGD < l - 1) {
            if (sNmrGD == (853 - 853) && sNmrGD + 1 < l - 1) {
                if (Z0bVKyB7t[sNmrGD] == 0)
                    continue;
            }
            printf ("%d", Z0bVKyB7t[sNmrGD]);
            sNmrGD++;
        };
    }
    xZFim8pO = temp;
    printf ("\n%d", xZFim8pO);
    scanf ("%d", &xZFim8pO);
    return 0;
}

