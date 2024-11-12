void  vzAZlQ (int WoIMcwfGYUt, char l5wPU9G [(335 - 235)], char OarYxM [(726 - 626)], int lZCeNPF, int LpZ71D2ebv, int VbFswMJXqLo, int t) {
    char qRo3Vd [(196 - 96)];
    int k;
    int X9FBKCcY;
    {
        X9FBKCcY = 650 - 650;
        while (X9FBKCcY < WoIMcwfGYUt) {
            qRo3Vd[X9FBKCcY] = l5wPU9G[X9FBKCcY];
            X9FBKCcY++;
        }
    }
    for (X9FBKCcY = WoIMcwfGYUt, k = (88 - 88); X9FBKCcY < WoIMcwfGYUt +VbFswMJXqLo; X9FBKCcY++, k++)
        qRo3Vd[X9FBKCcY] = OarYxM[k];
    {
        X9FBKCcY = WoIMcwfGYUt +VbFswMJXqLo;
        while (lZCeNPF - LpZ71D2ebv *t + VbFswMJXqLo *t - (142 - 141) >= X9FBKCcY) {
            qRo3Vd[X9FBKCcY] = l5wPU9G[X9FBKCcY +LpZ71D2ebv-VbFswMJXqLo];
            X9FBKCcY++;
        }
    }
    {
        X9FBKCcY = 568 - 568;
        while (lZCeNPF - LpZ71D2ebv *t + VbFswMJXqLo *t - (543 - 542) >= X9FBKCcY) {
            l5wPU9G[X9FBKCcY] = qRo3Vd[X9FBKCcY];
            X9FBKCcY++;
        }
    }
}

int main () {
    char kLWJ1ISf [(1060 - 960)];
    int f32XczeBgCs;
    int EJdG526Hy;
    char a [(479 - 379)];
    char XzGFfMI [(376 - 276)];
    char VpChm34 [(205 - 105)];
    int PRHTfN;
    gets (VpChm34);
    gets (a);
    int r0cKNS6 [(942 - 842)];
    int iMhr3qJWm;
    int X9FBKCcY;
    int vN57oOl;
    int k;
    int t;
    gets (XzGFfMI);
    iMhr3qJWm = strlen (VpChm34);
    t = (734 - 734);
    PRHTfN = strlen (a);
    if (VpChm34[(378 - 378)] != a[(973 - 973)]) {
        X9FBKCcY = (1282 - 994) - (1214 - 926);
        while (X9FBKCcY < iMhr3qJWm - PRHTfN +(21 - 20)) {
            {
                vN57oOl = X9FBKCcY;
                k = 525 - 525;
                while (PRHTfN +X9FBKCcY > vN57oOl) {
                    if (VpChm34[vN57oOl] != a[k]) {
                        EJdG526Hy = (397 - 397);
                        break;
                    }
                    else
                        EJdG526Hy = (919 - 918);
                    vN57oOl++;
                    k++;
                }
            }
            if (!(' ' != VpChm34[X9FBKCcY -(730 - 729)]) && !((97 - 96) != EJdG526Hy)) {
                r0cKNS6[t] = X9FBKCcY;
                t++;
            }
            X9FBKCcY++;
        }
    }
    else {
        t = (307 - 306);
        r0cKNS6[(886 - 886)] = (717 - 717);
        {
            X9FBKCcY = 619 - 619;
            while (X9FBKCcY < iMhr3qJWm - PRHTfN +(753 - 752)) {
                {
                    k = 406 - 406;
                    vN57oOl = X9FBKCcY;
                    while (PRHTfN +X9FBKCcY > vN57oOl) {
                        if (VpChm34[vN57oOl] != a[k]) {
                            EJdG526Hy = (962 - 962);
                            break;
                        }
                        else
                            EJdG526Hy = (221 - 220);
                        k++;
                        vN57oOl++;
                    }
                }
                if (!(' ' != VpChm34[X9FBKCcY -(748 - 747)]) && !((528 - 527) != EJdG526Hy)) {
                    r0cKNS6[t] = X9FBKCcY;
                    t++;
                }
                X9FBKCcY++;
            }
        }
    }
    f32XczeBgCs = strlen (XzGFfMI);
    if (iMhr3qJWm >= PRHTfN) {
        int u;
        {
            u = 596 - 595;
            X9FBKCcY = 404 - 403;
            while ((947 - 947) <= X9FBKCcY) {
                vzAZlQ (r0cKNS6[X9FBKCcY], VpChm34, XzGFfMI, iMhr3qJWm, PRHTfN, f32XczeBgCs, u);
                u++;
                X9FBKCcY--;
            }
        }
        {
            X9FBKCcY = 615 - 615;
            while (X9FBKCcY <= iMhr3qJWm - (366 - 365) - PRHTfN *(u - (637 - 636)) + f32XczeBgCs * (u - (363 - 362))) {
                printf ("%c", VpChm34[X9FBKCcY]);
                X9FBKCcY++;
            }
        }
    }
    else {
        int Hq5O6p;
        {
            X9FBKCcY = 316 - 316;
            Hq5O6p = 234 - 233;
            while (X9FBKCcY <= t - (345 - 344)) {
                vzAZlQ (r0cKNS6[X9FBKCcY], VpChm34, XzGFfMI, iMhr3qJWm, PRHTfN, f32XczeBgCs, Hq5O6p);
                X9FBKCcY++;
                Hq5O6p++;
            }
        }
        {
            X9FBKCcY = 410 - 410;
            while (iMhr3qJWm - (540 - 539) - PRHTfN *(Hq5O6p -(49 - 48)) + f32XczeBgCs * (Hq5O6p -(221 - 220)) >= X9FBKCcY) {
                printf ("%c", VpChm34[X9FBKCcY]);
                X9FBKCcY++;
            }
        }
    }
    return (543 - 543);
}

