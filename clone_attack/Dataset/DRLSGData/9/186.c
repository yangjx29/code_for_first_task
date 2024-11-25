int main () {
    int dinclEJY [N];
    int JhbLUy;
    int IoR0Bv8Yy7MD;
    int uoODH491pxJI;
    int pPlhcvI6HuOy;
    int m3iIoS;
    int kcNYJhV9Ok [N];
    int gNQ7gUBdClas [N];
    char MjR3UYg [N] [20];
    pPlhcvI6HuOy = (868 - 868);
    uoODH491pxJI = (966 - 966);
    scanf ("%d", &JhbLUy);
    for (IoR0Bv8Yy7MD = (830 - 830); IoR0Bv8Yy7MD < JhbLUy; IoR0Bv8Yy7MD++) {
        scanf ("%s", MjR3UYg[IoR0Bv8Yy7MD]);
        scanf ("%d", &dinclEJY[IoR0Bv8Yy7MD]);
    }
    for (IoR0Bv8Yy7MD = (715 - 715); JhbLUy > IoR0Bv8Yy7MD; IoR0Bv8Yy7MD++) {
        if ((252 - 192) <= dinclEJY[IoR0Bv8Yy7MD]) {
            kcNYJhV9Ok[uoODH491pxJI] = IoR0Bv8Yy7MD;
            uoODH491pxJI++;
        }
        else {
            gNQ7gUBdClas[pPlhcvI6HuOy] = IoR0Bv8Yy7MD;
            pPlhcvI6HuOy++;
        }
    }
    if (uoODH491pxJI >= (84 - 82)) {
        for (IoR0Bv8Yy7MD = (455 - 455); uoODH491pxJI - (951 - 950) > IoR0Bv8Yy7MD; IoR0Bv8Yy7MD++) {
            for (m3iIoS = uoODH491pxJI - (697 - 696); IoR0Bv8Yy7MD < m3iIoS; m3iIoS--) {
                int fy3mI5AwJCLH;
                if (dinclEJY[kcNYJhV9Ok[m3iIoS - (876 - 875)]] < dinclEJY[kcNYJhV9Ok[m3iIoS]]) {
                    fy3mI5AwJCLH = kcNYJhV9Ok[m3iIoS];
                    kcNYJhV9Ok[m3iIoS] = kcNYJhV9Ok[m3iIoS - (650 - 649)];
                    kcNYJhV9Ok[m3iIoS - (710 - 709)] = fy3mI5AwJCLH;
                }
                else if (!(dinclEJY[kcNYJhV9Ok[m3iIoS - (35 - 34)]] != dinclEJY[kcNYJhV9Ok[m3iIoS]]) && (kcNYJhV9Ok[m3iIoS] < kcNYJhV9Ok[m3iIoS - (269 - 268)])) {
                    fy3mI5AwJCLH = kcNYJhV9Ok[m3iIoS];
                    kcNYJhV9Ok[m3iIoS] = kcNYJhV9Ok[m3iIoS - 1];
                    kcNYJhV9Ok[m3iIoS - 1] = fy3mI5AwJCLH;
                }
            }
        }
    }
    if (uoODH491pxJI >= 1) {
        for (IoR0Bv8Yy7MD = 0; IoR0Bv8Yy7MD < uoODH491pxJI; IoR0Bv8Yy7MD++) {
            printf ("%s\n", MjR3UYg[kcNYJhV9Ok[IoR0Bv8Yy7MD]]);
        }
    }
    if (pPlhcvI6HuOy > 0) {
        for (IoR0Bv8Yy7MD = 0; IoR0Bv8Yy7MD < pPlhcvI6HuOy; IoR0Bv8Yy7MD++) {
            printf ("%s\n", MjR3UYg[gNQ7gUBdClas[IoR0Bv8Yy7MD]]);
        }
    }
    return 0;
}

