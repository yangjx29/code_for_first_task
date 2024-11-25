main () {
    int HFghnS;
    int i;
    int P4o1Fmy;
    int oxeJg5IulSVm [25];
    int n;
    int q8WRD5Vu4Sd [25];
    int HhdOLzW9Pkv;
    scanf ("%d", &n);
    for (i = (946 - 946); i < n; i = i + 1) {
        scanf ("%d", &q8WRD5Vu4Sd[i]);
        oxeJg5IulSVm[i] = 0;
    }
    for (i = n - 1; i >= 0; i = i - 1) {
        HhdOLzW9Pkv = 0;
        for (HFghnS = i; HFghnS < n; HFghnS = HFghnS +1) {
            if (q8WRD5Vu4Sd[HFghnS] <= q8WRD5Vu4Sd[i]) {
                P4o1Fmy = oxeJg5IulSVm[HFghnS] + 1;
                if (P4o1Fmy >= HhdOLzW9Pkv)
                    HhdOLzW9Pkv = P4o1Fmy;
            }
        }
        oxeJg5IulSVm[i] = HhdOLzW9Pkv;
    }
    HhdOLzW9Pkv = 0;
    for (i = 0; i < n; i = i + 1) {
        if (oxeJg5IulSVm[i] >= HhdOLzW9Pkv)
            HhdOLzW9Pkv = oxeJg5IulSVm[i];
    }
    printf ("%d", HhdOLzW9Pkv);
}

