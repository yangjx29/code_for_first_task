int main () {
    int TMVWf8;
    scanf ("%d", &TMVWf8);
    int iNJeSFsEY2nU [100000];
    int LS917Keg68jC, pkKx9Adw6S, kxKQIT0rwgzO, iDi6RYst5np;
    for (LS917Keg68jC = 0; 1 > LS917Keg68jC; LS917Keg68jC = LS917Keg68jC +1) {
        scanf ("%d", &iNJeSFsEY2nU[LS917Keg68jC]);
        pkKx9Adw6S = iNJeSFsEY2nU[0];
    }
    for (LS917Keg68jC = 1; LS917Keg68jC < 2; LS917Keg68jC = LS917Keg68jC +1) {
        scanf ("%d", &iNJeSFsEY2nU[LS917Keg68jC]);
        kxKQIT0rwgzO = iNJeSFsEY2nU[LS917Keg68jC];
        if (kxKQIT0rwgzO >= pkKx9Adw6S) {
            iDi6RYst5np = pkKx9Adw6S;
            pkKx9Adw6S = kxKQIT0rwgzO;
        }
        else {
            iDi6RYst5np = kxKQIT0rwgzO;
        }
    }
    for (LS917Keg68jC = 2; LS917Keg68jC < TMVWf8; LS917Keg68jC = LS917Keg68jC +1) {
        scanf ("%d", &iNJeSFsEY2nU[LS917Keg68jC]);
        kxKQIT0rwgzO = iNJeSFsEY2nU[LS917Keg68jC];
        if (pkKx9Adw6S <= kxKQIT0rwgzO) {
            iDi6RYst5np = pkKx9Adw6S;
            pkKx9Adw6S = kxKQIT0rwgzO;
        }
        else if (kxKQIT0rwgzO < pkKx9Adw6S && kxKQIT0rwgzO >= iDi6RYst5np) {
            iDi6RYst5np = kxKQIT0rwgzO;
        }
        else {
            pkKx9Adw6S = pkKx9Adw6S;
            iDi6RYst5np = iDi6RYst5np;
        }
    }
    printf ("%d\n%d", pkKx9Adw6S, iDi6RYst5np);
    return 0;
}

