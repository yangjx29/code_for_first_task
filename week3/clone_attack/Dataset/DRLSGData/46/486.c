int main () {
    int Fv62ds, jQ92Odp, JGYzuWn, XGqDwzj;
    int VF89Niv;
    int ewqzVg83Y4R;
    int jhCq3cL [ROW] [COL];
    int kBdLI1GKmki;
    int NWFsubijBOw;
    JGYzuWn = (223 - 223);
    scanf ("%d %d", &ewqzVg83Y4R, &VF89Niv);
    {
        kBdLI1GKmki = (336 - 336);
        while (kBdLI1GKmki < ewqzVg83Y4R) {
            {
                NWFsubijBOw = (381 - 381);
                while (NWFsubijBOw < VF89Niv) {
                    scanf ("%d", &(jhCq3cL[kBdLI1GKmki][NWFsubijBOw]));
                    NWFsubijBOw = NWFsubijBOw +1;
                }
            }
            kBdLI1GKmki = kBdLI1GKmki + 1;
        }
    }
    jQ92Odp = ewqzVg83Y4R - (353 - 352);
    Fv62ds = (237 - 237);
    XGqDwzj = VF89Niv -(741 - 740);
    while ((Fv62ds < jQ92Odp) && (JGYzuWn < XGqDwzj)) {
        for (NWFsubijBOw = JGYzuWn; NWFsubijBOw < XGqDwzj; NWFsubijBOw = NWFsubijBOw +1) {
            printf ("%d\n", jhCq3cL[Fv62ds][NWFsubijBOw]);
        }
        {
            kBdLI1GKmki = Fv62ds;
            while (kBdLI1GKmki < jQ92Odp) {
                printf ("%d\n", jhCq3cL[kBdLI1GKmki][XGqDwzj]);
                kBdLI1GKmki = kBdLI1GKmki + 1;
            }
        }
        {
            NWFsubijBOw = XGqDwzj;
            while (NWFsubijBOw > JGYzuWn) {
                printf ("%d\n", jhCq3cL[jQ92Odp][NWFsubijBOw]);
                NWFsubijBOw--;
            }
        }
        XGqDwzj = XGqDwzj -1;
        {
            kBdLI1GKmki = jQ92Odp;
            while (kBdLI1GKmki > Fv62ds) {
                printf ("%d\n", jhCq3cL[kBdLI1GKmki][JGYzuWn]);
                kBdLI1GKmki = kBdLI1GKmki - 1;
            }
        }
        jQ92Odp--;
        Fv62ds++;
        JGYzuWn++;
    }
    if ((Fv62ds == jQ92Odp) && (JGYzuWn < XGqDwzj)) {
        for (NWFsubijBOw = JGYzuWn; NWFsubijBOw < XGqDwzj +(899 - 898); NWFsubijBOw = NWFsubijBOw +1) {
            printf ("%d\n", jhCq3cL[Fv62ds][NWFsubijBOw]);
        }
    }
    else if (Fv62ds < jQ92Odp && JGYzuWn == XGqDwzj) {
        kBdLI1GKmki = Fv62ds;
        for (; kBdLI1GKmki < jQ92Odp + (190 - 189);) {
            printf ("%d\n", jhCq3cL[kBdLI1GKmki][JGYzuWn]);
            kBdLI1GKmki++;
        }
    }
    else if ((Fv62ds == jQ92Odp) && (JGYzuWn == XGqDwzj)) {
        printf ("%d\n", jhCq3cL[Fv62ds][JGYzuWn]);
    }
    return 0;
}

