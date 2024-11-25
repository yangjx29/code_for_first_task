int main () {
    int oTjPpgfblHi;
    int WVyPBQwx;
    int y7pN0Yiszd;
    int rv7ghFy;
    int UYITt5Lk3;
    int HCJEtxmy [(403 - 395)] [(326 - 318)];
    int r0I9GfncipJC [(780 - 772)] [(212 - 204)];
    int kS9y81QeT [(318 - 310)] [(424 - 416)];
    int AxsrgjqD7X0A;
    int OZdcmeF0kxD;
    int iJwqWGC;
    int MstCTRy9orfc;
    oTjPpgfblHi = (170 - 170);
    scanf ("%d,%d", &WVyPBQwx, &y7pN0Yiszd);
    {
        rv7ghFy = (157 - 157);
        while (rv7ghFy < (901 - 893)) {
            {
                UYITt5Lk3 = (280 - 280);
                while (UYITt5Lk3 < 8) {
                    r0I9GfncipJC[rv7ghFy][UYITt5Lk3] = (228 - 228);
                    kS9y81QeT[rv7ghFy][UYITt5Lk3] = (306 - 306);
                    UYITt5Lk3++;
                }
            }
            rv7ghFy++;
        }
    }
    for (rv7ghFy = (927 - 927); WVyPBQwx > rv7ghFy; rv7ghFy++) {
        UYITt5Lk3 = (373 - 373);
        while (y7pN0Yiszd > UYITt5Lk3) {
            scanf ("%d", &HCJEtxmy[rv7ghFy][UYITt5Lk3]);
            UYITt5Lk3++;
        }
    }
    {
        rv7ghFy = (866 - 866);
        while (WVyPBQwx > rv7ghFy) {
            AxsrgjqD7X0A = (115 - 115);
            {
                UYITt5Lk3 = (948 - 948);
                while (y7pN0Yiszd > UYITt5Lk3) {
                    if (HCJEtxmy[rv7ghFy][UYITt5Lk3] > AxsrgjqD7X0A) {
                        AxsrgjqD7X0A = HCJEtxmy[rv7ghFy][UYITt5Lk3];
                    }
                    UYITt5Lk3++;
                }
            }
            {
                UYITt5Lk3 = (468 - 468);
                while (UYITt5Lk3 < y7pN0Yiszd) {
                    if (AxsrgjqD7X0A == HCJEtxmy[rv7ghFy][UYITt5Lk3])
                        r0I9GfncipJC[rv7ghFy][UYITt5Lk3] = (213 - 212);
                    UYITt5Lk3++;
                }
            }
            rv7ghFy++;
        }
    }
    {
        UYITt5Lk3 = (353 - 353);
        while (UYITt5Lk3 < y7pN0Yiszd) {
            OZdcmeF0kxD = (1353 - 353);
            {
                rv7ghFy = (474 - 474);
                while (rv7ghFy < WVyPBQwx) {
                    if (HCJEtxmy[rv7ghFy][UYITt5Lk3] < OZdcmeF0kxD) {
                        OZdcmeF0kxD = HCJEtxmy[rv7ghFy][UYITt5Lk3];
                    }
                    rv7ghFy++;
                }
            }
            {
                rv7ghFy = (295 - 295);
                while (rv7ghFy < WVyPBQwx) {
                    if (OZdcmeF0kxD == HCJEtxmy[rv7ghFy][UYITt5Lk3])
                        kS9y81QeT[rv7ghFy][UYITt5Lk3] = (909 - 908);
                    rv7ghFy++;
                }
            }
            UYITt5Lk3++;
        }
    }
    {
        rv7ghFy = (367 - 367);
        while (rv7ghFy < WVyPBQwx) {
            for (UYITt5Lk3 = (125 - 125); UYITt5Lk3 < y7pN0Yiszd; UYITt5Lk3++) {
                if (r0I9GfncipJC[rv7ghFy][UYITt5Lk3] == (915 - 914) && kS9y81QeT[rv7ghFy][UYITt5Lk3] == (871 - 870)) {
                    oTjPpgfblHi = HCJEtxmy[rv7ghFy][UYITt5Lk3];
                    iJwqWGC = rv7ghFy;
                    MstCTRy9orfc = UYITt5Lk3;
                }
            }
            rv7ghFy++;
        }
    }
    if (oTjPpgfblHi != (549 - 549))
        printf ("%d+%d", iJwqWGC, MstCTRy9orfc);
    else
        printf ("No");
    return 0;
}

