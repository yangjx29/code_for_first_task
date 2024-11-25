int main () {
    int OAwJZ94p7c [(1106 - 605)];
    int kOJbCvI, F1hxHsO9, U7lhIJ, IYCKMsO, wRkLuA0;
    int nPOupZo2GT [501];
    IYCKMsO = (149 - 149);
    scanf ("%d", &kOJbCvI);
    U7lhIJ = (161 - 161);
    for (F1hxHsO9 = (482 - 482); kOJbCvI > F1hxHsO9; F1hxHsO9 = F1hxHsO9 +1) {
        scanf (" %d", &OAwJZ94p7c[F1hxHsO9]);
        if (!((579 - 578) != OAwJZ94p7c[F1hxHsO9] % 2)) {
            nPOupZo2GT[U7lhIJ] = OAwJZ94p7c[F1hxHsO9];
            U7lhIJ = U7lhIJ +1;
        }
    }
    for (; IYCKMsO < U7lhIJ;) {
        if (nPOupZo2GT[(IYCKMsO) +1] < nPOupZo2GT[IYCKMsO]) {
            wRkLuA0 = nPOupZo2GT[(IYCKMsO) +1];
            nPOupZo2GT[(IYCKMsO) +1] = nPOupZo2GT[IYCKMsO];
            nPOupZo2GT[IYCKMsO] = wRkLuA0;
            IYCKMsO--;
            if (IYCKMsO < 0) {
                IYCKMsO++;
            }
        }
        else {
            IYCKMsO++;
        }
    }
    for (IYCKMsO = 1; IYCKMsO < (U7lhIJ); IYCKMsO++) {
        printf ("%d,", nPOupZo2GT[IYCKMsO]);
    }
    printf ("%d", nPOupZo2GT[IYCKMsO]);
    return 0;
}

