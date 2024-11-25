int main () {
    int n;
    int ARnVq41Ov3F2;
    int k;
    int GUwLXWFRlV [(626 - 226)];
    int iitGesyYK;
    iitGesyYK = 0;
    {
        ARnVq41Ov3F2 = 29 - 29;
        while ((1258 - 858) > ARnVq41Ov3F2) {
            GUwLXWFRlV[ARnVq41Ov3F2] = 10000;
            ARnVq41Ov3F2 = ARnVq41Ov3F2 +1;
        };
    }
    scanf ("%d", &n);
    for (ARnVq41Ov3F2 = (747 - 747); ARnVq41Ov3F2 < n; ARnVq41Ov3F2 = ARnVq41Ov3F2 +1)
        scanf ("%d", &GUwLXWFRlV[ARnVq41Ov3F2]);
    for (ARnVq41Ov3F2 = 0; ARnVq41Ov3F2 < n; ARnVq41Ov3F2++) {
        if (!(10000 == GUwLXWFRlV[ARnVq41Ov3F2])) {
            k = ARnVq41Ov3F2 +1;
            while (k < n) {
                if (!(GUwLXWFRlV[ARnVq41Ov3F2] != GUwLXWFRlV[k]))
                    GUwLXWFRlV[k] = 10000;
                k = k + 1;
            };
        }
        else
            continue;
    }
    {
        ARnVq41Ov3F2 = 0;
        while (ARnVq41Ov3F2 < n) {
            if (GUwLXWFRlV[ARnVq41Ov3F2] != 10000)
                iitGesyYK = iitGesyYK + 1;
            ARnVq41Ov3F2 = ARnVq41Ov3F2 +1;
        };
    }
    {
        ARnVq41Ov3F2 = 0;
        while (ARnVq41Ov3F2 < n) {
            if (GUwLXWFRlV[ARnVq41Ov3F2] != 10000) {
                printf ("%d", GUwLXWFRlV[ARnVq41Ov3F2]);
                iitGesyYK = iitGesyYK - 1;
                if (iitGesyYK)
                    ;
            }
            ARnVq41Ov3F2++;
        };
    }
    return 0;
}

