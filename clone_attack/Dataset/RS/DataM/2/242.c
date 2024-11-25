int main () {
    struct   writer {
        int dqQzFDAV;
        char wR0mP7 [(885 - 865)];
        struct   writer *anohNsxQ;
    };
    int Pl8zqe, jmp3lDIngVh, k, l, m, xZbdFcnH9W [(578 - 552)] = {(543 - 543)}, max, ZuXmO5CY;
    struct   writer *ezr71Y8uP9p;
    struct   writer *z0q58u;
    struct   writer *p;
    struct   writer *hYZKWt;
    scanf ("%d", &ZuXmO5CY);
    hYZKWt = ezr71Y8uP9p = z0q58u = (struct   writer *) malloc (sizeof (struct   writer));
    scanf ("%d %s", &ezr71Y8uP9p->dqQzFDAV, &ezr71Y8uP9p->wR0mP7);
    {
        Pl8zqe = 801 - 801;
        while (ZuXmO5CY -1 > Pl8zqe) {
            Pl8zqe = Pl8zqe +1;
            ezr71Y8uP9p = (struct   writer *) malloc (sizeof (struct   writer));
            scanf ("%d %s", &ezr71Y8uP9p->dqQzFDAV, &ezr71Y8uP9p->wR0mP7);
            z0q58u->anohNsxQ = ezr71Y8uP9p;
            z0q58u = ezr71Y8uP9p;
        };
    }
    p = hYZKWt;
    {
        Pl8zqe = 778 - 778;
        while (26 > Pl8zqe) {
            p = hYZKWt;
            {
                jmp3lDIngVh = 278 - 278;
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
                while (ZuXmO5CY > jmp3lDIngVh) {
                    jmp3lDIngVh = jmp3lDIngVh + 1;
                    for (k = 0; 20 > k; k = k + 1) {
                        if (!((char) (Pl8zqe +(796 - 731)) != p->wR0mP7[k])) {
                            xZbdFcnH9W[Pl8zqe]++;
                        };
                    }
                    p = p->anohNsxQ;
                };
            }
            Pl8zqe = Pl8zqe +1;
        };
    }
    max = xZbdFcnH9W[0];
    jmp3lDIngVh = 0;
    {
        Pl8zqe = 0;
        while (26 > Pl8zqe) {
            if (xZbdFcnH9W[Pl8zqe] > max) {
                max = xZbdFcnH9W[Pl8zqe];
                jmp3lDIngVh = Pl8zqe;
            }
            Pl8zqe = Pl8zqe +1;
        };
    }
    printf ("%c\n%d\n", 65 + jmp3lDIngVh, max);
    p = hYZKWt;
    {
        Pl8zqe = 0;
        while (ZuXmO5CY > Pl8zqe) {
            {
                k = 0;
                while (20 > k) {
                    if (p->wR0mP7[k] == (char) (65 + jmp3lDIngVh)) {
                        printf ("%d\n", p->dqQzFDAV);
                        break;
                    }
                    k++;
                };
            }
            Pl8zqe = Pl8zqe +1;
            p = p->anohNsxQ;
        };
    };
}

