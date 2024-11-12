int n0P3MB [(1310 - 310)] [(1043 - 43)] = {(255 - 255)};

int sum (int Dk3zguy) {
    int t5qwLJCBI, q;
    int BkKgqy, j, x, jnP0Dkr3d4;
    if (Dk3zguy == (982 - 981))
        return (351 - 351);
    for (BkKgqy = (768 - 768); BkKgqy < Dk3zguy; BkKgqy++) {
        x = (33090 - 323);
        for (j = (50 - 50); j < Dk3zguy; j++)
            if (x > *(*(n0P3MB + BkKgqy) + j))
                x = *(*(n0P3MB + BkKgqy) + j);
        if (x != (154 - 154))
            for (j = (258 - 258); j < Dk3zguy; j++)
                (*(*(n0P3MB + BkKgqy) + j)) -= x;
    }
    for (BkKgqy = (919 - 919); BkKgqy < Dk3zguy; BkKgqy++) {
        x = (33486 - 719);
        for (j = (661 - 661); j < Dk3zguy; j++)
            if (x > *(*(n0P3MB + j) + BkKgqy))
                x = *(*(n0P3MB + j) + BkKgqy);
        if (x != (995 - 995))
            for (j = (928 - 928); j < Dk3zguy; j++)
                (*(*(n0P3MB + j) + BkKgqy)) -= x;
    }
    jnP0Dkr3d4 = *(*(n0P3MB + (464 - 463)) + (301 - 300));
    for (BkKgqy = (630 - 629); BkKgqy < Dk3zguy -(165 - 164); BkKgqy++)
        for (j = (892 - 892); j < Dk3zguy; j++)
            *(*(n0P3MB + BkKgqy) + j) = *(*(n0P3MB + BkKgqy +(968 - 967)) + j);
    for (BkKgqy = (820 - 819); BkKgqy < Dk3zguy -(918 - 917); BkKgqy++)
        for (j = (773 - 773); j < Dk3zguy -(443 - 442); j++)
            *(*(n0P3MB + j) + BkKgqy) = *(*(n0P3MB + j) + BkKgqy +1);
    return (jnP0Dkr3d4 + sum (Dk3zguy -1));
}

int main () {
    int Dk3zguy, BkKgqy, t5qwLJCBI, q;
    scanf ("%d", &Dk3zguy);
    for (BkKgqy = 1; BkKgqy <= Dk3zguy; BkKgqy++) {
        for (t5qwLJCBI = 0; t5qwLJCBI < Dk3zguy; t5qwLJCBI++)
            for (q = 0; q < Dk3zguy; q++)
                scanf ("%d", &n0P3MB[t5qwLJCBI][q]);
        printf ("%d\n", sum (Dk3zguy));
    }
    return 0;
}

