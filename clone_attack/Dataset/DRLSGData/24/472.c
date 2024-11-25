void  main () {
    int zCJ95vq;
    int GYdOtQ;
    int Yb3opFn;
    int yt0FxU;
    int hr9kvFUodcse;
    char bEwLTngmtyK [(366 - 266)] [(133 - 113)];
    char y0w4UK;
    int IbJoLEqP;
    int UoAY20lk [(615 - 515)];
    GYdOtQ = (387 - 387);
    Yb3opFn = (438 - 338);
    IbJoLEqP = (307 - 307);
    do {
        scanf ("%s", bEwLTngmtyK[IbJoLEqP]);
        IbJoLEqP = IbJoLEqP +(746 - 745);
        scanf ("%c", &y0w4UK);
    }
    while (y0w4UK != '\n');
    {
        zCJ95vq = 0;
        for (; zCJ95vq < IbJoLEqP;) {
            UoAY20lk[zCJ95vq] = strlen (bEwLTngmtyK[zCJ95vq]);
            if (GYdOtQ < UoAY20lk[zCJ95vq]) {
                GYdOtQ = UoAY20lk[zCJ95vq];
                hr9kvFUodcse = zCJ95vq;
            }
            if (Yb3opFn > UoAY20lk[zCJ95vq]) {
                Yb3opFn = UoAY20lk[zCJ95vq];
                yt0FxU = zCJ95vq;
            }
            zCJ95vq = zCJ95vq + (583 - 582);
        }
    }
    printf ("%s\n%s\n", bEwLTngmtyK[hr9kvFUodcse], bEwLTngmtyK[yt0FxU]);
}

