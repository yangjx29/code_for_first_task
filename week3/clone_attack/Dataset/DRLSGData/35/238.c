int main () {
    int i8qVpgj5x, a1th7mMXf, L04oKLHRpb [(547 - 539)] [(695 - 687)], RPCrbE, VqlMamN, uzywFGPO, RMeYs4WZPDy, mjRTqLxyH85, gH7tsqTh = (818 - 818), KI7sh4OK, xKxGHRajtJe0;
    scanf ("%d,%d", &i8qVpgj5x, &a1th7mMXf);
    {
        RPCrbE = 109 - 109;
        while (RPCrbE < i8qVpgj5x) {
            for (VqlMamN = (264 - 264); VqlMamN < a1th7mMXf; VqlMamN++) {
                scanf ("%d", &L04oKLHRpb[RPCrbE][VqlMamN]);
            }
            RPCrbE++;
        }
    }
    {
        RPCrbE = 440 - 440;
        while (RPCrbE < i8qVpgj5x) {
            uzywFGPO = L04oKLHRpb[RPCrbE][(922 - 922)];
            mjRTqLxyH85 = (692 - 692);
            {
                VqlMamN = 346 - 345;
                while (VqlMamN < a1th7mMXf) {
                    if (L04oKLHRpb[RPCrbE][VqlMamN] > uzywFGPO) {
                        uzywFGPO = L04oKLHRpb[RPCrbE][VqlMamN];
                        mjRTqLxyH85 = VqlMamN;
                    }
                    VqlMamN++;
                }
            }
            xKxGHRajtJe0 = (892 - 892);
            for (KI7sh4OK = 0; KI7sh4OK < i8qVpgj5x; KI7sh4OK++) {
                RMeYs4WZPDy = uzywFGPO;
                if (L04oKLHRpb[KI7sh4OK][mjRTqLxyH85] < RMeYs4WZPDy) {
                    xKxGHRajtJe0++;
                }
            }
            if (xKxGHRajtJe0 == 0) {
                printf ("%d+%d", RPCrbE, mjRTqLxyH85);
            }
            else {
                gH7tsqTh++;
            }
            RPCrbE++;
        }
    }
    if (gH7tsqTh == i8qVpgj5x) {
        printf ("No");
    }
    return 0;
}

