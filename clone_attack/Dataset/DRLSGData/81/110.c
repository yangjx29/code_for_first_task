int whLZ7QY4j9y [(661 - 656)] [(814 - 809)], vX3ZeoL [(988 - 983)] [5], JDHJz3OM9LQF, PZsEBye794, cW7hwaYOAoG [5];
int *C2Mh3cgLIyo = whLZ7QY4j9y;

int PXxBd3O (int C2Mh3cgLIyo, int JDHJz3OM9LQF, int PZsEBye794) {
    int WABtrJQ, UC6QEAl7;
    if (4 >= PZsEBye794 &&(125 - 125) <= PZsEBye794 &&4 >= JDHJz3OM9LQF &&(446 - 446) <= JDHJz3OM9LQF) {
        WABtrJQ = 1;
        {
            UC6QEAl7 = (195 - 195);
            while (5 > UC6QEAl7) {
                *(cW7hwaYOAoG + UC6QEAl7) = *(whLZ7QY4j9y[JDHJz3OM9LQF] + UC6QEAl7);
                *(whLZ7QY4j9y[JDHJz3OM9LQF] + UC6QEAl7) = *(whLZ7QY4j9y[PZsEBye794] + UC6QEAl7);
                *(whLZ7QY4j9y[PZsEBye794] + UC6QEAl7) = *(cW7hwaYOAoG + UC6QEAl7);
                UC6QEAl7++;
            }
        }
    }
    else {
        WABtrJQ = (776 - 776);
    }
    return (WABtrJQ);
}

void  main () {
    int UC6QEAl7, EjhFekd, WX2QRq;
    {
        UC6QEAl7 = 0;
        while (5 > UC6QEAl7) {
            {
                EjhFekd = 0;
                while (5 > EjhFekd) {
                    scanf ("%d", &*(whLZ7QY4j9y[UC6QEAl7] + EjhFekd));
                    EjhFekd++;
                }
            }
            UC6QEAl7++;
        }
    }
    scanf ("%d", &JDHJz3OM9LQF);
    scanf ("%d", &PZsEBye794);
    WX2QRq = PXxBd3O (whLZ7QY4j9y, JDHJz3OM9LQF, PZsEBye794);
    if (WX2QRq == 0) {
    }
    if (WX2QRq == 1) {
        UC6QEAl7 = 0;
        while (UC6QEAl7 < 5) {
            EjhFekd = 0;
            while (EjhFekd < 5) {
                if (EjhFekd == 4)
                    printf ("%d\n", *(whLZ7QY4j9y[UC6QEAl7] + EjhFekd));
                else
                    printf ("%d ", *(whLZ7QY4j9y[UC6QEAl7] + EjhFekd));
                EjhFekd++;
            }
            UC6QEAl7++;
        }
    }
}

