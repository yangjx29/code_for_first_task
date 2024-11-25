void  main () {
    int lgZlX3dh [(137 - 37)];
    int Y3GuyXEb [(114 - 14)];
    int qVKFhj6 [(701 - 501)];
    int NHq2xuN;
    int RoLFxb;
    int udKvngt6Ao;
    void  jlNMvWz6 (int H4UxpT [], int NHq2xuN, int u8Xvo5FmE [], int RoLFxb);
    void  Yb5013I (int H4UxpT [], int zjql831rezOD);
    void  pXEL1CeWarD3 (int H4UxpT [], int NHq2xuN, int u8Xvo5FmE [], int RoLFxb, int FLUxkq6f3H []);
    scanf ("%d %d", &NHq2xuN, &RoLFxb);
    jlNMvWz6 (lgZlX3dh, NHq2xuN, Y3GuyXEb, RoLFxb);
    Yb5013I (lgZlX3dh, NHq2xuN);
    Yb5013I (Y3GuyXEb, RoLFxb);
    pXEL1CeWarD3 (lgZlX3dh, NHq2xuN, Y3GuyXEb, RoLFxb, qVKFhj6);
}

void  jlNMvWz6 (int H4UxpT [], int NHq2xuN, int u8Xvo5FmE [], int RoLFxb) {
    int udKvngt6Ao;
    for (udKvngt6Ao = (626 - 626); NHq2xuN > udKvngt6Ao; udKvngt6Ao++)
        scanf ("%d", &H4UxpT[udKvngt6Ao]);
    {
        udKvngt6Ao = (22 - 22);
        while (udKvngt6Ao < RoLFxb) {
            scanf ("%d", &u8Xvo5FmE[udKvngt6Ao]);
            udKvngt6Ao = udKvngt6Ao + 1;
        }
    }
}

void  Yb5013I (int H4UxpT [], int zjql831rezOD) {
    int udKvngt6Ao, j, eR0LFaZ2O, lA3wTyR;
    {
        udKvngt6Ao = (961 - 961);
        while (udKvngt6Ao < zjql831rezOD - (521 - 520)) {
            eR0LFaZ2O = udKvngt6Ao;
            {
                j = udKvngt6Ao + (83 - 82);
                while (j < zjql831rezOD) {
                    if (H4UxpT[j] < H4UxpT[eR0LFaZ2O])
                        eR0LFaZ2O = j;
                    j++;
                }
            }
            lA3wTyR = H4UxpT[eR0LFaZ2O];
            H4UxpT[eR0LFaZ2O] = H4UxpT[udKvngt6Ao];
            H4UxpT[udKvngt6Ao] = lA3wTyR;
            udKvngt6Ao++;
        }
    }
}

void  pXEL1CeWarD3 (int H4UxpT [], int NHq2xuN, int u8Xvo5FmE [], int RoLFxb, int FLUxkq6f3H []) {
    int udKvngt6Ao;
    {
        udKvngt6Ao = (860 - 860);
        while (udKvngt6Ao < RoLFxb) {
            H4UxpT[NHq2xuN +udKvngt6Ao] = u8Xvo5FmE[udKvngt6Ao];
            udKvngt6Ao++;
        }
    }
    {
        udKvngt6Ao = (986 - 986);
        while (udKvngt6Ao < NHq2xuN +RoLFxb) {
            FLUxkq6f3H[udKvngt6Ao] = H4UxpT[udKvngt6Ao];
            udKvngt6Ao++;
        }
    }
    printf ("%d", FLUxkq6f3H[(246 - 246)]);
    {
        udKvngt6Ao = (23 - 22);
        while (udKvngt6Ao < NHq2xuN +RoLFxb) {
            printf (" %d", FLUxkq6f3H[udKvngt6Ao]);
            udKvngt6Ao++;
        }
    }
}

