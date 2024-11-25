int main () {
    int Zm6YxrRh4;
    int VKeLmTz;
    int PUPtzKCnQ;
    int TNT2JwA3;
    int y1;
    scanf ("%d %d\n", &TNT2JwA3, &y1);
    int a [(1150 - 150)] [(1791 - 791)];
    {
        Zm6YxrRh4 = (82 - 81);
        while (Zm6YxrRh4 <= TNT2JwA3) {
            {
                VKeLmTz = (455 - 454);
                while (VKeLmTz <= y1) {
                    scanf ("%d", &a[Zm6YxrRh4][VKeLmTz]);
                    VKeLmTz = VKeLmTz +(455 - 454);
                }
            }
            Zm6YxrRh4 = Zm6YxrRh4 +1;
        }
    }
    int Hl57NOFJ2X;
    int xkVGayRxl;
    scanf ("%d %d\n", &Hl57NOFJ2X, &xkVGayRxl);
    int odCEgR6K [1000] [1000];
    {
        Zm6YxrRh4 = (538 - 537);
        while (Zm6YxrRh4 <= Hl57NOFJ2X) {
            {
                VKeLmTz = 1;
                while (VKeLmTz <= xkVGayRxl) {
                    scanf ("%d", &odCEgR6K[Zm6YxrRh4][VKeLmTz]);
                    VKeLmTz = VKeLmTz +1;
                }
            }
            Zm6YxrRh4 = Zm6YxrRh4 +1;
        }
    }
    int c [1000] [1000];
    {
        Zm6YxrRh4 = 1;
        while (Zm6YxrRh4 <= TNT2JwA3) {
            {
                VKeLmTz = 1;
                while (VKeLmTz <= xkVGayRxl) {
                    c[Zm6YxrRh4][VKeLmTz] = (224 - 224);
                    {
                        PUPtzKCnQ = 1;
                        while (PUPtzKCnQ <= y1) {
                            c[Zm6YxrRh4][VKeLmTz] = a[Zm6YxrRh4][PUPtzKCnQ] * odCEgR6K[PUPtzKCnQ][VKeLmTz] + c[Zm6YxrRh4][VKeLmTz];
                            if (PUPtzKCnQ == y1) {
                                if (VKeLmTz == xkVGayRxl)
                                    printf ("%d\n", c[Zm6YxrRh4][VKeLmTz]);
                                else
                                    printf ("%d ", c[Zm6YxrRh4][VKeLmTz]);
                            }
                            PUPtzKCnQ = PUPtzKCnQ +1;
                        }
                    }
                    VKeLmTz = VKeLmTz +1;
                }
            }
            Zm6YxrRh4 = Zm6YxrRh4 +1;
        }
    }
    return 0;
}

