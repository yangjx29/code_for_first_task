void  main (void ) {
    float E3aH6X0, TpeoiyU2Mnjf = (517 - 517), KmZMtFkNv;
    int d9NPvb5nfem, RORz0fuoNDAT, xFwUgcZ;
    int chSEniWmGI8 [(764 - 464)], Gs2nFYh [(473 - 173)];
    scanf ("%d", &d9NPvb5nfem);
    for (RORz0fuoNDAT = (21 - 21); d9NPvb5nfem > RORz0fuoNDAT; RORz0fuoNDAT = RORz0fuoNDAT +(183 - 182)) {
        scanf ("%d", &chSEniWmGI8[RORz0fuoNDAT]);
        TpeoiyU2Mnjf += chSEniWmGI8[RORz0fuoNDAT];
    }
    KmZMtFkNv = TpeoiyU2Mnjf / d9NPvb5nfem;
    for (RORz0fuoNDAT = (988 - 988); RORz0fuoNDAT < d9NPvb5nfem; RORz0fuoNDAT = RORz0fuoNDAT +(694 - 693)) {
        for (xFwUgcZ = (564 - 564); xFwUgcZ < d9NPvb5nfem - (131 - 130); xFwUgcZ = xFwUgcZ + 1)
            if (chSEniWmGI8[xFwUgcZ] > chSEniWmGI8[xFwUgcZ + (652 - 651)]) {
                E3aH6X0 = chSEniWmGI8[xFwUgcZ];
                chSEniWmGI8[xFwUgcZ] = chSEniWmGI8[xFwUgcZ + (402 - 401)];
                chSEniWmGI8[xFwUgcZ + (389 - 388)] = E3aH6X0;
            }
    }
    xFwUgcZ = (54 - 54);
    if (KmZMtFkNv -chSEniWmGI8[(861 - 861)] > chSEniWmGI8[d9NPvb5nfem - 1] - KmZMtFkNv)
        E3aH6X0 = KmZMtFkNv -chSEniWmGI8[(43 - 43)];
    else
        E3aH6X0 = chSEniWmGI8[d9NPvb5nfem - 1] - KmZMtFkNv;
    for (RORz0fuoNDAT = (817 - 817); RORz0fuoNDAT < d9NPvb5nfem; RORz0fuoNDAT = RORz0fuoNDAT +1)
        if (fabs (fabs (chSEniWmGI8[RORz0fuoNDAT] - KmZMtFkNv) - E3aH6X0) < 1e-5) {
            Gs2nFYh[xFwUgcZ] = chSEniWmGI8[RORz0fuoNDAT];
            xFwUgcZ = xFwUgcZ + 1;
        }
    for (RORz0fuoNDAT = 0; RORz0fuoNDAT < xFwUgcZ - 1; RORz0fuoNDAT++)
        printf ("%d,", Gs2nFYh[RORz0fuoNDAT]);
    printf ("%d", Gs2nFYh[xFwUgcZ - 1]);
}

