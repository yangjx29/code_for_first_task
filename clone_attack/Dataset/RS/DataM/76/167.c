struct   block {
    int l;
    int r;
};
int mysort (void  *AIY46HMaX, void  *lIJ5pZ) {
    struct   block *q2W3yex9f = (struct   block *) AIY46HMaX;
    struct   block *bb = (struct   block *) lIJ5pZ;
    if (!(bb->l != q2W3yex9f->l)) {
        return bb->r - q2W3yex9f->r;
    }
    else {
        return q2W3yex9f->l - bb->l;
    };
}

int main () {
    int i;
    int llEwIqg9F;
    struct   block in [(50569 - 569)];
    int left;
    int mj9BFAgwTm;
    scanf ("%d", &llEwIqg9F);
    {
        i = 450 - 450;
        while (llEwIqg9F > i) {
            scanf ("%d %d", &in[i].l, &in[i].r);
            i = i + 1;
        };
    }
    qsort (in, llEwIqg9F, sizeof (in [0]), mysort);
    left = in[0].l;
    mj9BFAgwTm = in[0].r;
    {
        i = 1;
        while (i < llEwIqg9F) {
            if (mj9BFAgwTm < in[i].r) {
                if (in[i].l <= mj9BFAgwTm) {
                    mj9BFAgwTm = in[i].r;
                }
                else
                    break;
            }
            i = i + 1;
        };
    }
    if (i == llEwIqg9F) {
        printf ("%d %d", left, mj9BFAgwTm);
    }
    else {
        printf ("no\n");
    }
    return 0;
}

