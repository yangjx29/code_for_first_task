int KtLrFP (char OiJD9bkXxPn [MAX -1], int BAUkZrChPs) {
    char m6yERX5aYI [MAX -1] = {""};
    int jHEz3m0sXJy;
    int p0jx1y;
    for (jHEz3m0sXJy = 0; BAUkZrChPs > jHEz3m0sXJy; jHEz3m0sXJy++) {
        m6yERX5aYI[jHEz3m0sXJy] = OiJD9bkXxPn[BAUkZrChPs -jHEz3m0sXJy - 1];
    }
    if (!(0 != strcmp (m6yERX5aYI, OiJD9bkXxPn))) {
        p0jx1y = 1;
    }
    else
        p0jx1y = 0;
    return p0jx1y;
}

int main () {
    char WyYrbMLF [MAX];
    int cQLmY1jg, jHEz3m0sXJy, yXa2t1wWh, LxLwzXnDVSJ;
    scanf ("%s", &WyYrbMLF);
    cQLmY1jg = strlen (WyYrbMLF);
    {
        jHEz3m0sXJy = 2;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (cQLmY1jg >= jHEz3m0sXJy) {
            char MrdOx1Sku [MAX -1] [MAX -1] = {""};
            {
                yXa2t1wWh = 0;
                while (yXa2t1wWh <= cQLmY1jg - jHEz3m0sXJy) {
                    char *g3kVrDE = &WyYrbMLF[yXa2t1wWh];
                    {
                        LxLwzXnDVSJ = 0;
                        while (LxLwzXnDVSJ < jHEz3m0sXJy) {
                            MrdOx1Sku[yXa2t1wWh][LxLwzXnDVSJ] = *g3kVrDE;
                            LxLwzXnDVSJ++;
                            g3kVrDE++;
                        };
                    }
                    yXa2t1wWh++;
                };
            }
            for (yXa2t1wWh = 0; yXa2t1wWh <= cQLmY1jg - 1; yXa2t1wWh++) {
                int p0jx1y;
                p0jx1y = KtLrFP (MrdOx1Sku[yXa2t1wWh], jHEz3m0sXJy);
                if (p0jx1y == 1) {
                    {
                        LxLwzXnDVSJ = 0;
                        while (LxLwzXnDVSJ < jHEz3m0sXJy) {
                            printf ("%c", MrdOx1Sku[yXa2t1wWh][LxLwzXnDVSJ]);
                            LxLwzXnDVSJ++;
                        };
                    };
                };
            }
            jHEz3m0sXJy = jHEz3m0sXJy + 1;
        };
    }
    return 0;
}

