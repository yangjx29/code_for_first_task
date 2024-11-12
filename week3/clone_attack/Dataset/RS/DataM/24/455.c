int main () {
    int start, GmGnqr, PEIx8K1U3, min, i, DR18kJu0h, zmax, RwjbBZMT, VLoJ8IdU, minstart;
    char AN6Cgk2iUL [2001];
    gets (AN6Cgk2iUL);
    zmax = 0;
    RwjbBZMT = 100;
    DR18kJu0h = strlen (AN6Cgk2iUL);
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
    for (i = 0; i < DR18kJu0h; i++) {
        for (; !(' ' != AN6Cgk2iUL[i]);)
            i = i + 1;
        start = i;
        while (!('\0' == AN6Cgk2iUL[i]) && AN6Cgk2iUL[i] != ' ')
            i++;
        GmGnqr = i;
        PEIx8K1U3 = GmGnqr -start;
        min = GmGnqr -start;
        if (zmax < PEIx8K1U3) {
            zmax = PEIx8K1U3;
            VLoJ8IdU = start;
        }
        if (min < RwjbBZMT) {
            minstart = start;
            RwjbBZMT = min;
        };
    }
    for (; AN6Cgk2iUL[VLoJ8IdU] != '\0' && AN6Cgk2iUL[VLoJ8IdU] != ' ';) {
        printf ("%c", AN6Cgk2iUL[VLoJ8IdU]);
        VLoJ8IdU++;
    }
    while (AN6Cgk2iUL[minstart] != '\0' && AN6Cgk2iUL[minstart] != ' ') {
        printf ("%c", AN6Cgk2iUL[minstart]);
        minstart++;
    }
    printf ("\n");
    return 0;
}

