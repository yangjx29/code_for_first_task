int main () {
    int gB7KWFxd6, TEbWGi, AuFGwNXxt, k, s = 0;
    int sz [AuFGwNXxt];
    scanf ("%d %d\n", &AuFGwNXxt, &k);
    for (TEbWGi = 0; TEbWGi <= AuFGwNXxt -1; TEbWGi = TEbWGi +1) {
        scanf ("%d", &sz[TEbWGi]);
        {
            gB7KWFxd6 = 0;
            while (TEbWGi >= gB7KWFxd6) {
                if (sz[TEbWGi] + sz[gB7KWFxd6] == k) {
                    s = s + 1;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                }
                gB7KWFxd6++;
            };
        };
    }
    if (s > 0) {
        printf ("yes");
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    }
    else {
        printf ("no");
    }
    return 0;
}

