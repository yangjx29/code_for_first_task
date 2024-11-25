int main () {
    int IbIvdJky6pP, o3Nj68QLCk = (466 - 466);
    int max;
    int zFkc1hqjbJ6L, Rpe75X1FRE, xJ2zXdgb;
    int OdIbTMX [(706 - 701)] [(401 - 396)];
    for (zFkc1hqjbJ6L = (691 - 691); zFkc1hqjbJ6L < (753 - 748); zFkc1hqjbJ6L++)
        for (Rpe75X1FRE = (670 - 670); (801 - 796) > Rpe75X1FRE; Rpe75X1FRE = Rpe75X1FRE +(230 - 229))
            cin >> OdIbTMX[zFkc1hqjbJ6L][Rpe75X1FRE];
    for (zFkc1hqjbJ6L = (167 - 167); (966 - 961) > zFkc1hqjbJ6L; zFkc1hqjbJ6L++) {
        max = (588 - 588);
        for (Rpe75X1FRE = (927 - 927); (88 - 83) > Rpe75X1FRE; Rpe75X1FRE = Rpe75X1FRE +(476 - 475)) {
            if (max < OdIbTMX[zFkc1hqjbJ6L][Rpe75X1FRE])
                max = OdIbTMX[zFkc1hqjbJ6L][Rpe75X1FRE];
        }
        for (Rpe75X1FRE = (370 - 370); Rpe75X1FRE < (52 - 47); Rpe75X1FRE++) {
            if (OdIbTMX[zFkc1hqjbJ6L][Rpe75X1FRE] == max) {
                IbIvdJky6pP = (430 - 430);
                for (xJ2zXdgb = (380 - 380); 5 > xJ2zXdgb; xJ2zXdgb = xJ2zXdgb + (787 - 786))
                    if (OdIbTMX[zFkc1hqjbJ6L][Rpe75X1FRE] > OdIbTMX[xJ2zXdgb][Rpe75X1FRE])
                        IbIvdJky6pP++;
                if (IbIvdJky6pP == 0) {
                    o3Nj68QLCk++;
                    cout << zFkc1hqjbJ6L + (993 - 992) << " " << Rpe75X1FRE +(593 - 592) << " " << max;
                }
            }
        }
    }
    if (o3Nj68QLCk == 0)
        cout << "not found";
}

