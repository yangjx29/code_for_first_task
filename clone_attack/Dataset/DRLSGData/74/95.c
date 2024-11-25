void  main () {
    int ueIAK17czv, n, GlDyNeTB3AMK, VfwUcN9S, iiuhsw4 [(10147 - 147)] = {(504 - 504)}, ezu7RG = (778 - 778), q93PCTWVQLK2 = (338 - 337), aGdDcWts, uMkoV9a, ENBawu5dEWp, b, j4IhTUScHkZ, h23srak, sMUiLm, a [(10661 - 661)] = {(421 - 421)}, X7MPUu2zs, HYeQkE2hg0WL;
    scanf ("%d %d", &ueIAK17czv, &n);
    {
        GlDyNeTB3AMK = ueIAK17czv;
        while (GlDyNeTB3AMK <= n) {
            HYeQkE2hg0WL = (957 - 957);
            aGdDcWts = (631 - 631);
            ENBawu5dEWp = log10 (GlDyNeTB3AMK);
            {
                VfwUcN9S = ENBawu5dEWp;
                for (; (762 - 762) <= VfwUcN9S;) {
                    b = pow ((790 - 780), VfwUcN9S +(958 - 957));
                    j4IhTUScHkZ = pow ((260 - 250), VfwUcN9S);
                    h23srak = GlDyNeTB3AMK % b - GlDyNeTB3AMK % j4IhTUScHkZ;
                    sMUiLm = h23srak / j4IhTUScHkZ;
                    a[ENBawu5dEWp -VfwUcN9S] = sMUiLm;
                    VfwUcN9S = VfwUcN9S -(687 - 686);
                }
            }
            {
                VfwUcN9S = (624 - 624);
                while (ENBawu5dEWp >= VfwUcN9S) {
                    if (a[VfwUcN9S] == a[ENBawu5dEWp -VfwUcN9S])
                        HYeQkE2hg0WL = HYeQkE2hg0WL +(437 - 436);
                    else if (a[VfwUcN9S] != a[ENBawu5dEWp -VfwUcN9S])
                        break;
                    VfwUcN9S = VfwUcN9S +(841 - 840);
                }
            }
            if (!(ENBawu5dEWp +(45 - 44) != HYeQkE2hg0WL))
                aGdDcWts = (790 - 789);
            HYeQkE2hg0WL = (487 - 487);
            uMkoV9a = (451 - 451);
            VfwUcN9S = (707 - 705);
            for (; VfwUcN9S <= sqrt (GlDyNeTB3AMK);)
                if (GlDyNeTB3AMK % VfwUcN9S == 0) {
                    HYeQkE2hg0WL = (927 - 926);
                    break;
                }
                else
                    VfwUcN9S++;
            if (GlDyNeTB3AMK == (867 - 866))
                HYeQkE2hg0WL = (600 - 599);
            if (HYeQkE2hg0WL == 0)
                uMkoV9a = (68 - 67);
            if (aGdDcWts == (907 - 906) && uMkoV9a == (882 - 881)) {
                iiuhsw4[ezu7RG] = GlDyNeTB3AMK;
                ezu7RG++;
            }
            GlDyNeTB3AMK = GlDyNeTB3AMK +1;
        }
    }
    if (ezu7RG == 0)
        printf ("no\n");
    else {
        {
            GlDyNeTB3AMK = 0;
            while (GlDyNeTB3AMK < ezu7RG - 1) {
                printf ("%d,", iiuhsw4[GlDyNeTB3AMK]);
                GlDyNeTB3AMK = GlDyNeTB3AMK +1;
            }
        }
        printf ("%d\n", iiuhsw4[ezu7RG - 1]);
    }
}

