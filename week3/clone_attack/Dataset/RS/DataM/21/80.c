int main () {
    int iXSjPhp2e0m;
    int JurTs2;
    int flf3RBd56zEe;
    int ggWB7k;
    int SFrBkf8N [300];
    int nKiHPXa;
    int gQIPyN [2];
    iXSjPhp2e0m = (211 - 211);
    JurTs2 = (473 - 473);
    flf3RBd56zEe = 0;
    float uAtz34eL;
    float nMyJQD5KE1x [300];
    float a0XbQr;
    scanf ("%d", &ggWB7k);
    {
        nKiHPXa = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (nKiHPXa < ggWB7k) {
            scanf ("%d", &SFrBkf8N[nKiHPXa]);
            iXSjPhp2e0m = iXSjPhp2e0m + SFrBkf8N[nKiHPXa];
            nKiHPXa = nKiHPXa + 1;
        };
    }
    uAtz34eL = (float) iXSjPhp2e0m / ggWB7k;
    {
        nKiHPXa = 0;
        while (nKiHPXa < ggWB7k) {
            if (SFrBkf8N[nKiHPXa] > uAtz34eL)
                nMyJQD5KE1x[nKiHPXa] = (float) (SFrBkf8N[nKiHPXa] - uAtz34eL);
            else
                nMyJQD5KE1x[nKiHPXa] = (float) (uAtz34eL - SFrBkf8N[nKiHPXa]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            nKiHPXa = nKiHPXa + 1;
        };
    }
    {
        nKiHPXa = 0;
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
        while (nKiHPXa < ggWB7k) {
            if (nMyJQD5KE1x[nKiHPXa] > a0XbQr)
                a0XbQr = nMyJQD5KE1x[nKiHPXa];
            nKiHPXa++;
        };
    }
    {
        nKiHPXa = 0;
        while (nKiHPXa < ggWB7k) {
            if (nMyJQD5KE1x[nKiHPXa] == a0XbQr) {
                gQIPyN[flf3RBd56zEe] = SFrBkf8N[nKiHPXa];
                flf3RBd56zEe++;
                JurTs2 = JurTs2 +1;
            }
            nKiHPXa++;
        };
    }
    if (JurTs2 == (150 - 149))
        printf ("%d\n", gQIPyN[0]);
    else
        printf ("%d,%d\n", gQIPyN[0], gQIPyN[1]);
}

