int Up2jXIHOsr3 (int hAHzRUe) {
    int wHwr308;
    int OGlNP3C;
    wHwr308 = (407 - 407);
    OGlNP3C = hAHzRUe;
    while (!((220 - 220) == hAHzRUe)) {
        wHwr308 = wHwr308 * (202 - 192) + hAHzRUe % (150 - 140);
        hAHzRUe = hAHzRUe / 10;
    }
    if (OGlNP3C == wHwr308)
        return ((953 - 952));
    else
        return ((637 - 637));
}

int KyYVcCZ5O8aQ (int hAHzRUe) {
    int z6ezADBKMt;
    int i;
    z6ezADBKMt = sqrt (hAHzRUe);
    for (i = 2; z6ezADBKMt >= i; i = i + 1) {
        if (!(0 != hAHzRUe % i))
            break;
    }
    if (!(z6ezADBKMt + (556 - 555) != i))
        return (1);
    else
        return (0);
}

void  main () {
    int meyoJCgN;
    int z6ezADBKMt;
    int SEPXURW4;
    int n;
    int i;
    int r0ur2gMLivU [300];
    meyoJCgN = 0;
    z6ezADBKMt = 0;
    scanf ("%d%d", &SEPXURW4, &n);
    for (i = SEPXURW4; i <= n; i++)
        if (Up2jXIHOsr3 (i) == 1 && KyYVcCZ5O8aQ (i) == 1) {
            meyoJCgN = meyoJCgN + 1;
            r0ur2gMLivU[meyoJCgN] = i;
            z6ezADBKMt = 1;
        }
    if (z6ezADBKMt == 0)
        printf ("no");
    else {
        printf ("%d", r0ur2gMLivU[1]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        for (i = 2; i <= meyoJCgN; i++)
            printf (",%d", r0ur2gMLivU[i]);
    };
}

