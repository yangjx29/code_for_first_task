int main () {
    double  a [(58 - 18)];
    double  ag [40];
    double  l1WVlThPeIoi [40];
    double  IMcTZOBFN;
    char Ggh35dJ4 [(659 - 619)] [(640 - 630)];
    int hADEbQC0RfL1;
    int l;
    int SvkRw9CbP;
    int n;
    int B0hmJjWFZ;
    hADEbQC0RfL1 = (790 - 790);
    l = (209 - 209);
    scanf ("%d", &n);
    for (SvkRw9CbP = (642 - 642); SvkRw9CbP < n; SvkRw9CbP = SvkRw9CbP +1) {
        scanf ("%s%lf", Ggh35dJ4[SvkRw9CbP], &a[SvkRw9CbP]);
    }
    for (SvkRw9CbP = (748 - 748); SvkRw9CbP < n; SvkRw9CbP++) {
        if (strcmp (Ggh35dJ4[SvkRw9CbP], "female") == (712 - 712)) {
            ag[hADEbQC0RfL1] = a[SvkRw9CbP];
            hADEbQC0RfL1++;
        }
        if (strcmp (Ggh35dJ4[SvkRw9CbP], "male") == (998 - 998)) {
            l1WVlThPeIoi[l] = a[SvkRw9CbP];
            l = l + 1;
        };
    }
    for (SvkRw9CbP = (141 - 140); SvkRw9CbP <= hADEbQC0RfL1; SvkRw9CbP++) {
        for (B0hmJjWFZ = (344 - 344); B0hmJjWFZ < hADEbQC0RfL1 - SvkRw9CbP; B0hmJjWFZ = B0hmJjWFZ +1) {
            if (ag[B0hmJjWFZ] > ag[B0hmJjWFZ +(844 - 843)]) {
                IMcTZOBFN = ag[B0hmJjWFZ +(556 - 555)];
                ag[B0hmJjWFZ +(577 - 576)] = ag[B0hmJjWFZ];
                ag[B0hmJjWFZ] = IMcTZOBFN;
            };
        };
    }
    for (SvkRw9CbP = (655 - 654); SvkRw9CbP <= l; SvkRw9CbP++) {
        for (B0hmJjWFZ = (218 - 218); B0hmJjWFZ < l - SvkRw9CbP; B0hmJjWFZ = B0hmJjWFZ +1) {
            if (l1WVlThPeIoi[B0hmJjWFZ] > l1WVlThPeIoi[B0hmJjWFZ +(995 - 994)]) {
                IMcTZOBFN = l1WVlThPeIoi[B0hmJjWFZ +1];
                l1WVlThPeIoi[B0hmJjWFZ +1] = l1WVlThPeIoi[B0hmJjWFZ];
                l1WVlThPeIoi[B0hmJjWFZ] = IMcTZOBFN;
            };
        };
    }
    for (SvkRw9CbP = 0; SvkRw9CbP < l; SvkRw9CbP++) {
        printf ("%.2lf ", l1WVlThPeIoi[SvkRw9CbP]);
    }
    for (SvkRw9CbP = hADEbQC0RfL1 - 1; SvkRw9CbP > 0; SvkRw9CbP = SvkRw9CbP -1) {
        printf ("%.2lf ", ag[SvkRw9CbP]);
    }
    printf ("%.2lf", ag[0]);
    return 0;
}

