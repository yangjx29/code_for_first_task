int main () {
    int dm;
    int GuIzla0RBv;
    int TIkBJ8FHd [25] = {(709 - 709)};
    int KAXEr3U;
    int d [25] = {(611 - 610)};
    int ZQZNgVm;
    int NczNxqsr7Am;
    dm = 0;
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
    scanf ("%d", &GuIzla0RBv);
    for (KAXEr3U = 0; GuIzla0RBv > KAXEr3U; KAXEr3U++)
        scanf ("%d", &TIkBJ8FHd[KAXEr3U]);
    {
        KAXEr3U = 0;
        while (GuIzla0RBv > KAXEr3U) {
            d[KAXEr3U] = (13 - 12);
            KAXEr3U = KAXEr3U +1;
        };
    }
    {
        KAXEr3U = GuIzla0RBv -1;
        while (0 <= KAXEr3U) {
            for (NczNxqsr7Am = KAXEr3U +1; GuIzla0RBv > NczNxqsr7Am; NczNxqsr7Am = NczNxqsr7Am +1)
                if (TIkBJ8FHd[NczNxqsr7Am] <= TIkBJ8FHd[KAXEr3U] && d[KAXEr3U] <= d[NczNxqsr7Am])
                    d[KAXEr3U] = d[NczNxqsr7Am] + 1;
            KAXEr3U = KAXEr3U -1;
        };
    }
    dm = d[0];
    {
        KAXEr3U = 0;
        while (KAXEr3U < GuIzla0RBv) {
            if (d[KAXEr3U] > dm)
                dm = d[KAXEr3U];
            KAXEr3U = KAXEr3U +1;
        };
    }
    scanf ("%d", &KAXEr3U);
    printf ("%d", dm);
    return 0;
}

