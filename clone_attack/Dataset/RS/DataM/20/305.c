void  main () {
    int RIVwWEZ;
    int GlNvOEz;
    int VxgrZ1hts [20] = {(563 - 563)};
    int n0psFcYr7E [20];
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
    char K8TQxh5 [20] [(142 - 132)];
    char iMn8cIEvqwt [20] [4];
    char TXhi5cyx;
    for (RIVwWEZ = 0;; RIVwWEZ = RIVwWEZ +1) {
        if (!(EOF != scanf ("%s %s", &K8TQxh5[RIVwWEZ], &iMn8cIEvqwt[RIVwWEZ])))
            break;
        {
            GlNvOEz = 0;
            while (!('\0' == K8TQxh5[RIVwWEZ][GlNvOEz])) {
                if ((int) K8TQxh5[RIVwWEZ][GlNvOEz] > VxgrZ1hts[RIVwWEZ])
                    VxgrZ1hts[RIVwWEZ] = K8TQxh5[RIVwWEZ][GlNvOEz];
                GlNvOEz = GlNvOEz +1;
            };
        }
        {
            GlNvOEz = 0;
            while (!('\0' == K8TQxh5[RIVwWEZ][GlNvOEz])) {
                if (VxgrZ1hts[RIVwWEZ] == K8TQxh5[RIVwWEZ][GlNvOEz]) {
                    n0psFcYr7E[RIVwWEZ] = GlNvOEz;
                    break;
                }
                GlNvOEz = GlNvOEz +1;
            };
        }
        {
            GlNvOEz = 0;
            while (GlNvOEz <= n0psFcYr7E[RIVwWEZ]) {
                printf ("%c", K8TQxh5[RIVwWEZ][GlNvOEz]);
                GlNvOEz = GlNvOEz +1;
            };
        }
        {
            GlNvOEz = 0;
            while (GlNvOEz < strlen (iMn8cIEvqwt[RIVwWEZ])) {
                printf ("%c", iMn8cIEvqwt[RIVwWEZ][GlNvOEz]);
                GlNvOEz++;
            };
        }
        for (GlNvOEz = n0psFcYr7E[RIVwWEZ] + 1; K8TQxh5[RIVwWEZ][GlNvOEz] != '\0'; GlNvOEz = GlNvOEz +1)
            printf ("%c", K8TQxh5[RIVwWEZ][GlNvOEz]);
        TXhi5cyx = '\0';
        printf ("\n");
    };
}

