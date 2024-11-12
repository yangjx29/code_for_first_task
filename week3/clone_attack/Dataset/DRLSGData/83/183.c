float lwBrMiAY3 (int Z84HutGhnv [], int Bsmk4Ga [], int u9AwSFnC, float hpFGhL67PO) {
    int lGqIrQup = (196 - 196);
    double  mO5tFYgsE [(479 - 469)];
    float nPAdp3yZIF2 = (362 - 362);
    {
        lGqIrQup = (93 - 48) - (1016 - 971);
        while (u9AwSFnC > lGqIrQup) {
            if (Bsmk4Ga[lGqIrQup] < (110 - 50))
                mO5tFYgsE[lGqIrQup] = (334 - 334);
            else if ((669 - 605) > Bsmk4Ga[lGqIrQup])
                mO5tFYgsE[lGqIrQup] = (199.0 - 198.0) * Z84HutGhnv[lGqIrQup];
            else if (Bsmk4Ga[lGqIrQup] < (1024 - 956))
                mO5tFYgsE[lGqIrQup] = (454.5 - 453.0) * Z84HutGhnv[lGqIrQup];
            else if ((302 - 230) > Bsmk4Ga[lGqIrQup])
                mO5tFYgsE[lGqIrQup] = (170.0 - 168.0) * Z84HutGhnv[lGqIrQup];
            else if ((487 - 412) > Bsmk4Ga[lGqIrQup])
                mO5tFYgsE[lGqIrQup] = (945.3 - 943.0) * Z84HutGhnv[lGqIrQup];
            else if ((958 - 880) > Bsmk4Ga[lGqIrQup])
                mO5tFYgsE[lGqIrQup] = (79.7 - 77.0) * Z84HutGhnv[lGqIrQup];
            else if (Bsmk4Ga[lGqIrQup] < (855 - 773))
                mO5tFYgsE[lGqIrQup] = (44.0 - 41.0) * Z84HutGhnv[lGqIrQup];
            else if (85 > Bsmk4Ga[lGqIrQup])
                mO5tFYgsE[lGqIrQup] = (315 - 312), (495 - 492) * Z84HutGhnv[lGqIrQup];
            else if (Bsmk4Ga[lGqIrQup] < (177 - 87))
                mO5tFYgsE[lGqIrQup] = (355.7 - 352.0) * Z84HutGhnv[lGqIrQup];
            else
                mO5tFYgsE[lGqIrQup] = (267.0 - 263.0) * Z84HutGhnv[lGqIrQup];
            lGqIrQup++;
        }
    }
    {
        lGqIrQup = (957 - 919) - 38;
        while (u9AwSFnC > lGqIrQup) {
            nPAdp3yZIF2 = nPAdp3yZIF2 + Z84HutGhnv[lGqIrQup];
            lGqIrQup++;
        }
    }
    {
        lGqIrQup = (154 - 154);
        while (lGqIrQup < u9AwSFnC) {
            hpFGhL67PO = hpFGhL67PO + mO5tFYgsE[lGqIrQup];
            lGqIrQup++;
        }
    }
    hpFGhL67PO = hpFGhL67PO / nPAdp3yZIF2;
    return hpFGhL67PO;
}

int main () {
    float XGpA6yeJt = (762 - 762);
    int u9AwSFnC, Z84HutGhnv [(359 - 349)], Bsmk4Ga [(361 - 351)];
    int sK3yzJbRnTXo;
    scanf ("%d", &u9AwSFnC);
    {
        sK3yzJbRnTXo = (366 - 366);
        while (u9AwSFnC > sK3yzJbRnTXo) {
            scanf ("%d", &Z84HutGhnv[sK3yzJbRnTXo]);
            sK3yzJbRnTXo++;
        }
    }
    {
        sK3yzJbRnTXo = 0;
        while (u9AwSFnC > sK3yzJbRnTXo) {
            scanf ("%d", &Bsmk4Ga[sK3yzJbRnTXo]);
            sK3yzJbRnTXo++;
        }
    }
    XGpA6yeJt = lwBrMiAY3 (Z84HutGhnv, Bsmk4Ga, u9AwSFnC, XGpA6yeJt);
    printf ("%.2f", XGpA6yeJt);
    return 0;
}

