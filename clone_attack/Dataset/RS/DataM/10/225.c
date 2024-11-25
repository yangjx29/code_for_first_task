int cfjA3eTNq (int ZF3iGnox4Y [], int Ai0QL1qCeTDI [], int xazojqmvZ, int jf9ocn) {
    int G0EoKFZnUx, Yt7oefBNiWT, j4CNYZ0PlTE;
    j4CNYZ0PlTE = (710 - 710);
    Yt7oefBNiWT = ZF3iGnox4Y[xazojqmvZ];
    {
        G0EoKFZnUx = 453 - 452;
        while (jf9ocn > G0EoKFZnUx) {
            if (ZF3iGnox4Y[G0EoKFZnUx] <= Yt7oefBNiWT &&Ai0QL1qCeTDI[G0EoKFZnUx] >= j4CNYZ0PlTE)
                j4CNYZ0PlTE = Ai0QL1qCeTDI[G0EoKFZnUx];
            G0EoKFZnUx++;
        };
    }
    return (j4CNYZ0PlTE);
}

void  main () {
    int G0EoKFZnUx, Yt7oefBNiWT, j4CNYZ0PlTE, nje6Xc, jf9ocn, d1udMxfJ, mQNXdJ9rzb, ZF3iGnox4Y [(498 - 472)], Ai0QL1qCeTDI [26], YbyAUNOL0, xazojqmvZ;
    d1udMxfJ = 0;
    scanf ("%d", &G0EoKFZnUx);
    for (YbyAUNOL0 = 0; G0EoKFZnUx > YbyAUNOL0; YbyAUNOL0++)
        scanf ("%d", &ZF3iGnox4Y[YbyAUNOL0]);
    Ai0QL1qCeTDI[G0EoKFZnUx -(850 - 849)] = 1;
    for (xazojqmvZ = (G0EoKFZnUx -2); xazojqmvZ >= 0; xazojqmvZ--) {
        Ai0QL1qCeTDI[xazojqmvZ] = cfjA3eTNq (ZF3iGnox4Y, Ai0QL1qCeTDI, xazojqmvZ, G0EoKFZnUx) + 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    for (mQNXdJ9rzb = 0; mQNXdJ9rzb < G0EoKFZnUx; mQNXdJ9rzb = mQNXdJ9rzb + 1) {
        if (Ai0QL1qCeTDI[mQNXdJ9rzb] >= d1udMxfJ)
            d1udMxfJ = Ai0QL1qCeTDI[mQNXdJ9rzb];
    }
    printf ("%d", d1udMxfJ);
}

