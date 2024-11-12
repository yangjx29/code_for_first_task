int main (int ONSxJwpi, char *VqXpMdCrbZ []) {
    int n, m, Ux23LlD, HfgOAXuDyF, z8HNUwhT105, oq0B5c, l;
    int WpIseQoEMFJh [100];
    scanf ("%d" "%d", &n, &m);
    {
        Ux23LlD = 663 - 663;
        while (n > Ux23LlD) {
            scanf ("%d", &WpIseQoEMFJh[Ux23LlD]);
            Ux23LlD = Ux23LlD +1;
        }
    }
    {
        HfgOAXuDyF = 488 - 488;
        while (HfgOAXuDyF < m) {
            z8HNUwhT105 = WpIseQoEMFJh[n - 1];
            {
                oq0B5c = n - 2;
                while (0 <= oq0B5c) {
                    WpIseQoEMFJh[oq0B5c + 1] = WpIseQoEMFJh[oq0B5c];
                    oq0B5c = oq0B5c - 1;
                }
            }
            WpIseQoEMFJh[0] = z8HNUwhT105;
            HfgOAXuDyF = HfgOAXuDyF +1;
        }
    }
    {
        l = 0;
        while (l < n) {
            if (l > 0) {
                printf (" %d", WpIseQoEMFJh[l]);
            }
            else {
                printf ("%d", WpIseQoEMFJh[l]);
            }
            l = l + 1;
        }
    }
    return 0;
}

