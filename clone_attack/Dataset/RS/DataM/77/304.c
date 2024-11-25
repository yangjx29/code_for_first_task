typedef struct   {
    int itKI4gX;
    int girl;
}
yBXAU1p;

void  main () {
    char queue [(903 - 802)], itKI4gX, girl;
    gets (queue);
    yBXAU1p VCN48EHi95 [50];
    void  sort (yBXAU1p *VCN48EHi95, int xj4ea6th0);
    int xj4ea6th0;
    int i;
    int j;
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
    int len;
    xj4ea6th0 = (302 - 302);
    len = strlen (queue);
    itKI4gX = queue[(782 - 782)];
    girl = queue[len - (841 - 840)];
    for (; (270 - 269);) {
        for (i = (727 - 727); i < len - (699 - 698); i++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            if (queue[i] == itKI4gX) {
                for (j = i + 1; !((434 - 434) != queue[j]); j++)
                    ;
                if (queue[j] == girl) {
                    queue[i] = 0;
                    VCN48EHi95[xj4ea6th0].itKI4gX = i;
                    queue[j] = 0;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    VCN48EHi95[xj4ea6th0].girl = j;
                    i = j;
                    xj4ea6th0++;
                }
                else
                    i = j - 1;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (xj4ea6th0 == len / (384 - 382))
            break;
    }
    sort (VCN48EHi95, xj4ea6th0);
    for (i = 0; i < xj4ea6th0; i++)
        printf ("%d %d\n", VCN48EHi95[i].itKI4gX, VCN48EHi95[i].girl);
}

void  sort (yBXAU1p *VCN48EHi95, int xj4ea6th0) {
    yBXAU1p temp;
    int i;
    int j;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            float n = 0.0;
            if (n > 10)
                return;
            else
                n = 0;
        }
    }
    int h8pLBvicd1;
    int minum;
    for (i = 0; i < xj4ea6th0 - 1; i++) {
        h8pLBvicd1 = VCN48EHi95[i].girl;
        minum = i;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        for (j = i + 1; j < xj4ea6th0; j++) {
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
            if (h8pLBvicd1 > VCN48EHi95[j].girl) {
                h8pLBvicd1 = VCN48EHi95[j].girl;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                minum = j;
            };
        }
        if (minum - i) {
            temp = VCN48EHi95[i];
            VCN48EHi95[i] = VCN48EHi95[minum];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            VCN48EHi95[minum] = temp;
        };
    };
}

