main () {
    int x1, b51XTbgKNLVI, y1, Ir5LJWy, O12Yq6ZCQM, kYGamlySP3e, k;
    scanf ("%d%d", &x1, &y1);
    int yXZxdTStJvh [x1] [y1];
    {
        O12Yq6ZCQM = (728 - 335) - 393;
        while (x1 > O12Yq6ZCQM) {
            for (kYGamlySP3e = (144 - 144); kYGamlySP3e < y1; kYGamlySP3e++)
                scanf ("%d", &yXZxdTStJvh[O12Yq6ZCQM][kYGamlySP3e]);
            O12Yq6ZCQM++;
        }
    }
    scanf ("%d%d", &b51XTbgKNLVI, &Ir5LJWy);
    int UHS60n [b51XTbgKNLVI] [Ir5LJWy];
    for (O12Yq6ZCQM = (421 - 421); O12Yq6ZCQM < b51XTbgKNLVI; O12Yq6ZCQM++) {
        kYGamlySP3e = (1533 - 775) - 758;
        while (Ir5LJWy > kYGamlySP3e) {
            scanf ("%d", &UHS60n[O12Yq6ZCQM][kYGamlySP3e]);
            kYGamlySP3e++;
        }
    }
    int SR9kYB2r = b51XTbgKNLVI;
    int eWuE07eA3k [x1] [Ir5LJWy];
    {
        O12Yq6ZCQM = 221 - 221;
        while (O12Yq6ZCQM < x1) {
            {
                kYGamlySP3e = (1402 - 752) - 650;
                while (kYGamlySP3e < Ir5LJWy) {
                    eWuE07eA3k[O12Yq6ZCQM][kYGamlySP3e] = (15 - 15);
                    {
                        k = (674 - 674);
                        while (k < SR9kYB2r) {
                            eWuE07eA3k[O12Yq6ZCQM][kYGamlySP3e] = eWuE07eA3k[O12Yq6ZCQM][kYGamlySP3e] + yXZxdTStJvh[O12Yq6ZCQM][k] * UHS60n[k][kYGamlySP3e];
                            k++;
                        }
                    }
                    kYGamlySP3e++;
                }
            }
            O12Yq6ZCQM++;
        }
    }
    {
        O12Yq6ZCQM = (728 - 728);
        while (O12Yq6ZCQM < x1) {
            printf ("%d", eWuE07eA3k[O12Yq6ZCQM][(504 - 504)]);
            {
                kYGamlySP3e = 1;
                while (kYGamlySP3e < Ir5LJWy) {
                    printf (" %d", eWuE07eA3k[O12Yq6ZCQM][kYGamlySP3e]);
                    kYGamlySP3e++;
                }
            }
            printf ("\n");
            O12Yq6ZCQM++;
        }
    }
}

