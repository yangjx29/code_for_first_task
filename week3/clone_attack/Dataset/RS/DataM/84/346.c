int main () {
    int JUBAc3OLXpVw = 0;
    int AhtTflABQ7gV;
    int WnSdw8Z;
    int YroJDa;
    int Z2hgGbdN = 0;
    int wIrugq4 = (346 - 345);
    scanf ("%d\n", &YroJDa);
    {
        wIrugq4 = 1;
        while (wIrugq4 <= YroJDa) {
            wIrugq4 = wIrugq4 + 1;
            if (Z2hgGbdN > JUBAc3OLXpVw) {
                WnSdw8Z = JUBAc3OLXpVw;
                JUBAc3OLXpVw = Z2hgGbdN;
                Z2hgGbdN = WnSdw8Z;
            }
            scanf ("%d\n", &AhtTflABQ7gV);
            if (AhtTflABQ7gV >= JUBAc3OLXpVw &&JUBAc3OLXpVw >= Z2hgGbdN) {
                Z2hgGbdN = JUBAc3OLXpVw;
                JUBAc3OLXpVw = AhtTflABQ7gV;
            }
            if (JUBAc3OLXpVw > AhtTflABQ7gV &&AhtTflABQ7gV > Z2hgGbdN) {
                Z2hgGbdN = AhtTflABQ7gV;
            };
        };
    }
    printf ("%d\n%d", JUBAc3OLXpVw, Z2hgGbdN);
    return 0;
}

