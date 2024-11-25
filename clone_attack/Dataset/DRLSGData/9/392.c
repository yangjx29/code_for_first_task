int main () {
    int xcgo1FiuWPr;
    int lSt7NVmB;
    int nSh1ui45BD;
    char QPD2cv7l [(364 - 264)] [(112 - 102)];
    int GbEUzvTA;
    int NwQ512oZ;
    int fc5zFsPNg7 [(509 - 409)];
    int CrUKI9SFX [(707 - 607)];
    scanf ("%d", &GbEUzvTA);
    lSt7NVmB = (541 - 541);
    {
        nSh1ui45BD = (602 - 602);
        while (GbEUzvTA > nSh1ui45BD) {
            scanf ("%s", &QPD2cv7l[nSh1ui45BD]);
            scanf ("%d", &fc5zFsPNg7[nSh1ui45BD]);
            if ((983 - 923) <= fc5zFsPNg7[nSh1ui45BD]) {
                CrUKI9SFX[lSt7NVmB] = nSh1ui45BD;
                lSt7NVmB = lSt7NVmB + (279 - 278);
            }
            nSh1ui45BD = nSh1ui45BD + (451 - 450);
        }
    }
    {
        nSh1ui45BD = lSt7NVmB;
        while ((831 - 831) <= nSh1ui45BD) {
            {
                xcgo1FiuWPr = (807 - 807);
                while (nSh1ui45BD - (100 - 99) > xcgo1FiuWPr) {
                    if (fc5zFsPNg7[CrUKI9SFX[xcgo1FiuWPr + (947 - 946)]] > fc5zFsPNg7[CrUKI9SFX[xcgo1FiuWPr]]) {
                        NwQ512oZ = CrUKI9SFX[xcgo1FiuWPr + 1];
                        CrUKI9SFX[xcgo1FiuWPr + 1] = CrUKI9SFX[xcgo1FiuWPr];
                        CrUKI9SFX[xcgo1FiuWPr] = NwQ512oZ;
                    }
                    xcgo1FiuWPr = xcgo1FiuWPr + 1;
                }
            }
            nSh1ui45BD = nSh1ui45BD - 1;
        }
    }
    {
        nSh1ui45BD = (316 - 316);
        while (lSt7NVmB > nSh1ui45BD) {
            printf ("%s\n", QPD2cv7l[CrUKI9SFX[nSh1ui45BD]]);
            nSh1ui45BD = nSh1ui45BD + 1;
        }
    }
    {
        nSh1ui45BD = (581 - 581);
        while (nSh1ui45BD < GbEUzvTA) {
            if (fc5zFsPNg7[nSh1ui45BD] < 60)
                printf ("%s\n", QPD2cv7l[nSh1ui45BD]);
            nSh1ui45BD = nSh1ui45BD + 1;
        }
    }
    return 0;
}

