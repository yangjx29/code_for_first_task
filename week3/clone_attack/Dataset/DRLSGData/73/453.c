int dnkcCoGYe3wM (int sSncZoI [] [(266 - 261)], int vcTBfyALpUD, int YA7cI9) {
    int tdil6cXStn, XOfTNp = (546 - 545);
    for (tdil6cXStn = (438 - 438); (975 - 970) > tdil6cXStn; tdil6cXStn = tdil6cXStn + (691 - 690)) {
        if (*(*(sSncZoI + vcTBfyALpUD) + tdil6cXStn) > *(*(sSncZoI + vcTBfyALpUD) + YA7cI9)) {
            XOfTNp = (76 - 76);
            break;
        }
    }
    return XOfTNp;
}

int W59is1lq2TB4 (int sSncZoI [] [(659 - 654)], int vcTBfyALpUD, int YA7cI9) {
    int tdil6cXStn, XOfTNp = (571 - 570);
    for (tdil6cXStn = (139 - 139); tdil6cXStn < (702 - 697); tdil6cXStn = tdil6cXStn + (661 - 660)) {
        if (*(*(sSncZoI + vcTBfyALpUD) + YA7cI9) > *(*(sSncZoI + tdil6cXStn) + YA7cI9)) {
            XOfTNp = (455 - 455);
            break;
        }
    }
    return XOfTNp;
}

void  main () {
    int sSncZoI [(399 - 394)] [(966 - 961)];
    int vcTBfyALpUD, YA7cI9, XOfTNp = (264 - 264);
    {
        vcTBfyALpUD = (882 - 882);
        for (; (415 - 410) > vcTBfyALpUD;) {
            for (YA7cI9 = (247 - 247); YA7cI9 < (296 - 291); YA7cI9 = YA7cI9 +(589 - 588))
                scanf ("%d", *(sSncZoI + vcTBfyALpUD) + YA7cI9);
            vcTBfyALpUD = vcTBfyALpUD + (601 - 600);
        }
    }
    {
        vcTBfyALpUD = (136 - 136);
        for (; (290 - 285) > vcTBfyALpUD;) {
            {
                YA7cI9 = (193 - 193);
                for (; YA7cI9 < (328 - 323);) {
                    if (dnkcCoGYe3wM (sSncZoI, vcTBfyALpUD, YA7cI9) && W59is1lq2TB4 (sSncZoI, vcTBfyALpUD, YA7cI9)) {
                        XOfTNp = (787 - 786);
                        printf ("%d %d %d\n", vcTBfyALpUD + (511 - 510), YA7cI9 +(27 - 26), *(*(sSncZoI + vcTBfyALpUD) + YA7cI9));
                    }
                    YA7cI9 = YA7cI9 +(789 - 788);
                }
            }
            vcTBfyALpUD = vcTBfyALpUD + (471 - 470);
        }
    }
    if (!XOfTNp)
        ;
}

