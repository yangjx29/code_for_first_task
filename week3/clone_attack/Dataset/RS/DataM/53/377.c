int main () {
    int flMnKNf6XD = 0, LQkACPS1saqu, zvaxE8 [100] = {0};
    int JyefzbQLsq;
    int ko3KZ2OwFGVs;
    int m3YVOvz;
    int PoN92mM8FeAI [100];
    int gzY51yVZW [100];
    JyefzbQLsq = 0;
    scanf ("%d", &ko3KZ2OwFGVs);
    {
        m3YVOvz = 0;
        while (ko3KZ2OwFGVs > m3YVOvz) {
            scanf ("%d", &PoN92mM8FeAI[m3YVOvz]);
            m3YVOvz = m3YVOvz + 1;
        };
    }
    {
        m3YVOvz = 0;
        while (ko3KZ2OwFGVs > m3YVOvz) {
            flMnKNf6XD = PoN92mM8FeAI[m3YVOvz];
            {
                LQkACPS1saqu = 1;
                while (LQkACPS1saqu < ko3KZ2OwFGVs - m3YVOvz) {
                    if (PoN92mM8FeAI[m3YVOvz + LQkACPS1saqu] == flMnKNf6XD) {
                        zvaxE8[m3YVOvz + LQkACPS1saqu] = 1;
                    }
                    LQkACPS1saqu = LQkACPS1saqu +1;
                };
            }
            m3YVOvz = m3YVOvz + 1;
        };
    }
    {
        m3YVOvz = 0;
        while (m3YVOvz < ko3KZ2OwFGVs) {
            if (zvaxE8[m3YVOvz] == 0) {
                gzY51yVZW[JyefzbQLsq] = PoN92mM8FeAI[m3YVOvz];
                JyefzbQLsq++;
            }
            m3YVOvz = m3YVOvz + 1;
        };
    }
    {
        m3YVOvz = 0;
        while (m3YVOvz < JyefzbQLsq -1) {
            printf ("%d,", gzY51yVZW[m3YVOvz]);
            m3YVOvz = m3YVOvz + 1;
        };
    }
    printf ("%d", gzY51yVZW[JyefzbQLsq -1]);
}

