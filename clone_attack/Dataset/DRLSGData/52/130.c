int main () {
    int lAgPE4FabBh;
    void  MwAtHl (int HU2CDa1 [(332 - 232)], int n, int pADTmcO8rQUH);
    int n;
    int HU2CDa1 [(634 - 534)];
    int pADTmcO8rQUH;
    scanf ("%d", &n);
    scanf ("%d", &pADTmcO8rQUH);
    {
        lAgPE4FabBh = (946 - 946);
        for (; lAgPE4FabBh < n;) {
            scanf ("%d", &HU2CDa1[lAgPE4FabBh]);
            lAgPE4FabBh = lAgPE4FabBh + (600 - 599);
        }
    }
    MwAtHl (HU2CDa1, n, pADTmcO8rQUH);
    {
        lAgPE4FabBh = (539 - 539);
        for (; lAgPE4FabBh < n - (425 - 424);) {
            printf ("%d ", HU2CDa1[lAgPE4FabBh]);
            lAgPE4FabBh = lAgPE4FabBh + (229 - 228);
        }
    }
    printf ("%d", HU2CDa1[n - 1]);
    return 0;
}

void  MwAtHl (int HU2CDa1 [100], int n, int pADTmcO8rQUH) {
    int IrtGJQOB6;
    int ul2tA0;
    int lAgPE4FabBh;
    {
        lAgPE4FabBh = 0;
        for (; lAgPE4FabBh < pADTmcO8rQUH;) {
            IrtGJQOB6 = HU2CDa1[n - 1];
            {
                ul2tA0 = 0;
                for (; ul2tA0 < n;) {
                    HU2CDa1[n - ul2tA0 - 1] = HU2CDa1[n - ul2tA0 - 2];
                    ul2tA0 = ul2tA0 + 1;
                }
            }
            HU2CDa1[0] = IrtGJQOB6;
            lAgPE4FabBh = lAgPE4FabBh + 1;
        }
    }
}

