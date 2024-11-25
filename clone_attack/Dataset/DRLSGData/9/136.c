int main () {
    char O1w46uPjZ [(1036 - 936)];
    char ukUz60R [(744 - 644)] [(258 - 158)];
    int KBjJTFr [(922 - 822)];
    int x5UnPt;
    int fpvUbMj54D;
    int OC5r0Xq2;
    int sROPbGi;
    int IQ48BX5aR;
    int sz [(263 - 163)];
    int DWkAdU [(260 - 160)];
    char brJ9PDns4ON [(855 - 755)] [(1077 - 977)];
    char GkNJpRiqGdb [(402 - 302)] [(546 - 446)];
    OC5r0Xq2 = (867 - 867);
    sROPbGi = (922 - 922);
    IQ48BX5aR = (349 - 349);
    fpvUbMj54D = (994 - 994);
    scanf ("%d", &x5UnPt);
    {
        OC5r0Xq2 = (834 - 834);
        for (; x5UnPt > OC5r0Xq2;) {
            scanf ("%s%d", brJ9PDns4ON[OC5r0Xq2], &sz[OC5r0Xq2]);
            OC5r0Xq2 = OC5r0Xq2 +(347 - 346);
        }
    }
    {
        OC5r0Xq2 = (324 - 324);
        for (; x5UnPt > OC5r0Xq2;) {
            if ((985 - 925) <= sz[OC5r0Xq2]) {
                KBjJTFr[sROPbGi] = sz[OC5r0Xq2];
                strcpy (ukUz60R[sROPbGi], brJ9PDns4ON[OC5r0Xq2]);
                sROPbGi = sROPbGi + (18 - 17);
            }
            if (sz[OC5r0Xq2] < (399 - 339)) {
                DWkAdU[IQ48BX5aR] = sz[OC5r0Xq2];
                strcpy (GkNJpRiqGdb[IQ48BX5aR], brJ9PDns4ON[OC5r0Xq2]);
                IQ48BX5aR = IQ48BX5aR +(486 - 485);
            }
            OC5r0Xq2 = OC5r0Xq2 +(292 - 291);
        }
    }
    {
        OC5r0Xq2 = (912 - 911);
        for (; sROPbGi > OC5r0Xq2;) {
            {
                fpvUbMj54D = (444 - 444);
                for (; sROPbGi - OC5r0Xq2 > fpvUbMj54D;) {
                    if (KBjJTFr[fpvUbMj54D + (869 - 868)] > KBjJTFr[fpvUbMj54D]) {
                        int DSKrbP7;
                        DSKrbP7 = KBjJTFr[fpvUbMj54D];
                        KBjJTFr[fpvUbMj54D] = KBjJTFr[fpvUbMj54D + (407 - 406)];
                        KBjJTFr[fpvUbMj54D + (130 - 129)] = DSKrbP7;
                        strcpy (O1w46uPjZ, ukUz60R[fpvUbMj54D]);
                        strcpy (ukUz60R[fpvUbMj54D], ukUz60R[fpvUbMj54D + (934 - 933)]);
                        strcpy (ukUz60R[fpvUbMj54D + (837 - 836)], O1w46uPjZ);
                    }
                    fpvUbMj54D = fpvUbMj54D + (993 - 992);
                }
            }
            OC5r0Xq2 = OC5r0Xq2 +(415 - 414);
        }
    }
    for (OC5r0Xq2 = (710 - 710); OC5r0Xq2 < sROPbGi; OC5r0Xq2 = OC5r0Xq2 +1)
        printf ("%s\n", ukUz60R[OC5r0Xq2]);
    {
        fpvUbMj54D = 0;
        for (; fpvUbMj54D < IQ48BX5aR;) {
            printf ("%s\n", (GkNJpRiqGdb[fpvUbMj54D]));
            fpvUbMj54D++;
        }
    }
    return 0;
}

