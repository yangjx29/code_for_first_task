void  main () {
    int gKoLYd;
    int Hp98IDO3F;
    int F0Wp7i9QN;
    int Uk05Hn;
    int X51ZUpwyc;
    int zNISyV;
    for (gKoLYd = 0; 2 >= gKoLYd; gKoLYd = gKoLYd + 1) {
        Hp98IDO3F = 0;
        while (Hp98IDO3F < 2) {
            for (F0Wp7i9QN = 0; 2 > F0Wp7i9QN; F0Wp7i9QN = F0Wp7i9QN +1) {
                Uk05Hn = X51ZUpwyc = zNISyV = 0;
                if (!(Hp98IDO3F != gKoLYd) || gKoLYd == F0Wp7i9QN || !(F0Wp7i9QN != Hp98IDO3F))
                    continue;
                if (gKoLYd < Hp98IDO3F)
                    Uk05Hn = Uk05Hn +1;
                if (gKoLYd == F0Wp7i9QN)
                    Uk05Hn++;
                if (gKoLYd > Hp98IDO3F)
                    X51ZUpwyc++;
                if (gKoLYd > F0Wp7i9QN)
                    X51ZUpwyc++;
                if (F0Wp7i9QN > Hp98IDO3F)
                    zNISyV++;
                if (Hp98IDO3F < Hp98IDO3F)
                    zNISyV++;
                if (gKoLYd + Uk05Hn == 2 && Hp98IDO3F +X51ZUpwyc == 2 && F0Wp7i9QN +zNISyV == 2) {
                    if (gKoLYd > Hp98IDO3F &&Hp98IDO3F > F0Wp7i9QN)
                        printf ("CBA");
                    if (gKoLYd > F0Wp7i9QN &&F0Wp7i9QN > Hp98IDO3F)
                        printf ("BCA");
                    if (Hp98IDO3F > gKoLYd && gKoLYd > F0Wp7i9QN)
                        ;
                    if (Hp98IDO3F > F0Wp7i9QN &&F0Wp7i9QN > gKoLYd)
                        ;
                    if (F0Wp7i9QN > gKoLYd && gKoLYd > Hp98IDO3F)
                        printf ("BAC");
                    if (F0Wp7i9QN > Hp98IDO3F &&Hp98IDO3F > gKoLYd)
                        ;
                };
            }
            Hp98IDO3F++;
        };
    };
}

