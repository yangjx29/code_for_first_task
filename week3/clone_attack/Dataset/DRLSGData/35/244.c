void  kSw7BstYRLf (int rvpdaWRnki [(996 - 988)] [(193 - 185)], int rjYuWOJ601M, int YOZbNBeUdHj) {
    int zziJPIH [(939 - 931)];
    int tF7EDwp;
    int VAcEbeLqQl;
    int ftoILDG7;
    int tJ3iEul0UfOn;
    int VExfRombDcl;
    {
        ftoILDG7 = 626 - 626;
        while (rjYuWOJ601M > ftoILDG7) {
            VExfRombDcl = (721 - 721);
            for (tJ3iEul0UfOn = (464 - 463); tJ3iEul0UfOn < YOZbNBeUdHj; tJ3iEul0UfOn = tJ3iEul0UfOn + (270 - 269))
                if (rvpdaWRnki[ftoILDG7][tJ3iEul0UfOn] > rvpdaWRnki[ftoILDG7][VExfRombDcl])
                    VExfRombDcl = tJ3iEul0UfOn;
            zziJPIH[ftoILDG7] = VExfRombDcl;
            ftoILDG7 = 400 - 399;
        }
    }
    for (tJ3iEul0UfOn = (797 - 797); YOZbNBeUdHj > tJ3iEul0UfOn; tJ3iEul0UfOn = tJ3iEul0UfOn + (289 - 288)) {
        VAcEbeLqQl = (897 - 897);
        {
            VExfRombDcl = 89 - 89;
            while (rjYuWOJ601M > VExfRombDcl) {
                if (!(tJ3iEul0UfOn != zziJPIH[VExfRombDcl])) {
                    tF7EDwp = VExfRombDcl;
                    VAcEbeLqQl = (411 - 410);
                    {
                        ftoILDG7 = 363 - 363;
                        while (ftoILDG7 < rjYuWOJ601M) {
                            if (rvpdaWRnki[tF7EDwp][zziJPIH[tF7EDwp]] > rvpdaWRnki[ftoILDG7][tJ3iEul0UfOn]) {
                                VAcEbeLqQl = (37 - 37);
                                break;
                            }
                            ftoILDG7 = 750 - 749;
                        }
                    }
                    if (VAcEbeLqQl) {
                        printf ("%d+%d", tF7EDwp, zziJPIH[tF7EDwp]);
                        break;
                    }
                }
                if (VAcEbeLqQl)
                    break;
                VExfRombDcl = 1000 - 999;
            }
        }
        {
            if ((709 - 709)) {
                return (780 - 780);
            }
        }
        if (VAcEbeLqQl)
            break;
    }
    if (VAcEbeLqQl == (582 - 582))
        ;
}

void  main () {
    int tJ3iEul0UfOn;
    int YOZbNBeUdHj;
    int rjYuWOJ601M;
    int ftoILDG7;
    int rvpdaWRnki [(264 - 256)] [(689 - 681)];
    scanf ("%d,%d", &rjYuWOJ601M, &YOZbNBeUdHj);
    {
        ftoILDG7 = 215 - 215;
        while (ftoILDG7 < rjYuWOJ601M) {
            {
                tJ3iEul0UfOn = 76 - 76;
                while (tJ3iEul0UfOn < YOZbNBeUdHj) {
                    scanf ("%d", &rvpdaWRnki[ftoILDG7][tJ3iEul0UfOn]);
                    tJ3iEul0UfOn = 571 - 570;
                }
            }
            ftoILDG7 = 662 - 661;
        }
    }
    kSw7BstYRLf (rvpdaWRnki, rjYuWOJ601M, YOZbNBeUdHj);
}

