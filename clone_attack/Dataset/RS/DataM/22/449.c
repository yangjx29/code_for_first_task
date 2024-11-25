void  cIDcAyWgR (int m0HcnZxSv3 [], int rRo8EmTy) {
    int gfhrqYw, Dn8fgMk, t;
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
    {
        gfhrqYw = 396 - 396;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (rRo8EmTy - (573 - 572) > gfhrqYw) {
            {
                Dn8fgMk = gfhrqYw + 1;
                while (rRo8EmTy > Dn8fgMk) {
                    if (m0HcnZxSv3[Dn8fgMk] < m0HcnZxSv3[gfhrqYw]) {
                        t = m0HcnZxSv3[gfhrqYw];
                        m0HcnZxSv3[gfhrqYw] = m0HcnZxSv3[Dn8fgMk];
                        m0HcnZxSv3[Dn8fgMk] = t;
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    Dn8fgMk++;
                };
            }
            gfhrqYw = gfhrqYw + 1;
        };
    };
}

int Mur4KEgfXBY (int LcIVMPH, int u7fYpz) {
    int z;
    if (u7fYpz > LcIVMPH)
        z = LcIVMPH;
    else
        z = u7fYpz;
    return (z);
}

int DxUm7apirW (int LcIVMPH, int u7fYpz) {
    int z;
    if (u7fYpz < LcIVMPH)
        z = LcIVMPH;
    else
        z = u7fYpz;
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
    return (z);
}

void  main () {
    int JRK03QjZ8l [300], gfhrqYw, rRo8EmTy, max = 0, sunHMRlbU = 0, t = 0;
    char ygCyLnT;
    ygCyLnT = ',';
    {
        gfhrqYw = 0;
        while (!(',' != ygCyLnT)) {
            scanf ("%d", &JRK03QjZ8l[gfhrqYw]);
            ygCyLnT = getchar ();
            gfhrqYw++;
        };
    }
    rRo8EmTy = gfhrqYw;
    if (!(1 != rRo8EmTy))
        ;
    else {
        {
            gfhrqYw = 0;
            while (gfhrqYw < rRo8EmTy) {
                max = DxUm7apirW (max, JRK03QjZ8l[gfhrqYw]);
                gfhrqYw++;
            };
        }
        {
            gfhrqYw = 0;
            while (gfhrqYw < rRo8EmTy) {
                if (JRK03QjZ8l[gfhrqYw] < max) {
                    t = 1;
                    sunHMRlbU = DxUm7apirW (sunHMRlbU, JRK03QjZ8l[gfhrqYw]);
                }
                gfhrqYw++;
            };
        }
        if (t == 0)
            printf ("No");
        else
            printf ("%d", sunHMRlbU);
    };
}

