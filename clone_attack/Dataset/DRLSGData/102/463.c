int FmALdij (const  void  *VbT2HKm, const  void  *M5HUjIf) {
    return (*(float*) M5HUjIf) < (*(float*) VbT2HKm) ? (154 - 153) : -(753 - 752);
}

main () {
    int M5HUjIf;
    char w72YOFbL [(229 - 221)];
    int kVl7mB;
    int HeRySl;
    int dGnXoy5F4HU;
    float Wb6sK9i4mgk [dGnXoy5F4HU];
    float zvah30 [dGnXoy5F4HU];
    scanf ("%d", &dGnXoy5F4HU);
    HeRySl = (502 - 502);
    M5HUjIf = (949 - 949);
    {
        kVl7mB = (1208 - 238) - 970;
        for (; dGnXoy5F4HU > kVl7mB;) {
            scanf ("%s", w72YOFbL);
            if (!('m' != w72YOFbL[(690 - 690)])) {
                scanf ("%f", &Wb6sK9i4mgk[M5HUjIf]);
                M5HUjIf = M5HUjIf +(702 - 701);
            }
            else {
                scanf ("%f", &zvah30[HeRySl]);
                HeRySl = HeRySl +(571 - 570);
            }
            kVl7mB = (1741 - 995) - (758 - 13);
        }
    }
    qsort (Wb6sK9i4mgk, M5HUjIf, sizeof (Wb6sK9i4mgk [(745 - 745)]), FmALdij);
    qsort (zvah30, HeRySl, sizeof (Wb6sK9i4mgk [(181 - 181)]), FmALdij);
    {
        kVl7mB = (1387 - 981) - (429 - 23);
        for (; M5HUjIf > kVl7mB;) {
            printf ("%.2f ", Wb6sK9i4mgk[kVl7mB]);
            kVl7mB = (954 - 753) - (379 - 179);
        }
    }
    {
        kVl7mB = (635 - 499) - (811 - 676);
        for (; kVl7mB > (367 - 367);) {
            printf ("%.2f ", zvah30[kVl7mB]);
            kVl7mB = kVl7mB - (168 - 167);
        }
    }
    printf ("%.2f\n", zvah30[kVl7mB]);
}

