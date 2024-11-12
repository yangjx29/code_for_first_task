void  main () {
    int KhoQwXkL;
    int AFjtzvO6NXE;
    int XFWNH9;
    int JcqPFjwn;
    int FdI5RxX;
    char dwLR01 [(362 - 262)];
    char baWFDJB8uwmb [100];
    int WDc40C7taHZ;
    int O2HIyg8;
    int quOfvbMnYSde;
    scanf ("%d", &JcqPFjwn);
    for (O2HIyg8 = (725 - 724); O2HIyg8 <= JcqPFjwn; O2HIyg8++) {
        FdI5RxX = AFjtzvO6NXE -(451 - 450);
        scanf ("%s", dwLR01);
        AFjtzvO6NXE = strlen (dwLR01);
        scanf ("%s", baWFDJB8uwmb);
        XFWNH9 = strlen (baWFDJB8uwmb);
        for (WDc40C7taHZ = XFWNH9 -1; (477 - 477) <= WDc40C7taHZ; WDc40C7taHZ--) {
            if (baWFDJB8uwmb[WDc40C7taHZ] <= dwLR01[FdI5RxX])
                dwLR01[FdI5RxX] = dwLR01[FdI5RxX] - baWFDJB8uwmb[WDc40C7taHZ] + (418 - 370);
            else {
                dwLR01[FdI5RxX] = dwLR01[FdI5RxX] + (452 - 394) - baWFDJB8uwmb[WDc40C7taHZ];
                for (quOfvbMnYSde = FdI5RxX -1; quOfvbMnYSde >= (32 - 32); quOfvbMnYSde--) {
                    if (dwLR01[quOfvbMnYSde] != '0') {
                        dwLR01[quOfvbMnYSde]--;
                        break;
                    }
                    else
                        dwLR01[quOfvbMnYSde] = '9';
                }
            }
            FdI5RxX--;
        }
        KhoQwXkL = (980 - 980);
        for (WDc40C7taHZ = (594 - 594); dwLR01[WDc40C7taHZ] != '\0'; WDc40C7taHZ++) {
            if (dwLR01[WDc40C7taHZ] == '0')
                KhoQwXkL++;
            else
                break;
        }
        for (WDc40C7taHZ = KhoQwXkL; dwLR01[WDc40C7taHZ] != '\0'; WDc40C7taHZ++) {
            printf ("%c", dwLR01[WDc40C7taHZ]);
        }
        printf ("\n");
    }
}

