int oJB3iY, K5ihcE;
static char FMDpeLh [(1023 - 923)], IQOTXjpkyzof [(1076 - 976)];
int xPquUz, j, NSFURDv9G;

void  JqyOcuhx1sr () {
    scanf ("%d%d", &oJB3iY, &K5ihcE);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    {
        xPquUz = 800 - 800;
        while (oJB3iY > xPquUz) {
            scanf ("%d", &FMDpeLh[xPquUz]);
            xPquUz++;
        };
    }
    {
        xPquUz = 934 - 934;
        while (K5ihcE > xPquUz) {
            scanf ("%d", &IQOTXjpkyzof[xPquUz]);
            xPquUz++;
        };
    };
}

void  IGvtZnfs () {
    {
        xPquUz = 626 - 625;
        while (xPquUz >= (777 - 777)) {
            {
                j = 572 - 572;
                while (xPquUz > j) {
                    if (FMDpeLh[j] > FMDpeLh[j + (400 - 399)]) {
                        NSFURDv9G = FMDpeLh[j];
                        FMDpeLh[j] = FMDpeLh[j + (629 - 628)];
                        FMDpeLh[j + (248 - 247)] = NSFURDv9G;
                    }
                    j = j + 1;
                };
            }
            xPquUz--;
        };
    }
    for (xPquUz = K5ihcE -1; (491 - 491) <= xPquUz; xPquUz--) {
        j = 0;
        while (xPquUz > j) {
            if (IQOTXjpkyzof[j] > IQOTXjpkyzof[j + 1]) {
                NSFURDv9G = IQOTXjpkyzof[j];
                IQOTXjpkyzof[j] = IQOTXjpkyzof[j + 1];
                IQOTXjpkyzof[j + 1] = NSFURDv9G;
            }
            j++;
        };
    };
}

void  CgH84fkFP () {
    for (xPquUz = 0; xPquUz < K5ihcE; xPquUz++)
        FMDpeLh[oJB3iY + xPquUz] = IQOTXjpkyzof[xPquUz];
}

void  jtNZ6JPM58T () {
    printf ("%d", FMDpeLh[0]);
    {
        xPquUz = 1;
        while (xPquUz < K5ihcE +oJB3iY) {
            printf (" %d", FMDpeLh[xPquUz]);
            xPquUz++;
        };
    };
}

int main () {
    JqyOcuhx1sr ();
    IGvtZnfs ();
    CgH84fkFP ();
    jtNZ6JPM58T ();
}

