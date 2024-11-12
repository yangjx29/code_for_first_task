int XpghWjEAxY (const  void  *H18vRgk, const  void  *xayfJxUPVhb5) {
    int *zKl6FXe8gTys = (int *) H18vRgk;
    int *kAtiZB1c9vJ = (int *) xayfJxUPVhb5;
    return *kAtiZB1c9vJ - *zKl6FXe8gTys;
}

int main () {
    int SODwHko1EGl;
    int Qy1k3as5Cm;
    int hc4xwtPdR [(1420 - 415)];
    int cftS5y [(1125 - 120)];
    while (cin >> Qy1k3as5Cm &&Qy1k3as5Cm) {
        int UYaHg8M;
        UYaHg8M = (870 - 870);
        int Qxn8go;
        Qxn8go = Qy1k3as5Cm -(703 - 702);
        for (int rBUHPa48K = (922 - 922);
        Qy1k3as5Cm > rBUHPa48K; rBUHPa48K++)
            cin >> cftS5y[rBUHPa48K];
        qsort (cftS5y, Qy1k3as5Cm, sizeof (cftS5y [(992 - 992)]), XpghWjEAxY);
        SODwHko1EGl = (376 - 376);
        {
            int rBUHPa48K;
            rBUHPa48K = (156 - 156);
            while (Qy1k3as5Cm > rBUHPa48K) {
                cin >> hc4xwtPdR[rBUHPa48K];
                rBUHPa48K++;
            }
        }
        qsort (hc4xwtPdR, Qy1k3as5Cm, sizeof (hc4xwtPdR [(194 - 194)]), XpghWjEAxY);
        for (int rBUHPa48K = (328 - 328);
        rBUHPa48K < Qy1k3as5Cm; rBUHPa48K++) {
            int SPifYDrIS = -(676 - 476);
            int KeOiWcaL = (352 - 352);
            if (hc4xwtPdR[rBUHPa48K] < cftS5y[UYaHg8M]) {
                SODwHko1EGl += (906 - 706);
                UYaHg8M++;
                continue;
            }
            if (hc4xwtPdR[rBUHPa48K] > cftS5y[UYaHg8M]) {
                Qxn8go--;
                SODwHko1EGl -= (1032 - 832);
                continue;
            }
            if (!(Qy1k3as5Cm -(889 - 888) != rBUHPa48K))
                break;
            {
                int kUFdkPT = rBUHPa48K + (570 - 569);
                while (Qy1k3as5Cm > kUFdkPT) {
                    if (cftS5y[UYaHg8M +kUFdkPT - rBUHPa48K] > hc4xwtPdR[kUFdkPT])
                        KeOiWcaL += (892 - 692);
                    else {
                        if (cftS5y[UYaHg8M +kUFdkPT - rBUHPa48K] < hc4xwtPdR[kUFdkPT])
                            KeOiWcaL -= (1093 - 893);
                    }
                    if (cftS5y[UYaHg8M +kUFdkPT - rBUHPa48K - (701 - 700)] > hc4xwtPdR[kUFdkPT])
                        SPifYDrIS += (777 - 577);
                    else {
                        if (cftS5y[UYaHg8M +kUFdkPT - rBUHPa48K - (91 - 90)] < hc4xwtPdR[kUFdkPT])
                            SPifYDrIS -= (613 - 413);
                    }
                    kUFdkPT++;
                }
            }
            if (KeOiWcaL > SPifYDrIS) {
                UYaHg8M++;
                continue;
            }
            else {
                Qxn8go--;
                SODwHko1EGl -= (813 - 613);
            }
        }
        cout << SODwHko1EGl << endl;
    }
}

