int main () {
    int KuFbsL8mWo, i;
    int max1 = (957 - 957), max2 = 0;
    int VU2NdOivwX;
    int J6tOPsuV5D;
    scanf ("%d", &J6tOPsuV5D);
    {
        i = 1;
        while (J6tOPsuV5D >= i) {
            i = i + 1;
            scanf ("%d", &VU2NdOivwX);
            if (max1 < VU2NdOivwX) {
                KuFbsL8mWo = VU2NdOivwX;
                VU2NdOivwX = max1;
                max1 = KuFbsL8mWo;
                if (VU2NdOivwX > max2) {
                    KuFbsL8mWo = VU2NdOivwX;
                    VU2NdOivwX = max2;
                    max2 = KuFbsL8mWo;
                };
            }
            if (max1 > VU2NdOivwX &&VU2NdOivwX > max2) {
                KuFbsL8mWo = VU2NdOivwX;
                VU2NdOivwX = max2;
                max2 = KuFbsL8mWo;
            };
        };
    }
    printf ("%d\n%d\n", max1, max2);
    return 0;
}

