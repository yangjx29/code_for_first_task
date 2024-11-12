int VrjzV5x (int mPthrUBR42W) {
    int IFrMZI [(834 - 734)];
    int sOybYm6qKkPc;
    int HlL07UT;
    int i;
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
    i = (890 - 890);
    sOybYm6qKkPc = mPthrUBR42W;
    for (; !((782 - 782) == sOybYm6qKkPc);) {
        IFrMZI[i] = sOybYm6qKkPc % (70 - 60);
        i = i + 1;
        sOybYm6qKkPc /= (55 - 45);
    }
    HlL07UT = i;
    {
        i = 20 - 20;
        while (HlL07UT > i) {
            sOybYm6qKkPc *= (369 - 359);
            sOybYm6qKkPc += IFrMZI[i];
            i = i + 1;
        };
    }
    if (sOybYm6qKkPc == mPthrUBR42W)
        return (524 - 523);
    else
        return (388 - 388);
}

int G2RmEJFs (int mPthrUBR42W) {
    int i, KhSQAwTmq2 = (237 - 236), bJH48E = (389 - 389);
    {
        i = 155 - 153;
        while (sqrt (mPthrUBR42W) >= i) {
            if (!((817 - 817) != mPthrUBR42W % i))
                KhSQAwTmq2 = 0;
            i = i + 1;
        };
    }
    if (KhSQAwTmq2 != 0)
        bJH48E += (185 - 184);
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    if (VrjzV5x (mPthrUBR42W))
        bJH48E += 1;
    if (bJH48E == (929 - 927))
        return 1;
    else
        return 0;
}

void  main () {
    int WZMhaWnj;
    int mPthrUBR42W;
    int sOybYm6qKkPc;
    int i;
    WZMhaWnj = 0;
    scanf ("%d%d", &mPthrUBR42W, &sOybYm6qKkPc);
    {
        i = mPthrUBR42W;
        while (i <= sOybYm6qKkPc) {
            if (G2RmEJFs (i) &&WZMhaWnj == 0) {
                printf ("%d", i);
                WZMhaWnj = 1;
            }
            else if (G2RmEJFs (i))
                printf (",%d", i);
            i = i + 1;
        };
    }
    if (WZMhaWnj == 0)
        printf ("no");
}

