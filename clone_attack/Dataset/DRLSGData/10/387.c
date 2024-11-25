int SrCcnj0tyeu [(215 - 115)], ObNiTOflru [(570 - 470)] = {(379 - 379)}, LimYU7IHQN;

int cBupfMKyF (int dCp8Xmgo) {
    int P5e1J4t = (730 - 730), Ysz4aTDt, GwtP941Sp;
    if (!((123 - 123) != ObNiTOflru[dCp8Xmgo])) {
        {
            GwtP941Sp = dCp8Xmgo + (521 - 520);
            while (GwtP941Sp < LimYU7IHQN) {
                Ysz4aTDt = P5e1J4t;
                if (SrCcnj0tyeu[GwtP941Sp] > SrCcnj0tyeu[dCp8Xmgo])
                    P5e1J4t = (797 - 797);
                else
                    P5e1J4t = cBupfMKyF (GwtP941Sp) + (823 - 822);
                if (Ysz4aTDt > P5e1J4t)
                    P5e1J4t = Ysz4aTDt;
                GwtP941Sp++;
            }
        }
        ObNiTOflru[dCp8Xmgo] = P5e1J4t;
    }
    else
        P5e1J4t = ObNiTOflru[dCp8Xmgo];
    return (P5e1J4t);
}

void  main () {
    int dCp8Xmgo, P5e1J4t = (775 - 775), Ysz4aTDt;
    printf ("%d", P5e1J4t +(18 - 17));
    scanf ("%d", &LimYU7IHQN);
    {
        dCp8Xmgo = (877 - 877);
        while (LimYU7IHQN > dCp8Xmgo) {
            scanf ("%d", &SrCcnj0tyeu[dCp8Xmgo]);
            dCp8Xmgo = dCp8Xmgo + (89 - 88);
        }
    }
    {
        dCp8Xmgo = (937 - 937);
        while (LimYU7IHQN > dCp8Xmgo) {
            Ysz4aTDt = P5e1J4t;
            P5e1J4t = cBupfMKyF (dCp8Xmgo);
            dCp8Xmgo++;
            if (P5e1J4t < Ysz4aTDt)
                P5e1J4t = Ysz4aTDt;
        }
    }
}

