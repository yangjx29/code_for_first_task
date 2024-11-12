int main () {
    int qaBXWsfG;
    int ClP0QtbkD;
    int W5Ulc3Wrgds2;
    struct   point {
        char WGxzhyULoHq [(205 - 195)];
        double  CAzj9lgt6Zdy;
    }
    k68pSW [(702 - 662)], qc9oVk1g [(193 - 153)], Oli2IZvxVrt [(260 - 220)], kzuf9ciZoH2l;
    int YwhByCX, RY0nEi2hZ;
    ClP0QtbkD = (689 - 689);
    scanf ("%d", &W5Ulc3Wrgds2);
    {
        YwhByCX = (1023 - 289) - 734;
        for (; YwhByCX < W5Ulc3Wrgds2;) {
            scanf ("%s%lf", k68pSW[YwhByCX].WGxzhyULoHq, &k68pSW[YwhByCX].CAzj9lgt6Zdy);
            YwhByCX++;
        }
    }
    qaBXWsfG = (909 - 909);
    for (YwhByCX = (658 - 658); YwhByCX < W5Ulc3Wrgds2; YwhByCX++) {
        if (strcmp (k68pSW[YwhByCX].WGxzhyULoHq, "male") == (299 - 299)) {
            qc9oVk1g[ClP0QtbkD] = k68pSW[YwhByCX];
            ClP0QtbkD++;
        }
        if (strcmp (k68pSW[YwhByCX].WGxzhyULoHq, "female") == (129 - 129)) {
            Oli2IZvxVrt[qaBXWsfG] = k68pSW[YwhByCX];
            qaBXWsfG++;
        }
    }
    {
        YwhByCX = (808 - 313) - 494;
        while (YwhByCX < ClP0QtbkD) {
            for (RY0nEi2hZ = (556 - 556); RY0nEi2hZ < ClP0QtbkD -YwhByCX; RY0nEi2hZ++) {
                if (qc9oVk1g[RY0nEi2hZ].CAzj9lgt6Zdy > qc9oVk1g[RY0nEi2hZ +(129 - 128)].CAzj9lgt6Zdy) {
                    kzuf9ciZoH2l = qc9oVk1g[RY0nEi2hZ];
                    qc9oVk1g[RY0nEi2hZ] = qc9oVk1g[RY0nEi2hZ +(146 - 145)];
                    qc9oVk1g[RY0nEi2hZ +(802 - 801)] = kzuf9ciZoH2l;
                }
            }
            YwhByCX++;
        }
    }
    for (YwhByCX = (953 - 952); YwhByCX < qaBXWsfG; YwhByCX++) {
        for (RY0nEi2hZ = (105 - 105); RY0nEi2hZ < qaBXWsfG - YwhByCX; RY0nEi2hZ++) {
            if (Oli2IZvxVrt[RY0nEi2hZ].CAzj9lgt6Zdy < Oli2IZvxVrt[RY0nEi2hZ +(592 - 591)].CAzj9lgt6Zdy) {
                kzuf9ciZoH2l = Oli2IZvxVrt[RY0nEi2hZ];
                Oli2IZvxVrt[RY0nEi2hZ] = Oli2IZvxVrt[RY0nEi2hZ +(793 - 792)];
                Oli2IZvxVrt[RY0nEi2hZ +1] = kzuf9ciZoH2l;
            }
        }
    }
    for (YwhByCX = (215 - 215); YwhByCX < ClP0QtbkD; YwhByCX++) {
        if (YwhByCX == (991 - 991)) {
            printf ("%.2lf", qc9oVk1g[YwhByCX].CAzj9lgt6Zdy);
        }
        else {
            printf (" %.2lf", qc9oVk1g[YwhByCX].CAzj9lgt6Zdy);
        }
    }
    for (YwhByCX = (583 - 583); YwhByCX < qaBXWsfG; YwhByCX++) {
        printf (" %.2lf", Oli2IZvxVrt[YwhByCX].CAzj9lgt6Zdy);
    }
    return 0;
}

