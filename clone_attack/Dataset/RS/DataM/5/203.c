int main () {
    int d5pLGTDsJqM, XrdHToYIOLM, H6Yxo7i = 0;
    double  dwoPTBE;
    char a [502];
    char cL02cO6NGQoH [502];
    scanf ("%lf", &dwoPTBE);
    scanf ("%s", a);
    scanf ("%s", cL02cO6NGQoH);
    if (strlen (a) != strlen (cL02cO6NGQoH)) {
        d5pLGTDsJqM = 0;
    }
    else {
        XrdHToYIOLM = 0;
        while (a[XrdHToYIOLM]) {
            if ((a[XrdHToYIOLM] != 'A' && !('T' == a[XrdHToYIOLM]) && a[XrdHToYIOLM] != 'C' && a[XrdHToYIOLM] != 'G') || (cL02cO6NGQoH[XrdHToYIOLM] != 'A' && cL02cO6NGQoH[XrdHToYIOLM] != 'T' && cL02cO6NGQoH[XrdHToYIOLM] != 'C' && cL02cO6NGQoH[XrdHToYIOLM] != 'G')) {
                d5pLGTDsJqM = 0;
            }
            else {
                if (a[XrdHToYIOLM] == cL02cO6NGQoH[XrdHToYIOLM]) {
                    H6Yxo7i = H6Yxo7i +1;
                };
            }
            XrdHToYIOLM = XrdHToYIOLM +1;
        };
    }
    if (d5pLGTDsJqM == 0) {
        printf ("error");
        return 0;
    }
    if (strlen (a) == strlen (cL02cO6NGQoH) && 1.00 * H6Yxo7i / strlen (a) >= dwoPTBE) {
    }
    else {
    }
    return 0;
}

