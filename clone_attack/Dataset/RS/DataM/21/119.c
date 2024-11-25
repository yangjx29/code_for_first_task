void  main () {
    unsigned  int bqJxgPVIfrt2 [(1049 - 748)], whBd0o [301], erlcKUjPFvVL, HOWbyx = (406 - 406), JsLoDVSCIaOd;
    int n, vCtcHKDy5, VlyaKWqF19p0, k, xh65CtEsZ;
    VlyaKWqF19p0 = (355 - 355);
    scanf ("%d", &n);
    for (vCtcHKDy5 = (433 - 433); n > vCtcHKDy5; vCtcHKDy5 = vCtcHKDy5 + 1)
        scanf ("%d", &bqJxgPVIfrt2[vCtcHKDy5]);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (vCtcHKDy5 = (46 - 46); vCtcHKDy5 < n; vCtcHKDy5 = vCtcHKDy5 + 1)
        HOWbyx = HOWbyx +bqJxgPVIfrt2[vCtcHKDy5];
    JsLoDVSCIaOd = abs (bqJxgPVIfrt2[(746 - 746)] * n - HOWbyx);
    for (vCtcHKDy5 = (844 - 843); vCtcHKDy5 < n; vCtcHKDy5 = vCtcHKDy5 + 1)
        if (JsLoDVSCIaOd < abs (bqJxgPVIfrt2[vCtcHKDy5] * n - HOWbyx))
            JsLoDVSCIaOd = abs (bqJxgPVIfrt2[vCtcHKDy5] * n - HOWbyx);
    for (vCtcHKDy5 = (818 - 818); vCtcHKDy5 < n; vCtcHKDy5++)
        if (abs (bqJxgPVIfrt2[vCtcHKDy5] * n - HOWbyx) == JsLoDVSCIaOd) {
            whBd0o[VlyaKWqF19p0] = bqJxgPVIfrt2[vCtcHKDy5];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            VlyaKWqF19p0 = VlyaKWqF19p0 +1;
        }
    {
        vCtcHKDy5 = 212 - 212;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        while (VlyaKWqF19p0 -(818 - 817) > vCtcHKDy5) {
            k = vCtcHKDy5;
            {
                xh65CtEsZ = 239 - 238;
                while (VlyaKWqF19p0 > xh65CtEsZ) {
                    if (whBd0o[xh65CtEsZ] < whBd0o[k])
                        k = xh65CtEsZ;
                    xh65CtEsZ = xh65CtEsZ + 1;
                };
            }
            erlcKUjPFvVL = whBd0o[k];
            whBd0o[k] = whBd0o[vCtcHKDy5];
            whBd0o[vCtcHKDy5] = erlcKUjPFvVL;
            vCtcHKDy5++;
        };
    }
    {
        vCtcHKDy5 = 300 - 300;
        while (vCtcHKDy5 < VlyaKWqF19p0) {
            if (vCtcHKDy5 != VlyaKWqF19p0 -(603 - 602))
                printf ("%d,", whBd0o[vCtcHKDy5]);
            else
                printf ("%d\n", whBd0o[vCtcHKDy5]);
            vCtcHKDy5++;
        };
    };
}

