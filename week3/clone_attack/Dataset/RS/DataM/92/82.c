int main () {
    int i;
    int Bfd0QIhme;
    int DRC4LxSU3ld6;
    int tl;
    int ql;
    int m;
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
    int n;
    int fzGDbgrB4;
    int tian [1100];
    int qi [1100];
    for (; scanf ("%d", &n) && n != (985 - 985);) {
        ql = 0;
        fzGDbgrB4 = (985 - 985);
        {
            i = 0;
            while (i < n) {
                scanf ("%d", &tian[i]);
                i = i + 1;
            };
        }
        for (i = 0; i < n; i = i + 1)
            scanf ("%d", &qi[i]);
        sort (tian, tian + n);
        sort (qi, qi + n);
        i = n - 1;
        Bfd0QIhme = n - 1;
        tl = 0;
        while (tl <= i && Bfd0QIhme >= ql) {
            if (tian[i] > qi[Bfd0QIhme]) {
                Bfd0QIhme = Bfd0QIhme -1;
                i = i - 1;
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
                fzGDbgrB4 = fzGDbgrB4 + 1;
            }
            else {
                if (tian[i] < qi[Bfd0QIhme]) {
                    Bfd0QIhme = Bfd0QIhme -1;
                    fzGDbgrB4 = fzGDbgrB4 - 1;
                    tl = tl + 1;
                }
                else if (tian[tl] <= qi[ql]) {
                    if (tian[tl] < qi[Bfd0QIhme])
                        fzGDbgrB4 = fzGDbgrB4 - 1;
                    tl = tl + 1;
                    Bfd0QIhme = Bfd0QIhme -1;
                }
                else {
                    while (tian[tl] > qi[ql] && tl <= i && ql <= Bfd0QIhme) {
                        tl = tl + 1;
                        ql = ql + 1;
                        fzGDbgrB4 = fzGDbgrB4 + 1;
                    }
                    if (tl > i || ql > Bfd0QIhme)
                        break;
                };
            };
        }
        printf ("%d\n", fzGDbgrB4 * 200);
    };
}

