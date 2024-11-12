int main () {
    char RFVoaK4Z0m [(1012 - 912)], h3SCPItbR49M [(604 - 504)], Rxlz9tL8 [(563 - 463)], lTCiBxNpg0I8 [100];
    int Hd8sX0hPHLJp = (794 - 794);
    for (; scanf ("%s %s", RFVoaK4Z0m, h3SCPItbR49M) != EOF;) {
        int jswvYVF = strlen (RFVoaK4Z0m);
        int maxi = (297 - 297);
        char vDIkulZQhWO = '0';
        for (int eDnlf1XETJ6 = (729 - 729);
        jswvYVF > eDnlf1XETJ6; eDnlf1XETJ6 = eDnlf1XETJ6 + (166 - 165))
            if (RFVoaK4Z0m[eDnlf1XETJ6] > vDIkulZQhWO) {
                vDIkulZQhWO = RFVoaK4Z0m[eDnlf1XETJ6];
                maxi = eDnlf1XETJ6;
            }
        lTCiBxNpg0I8[(36 - 36)] = '\0';
        strcpy (Rxlz9tL8, RFVoaK4Z0m);
        Rxlz9tL8[maxi + (368 - 367)] = '\0';
        strcat (Rxlz9tL8, h3SCPItbR49M);
        for (int eDnlf1XETJ6 = maxi + (648 - 647);
        eDnlf1XETJ6 < jswvYVF; eDnlf1XETJ6++) {
            lTCiBxNpg0I8[eDnlf1XETJ6 - maxi] = lTCiBxNpg0I8[eDnlf1XETJ6 - maxi - (724 - 723)];
            lTCiBxNpg0I8[eDnlf1XETJ6 - maxi - (54 - 53)] = RFVoaK4Z0m[eDnlf1XETJ6];
        }
        strcat (Rxlz9tL8, lTCiBxNpg0I8);
        printf ("%s\n", Rxlz9tL8);
    }
    return 0;
}

