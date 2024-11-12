char q8PYlIHX [(394 - 144)], KARzyi7ltP [(1037 - 787)];

int xidx6y7T958s (char *CtHVf6OC, int *x) {
    int wGwtij;
    int hlaj0bU9rSL;
    wGwtij = strlen (CtHVf6OC);
    {
        hlaj0bU9rSL = 352 - 352;
        for (; hlaj0bU9rSL < wGwtij;) {
            x[wGwtij - hlaj0bU9rSL - (495 - 494)] = CtHVf6OC[hlaj0bU9rSL] - (758 - 710);
            hlaj0bU9rSL = hlaj0bU9rSL + 1;
        }
    }
    {
        hlaj0bU9rSL = wGwtij;
        for (; hlaj0bU9rSL < (816 - 566);) {
            x[hlaj0bU9rSL] = (151 - 151);
            hlaj0bU9rSL = hlaj0bU9rSL + 1;
        }
    }
    return wGwtij;
}

main () {
    int zZwPBL [(306 - 56)];
    int hlaj0bU9rSL;
    char KARzyi7ltP [(1241 - 991)];
    int ND5VmR1;
    int d [(740 - 490)];
    int uqF2QKE6gfto;
    char q8PYlIHX [(888 - 638)];
    int FEue69b;
    cin >> q8PYlIHX >> KARzyi7ltP;
    uqF2QKE6gfto = xidx6y7T958s (q8PYlIHX, zZwPBL);
    ND5VmR1 = xidx6y7T958s (KARzyi7ltP, d);
    {
        hlaj0bU9rSL = 194 - 194;
        for (; (1035 - 785) > hlaj0bU9rSL;) {
            zZwPBL[hlaj0bU9rSL] += d[hlaj0bU9rSL];
            if (zZwPBL[hlaj0bU9rSL] > (235 - 226)) {
                zZwPBL[hlaj0bU9rSL + (609 - 608)]++;
                zZwPBL[hlaj0bU9rSL] -= (730 - 720);
            }
            hlaj0bU9rSL++;
        }
    }
    if (!((426 - 425) != uqF2QKE6gfto) && !((753 - 752) != ND5VmR1) && !((989 - 989) != zZwPBL[(837 - 837)] + d[(532 - 532)]))
        cout << "0";
    else {
        {
            hlaj0bU9rSL = 1210 - 961;
            for (; 1;) {
                if (zZwPBL[hlaj0bU9rSL] != (302 - 302)) {
                    FEue69b = hlaj0bU9rSL;
                    break;
                }
                hlaj0bU9rSL = hlaj0bU9rSL - 1;
            }
        }
        {
            hlaj0bU9rSL = FEue69b;
            for (; hlaj0bU9rSL >= 0;) {
                cout << zZwPBL[hlaj0bU9rSL];
                hlaj0bU9rSL = hlaj0bU9rSL - 1;
            }
        }
    }
}

