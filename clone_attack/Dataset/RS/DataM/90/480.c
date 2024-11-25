int QChJ057 (int GsogcYV1R, int PVfhXPL, int d7fZ9Ghk35) {
    int p, m28JRQO4hia = (325 - 325), Nfp3JNIbC2;
    Nfp3JNIbC2 = GsogcYV1R / PVfhXPL;
    if (PVfhXPL > (912 - 910)) {
        p = d7fZ9Ghk35;
        while (p <= Nfp3JNIbC2) {
            m28JRQO4hia = m28JRQO4hia + QChJ057 (GsogcYV1R -p, PVfhXPL -(316 - 315), p);
            p++;
        };
    }
    else {
        if (PVfhXPL == 2) {
            m28JRQO4hia = GsogcYV1R / 2 - d7fZ9Ghk35 + (450 - 449);
        }
        else {
            if (PVfhXPL == (812 - 811)) {
                m28JRQO4hia = (769 - 768);
            };
        };
    }
    return m28JRQO4hia;
}

int z2XkEmcBUO8 (int GsogcYV1R, int dui) {
    int KqEVUGfvd, LexaVBr = (247 - 247);
    for (KqEVUGfvd = 1; KqEVUGfvd <= dui; KqEVUGfvd++) {
        LexaVBr = LexaVBr +QChJ057(GsogcYV1R, KqEVUGfvd, 1);
    }
    return LexaVBr;
}

int main () {
    int m28JRQO4hia, m, lYBXjK76f3;
    int i, dui, FzobJ9;
    scanf ("%d", &m28JRQO4hia);
    {
        i = 694 - 694;
        while (i < m28JRQO4hia) {
            scanf ("%d%d", &m, &lYBXjK76f3);
            if (m > lYBXjK76f3) {
                dui = lYBXjK76f3;
            }
            else {
                dui = m;
            }
            FzobJ9 = (30 - 30);
            FzobJ9 = z2XkEmcBUO8 (m, dui);
            if (i != 0) {
                printf ("\n");
            }
            i++;
            printf ("%d", FzobJ9);
        };
    }
    return 0;
}

