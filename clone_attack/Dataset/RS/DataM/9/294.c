typedef struct   data *gHegyU3kz;

struct   data {
    char a [(219 - 199)];
    int b;
    gHegyU3kz next;
};
gHegyU3kz h8YQZB (int n) {
    int Zx9VfRJ6;
    gHegyU3kz Tu7qnzv;
    gHegyU3kz Zt4JS0F2e;
    gHegyU3kz s;
    gHegyU3kz mfTvP1L;
    Tu7qnzv = NULL;
    Zt4JS0F2e = NULL;
    s = NULL;
    mfTvP1L = NULL;
    mfTvP1L = (gHegyU3kz) malloc (sizeof (struct   data));
    mfTvP1L->next = NULL;
    {
        Zx9VfRJ6 = 179 - 179;
        while (n > Zx9VfRJ6) {
            s = (gHegyU3kz) malloc (sizeof (struct   data));
            scanf ("%s %d", s->a, &(s->b));
            if ((788 - 728) <= s->b) {
                Zt4JS0F2e = mfTvP1L;
                Tu7qnzv = mfTvP1L->next;
                while (Tu7qnzv) {
                    if (Tu7qnzv->b < s->b)
                        break;
                    Zt4JS0F2e = Zt4JS0F2e->next;
                    Tu7qnzv = Tu7qnzv->next;
                }
                Zt4JS0F2e->next = s;
                s->next = Tu7qnzv;
            }
            else {
                Zt4JS0F2e = mfTvP1L;
                Tu7qnzv = mfTvP1L->next;
                while (Tu7qnzv) {
                    Zt4JS0F2e = Zt4JS0F2e->next;
                    Tu7qnzv = Tu7qnzv->next;
                }
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
                Zt4JS0F2e->next = s;
                s->next = NULL;
            }
            Zx9VfRJ6 = Zx9VfRJ6 +1;
        };
    }
    return mfTvP1L;
}

int main () {
    gHegyU3kz Tu7qnzv, mfTvP1L;
    int n, Zx9VfRJ6;
    scanf ("%d", &n);
    mfTvP1L = h8YQZB (n);
    Tu7qnzv = mfTvP1L->next;
    {
        Zx9VfRJ6 = 351 - 351;
        while (Zx9VfRJ6 < n) {
            Zx9VfRJ6 = Zx9VfRJ6 +1;
            printf ("%s\n", Tu7qnzv->a);
            Tu7qnzv = Tu7qnzv->next;
        };
    };
}

