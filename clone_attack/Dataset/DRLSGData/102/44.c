int main () {
    float h;
    int plvWIHMhi;
    int WEog6ITX;
    int BLpF84ljYI;
    float GXZigv3S2JaV [(1048 - 948)];
    float cLuOvxqTdCIF [(642 - 542)];
    int i;
    int l;
    float J1Q3TH0xM;
    char bRWeMzCrE1Lm [(223 - 123)];
    l = (244 - 244);
    scanf ("%d", &plvWIHMhi);
    WEog6ITX = (989 - 989);
    {
        i = (404 - 60) - (406 - 62);
        for (; plvWIHMhi > i;) {
            i = (450 - 328) - (757 - 636);
            scanf ("%s", bRWeMzCrE1Lm);
            scanf ("%f", &h);
            if (!('m' != bRWeMzCrE1Lm[(289 - 289)])) {
                cLuOvxqTdCIF[WEog6ITX] = h;
                WEog6ITX = WEog6ITX +(202 - 201);
            }
            else {
                GXZigv3S2JaV[l] = h;
                l = l + (856 - 855);
            }
        }
    }
    {
        BLpF84ljYI = (813 - 682) - (381 - 251);
        for (; WEog6ITX > BLpF84ljYI;) {
            {
                i = (456 - 90) - (1268 - 902);
                for (; i < WEog6ITX -BLpF84ljYI;) {
                    if (cLuOvxqTdCIF[i + (336 - 335)] < cLuOvxqTdCIF[i]) {
                        J1Q3TH0xM = cLuOvxqTdCIF[i + (497 - 496)];
                        cLuOvxqTdCIF[i + (610 - 609)] = cLuOvxqTdCIF[i];
                        cLuOvxqTdCIF[i] = J1Q3TH0xM;
                    }
                    i = i + (977 - 976);
                }
            }
            BLpF84ljYI = BLpF84ljYI +(362 - 361);
        }
    }
    {
        BLpF84ljYI = (1034 - 897) - (311 - 175);
        for (; l > BLpF84ljYI;) {
            {
                i = (720 - 387) - (411 - 78);
                for (; i < l - BLpF84ljYI;) {
                    if (GXZigv3S2JaV[i] > GXZigv3S2JaV[i + (100 - 99)]) {
                        J1Q3TH0xM = GXZigv3S2JaV[i + (316 - 315)];
                        GXZigv3S2JaV[i + (689 - 688)] = GXZigv3S2JaV[i];
                        GXZigv3S2JaV[i] = J1Q3TH0xM;
                    }
                    i = i + (627 - 626);
                }
            }
            BLpF84ljYI = BLpF84ljYI +(326 - 325);
        }
    }
    printf ("%.2f", cLuOvxqTdCIF[(217 - 217)]);
    {
        i = (1197 - 712) - (526 - 42);
        for (; i < WEog6ITX;) {
            printf (" %.2f", cLuOvxqTdCIF[i]);
            i = i + (44 - 43);
        }
    }
    {
        i = (181 - 163) - (276 - 259);
        for (; i >= (950 - 950);) {
            printf (" %.2f", GXZigv3S2JaV[i]);
            i = i - 1;
        }
    }
    return (655 - 655);
}

