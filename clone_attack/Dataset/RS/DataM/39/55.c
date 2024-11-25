struct   Student {
    char iKfiXBZEcw8 [50];
    int cj, wQzsIj19D, lw, GsIVBDE5u;
    char m6s0mZy, dZkq2gayCF;
    struct   Student *next;
}
*p1, *p2, *head, *dC5VOpTI, *ybzSmiZH5NE;

int main () {
    int n, U6W0pS = 0, GsIVBDE5u = 0, KrCWqvNl, vglToGHYa;
    scanf ("%d", &n);
    head = NULL;
    for (U6W0pS = 0; U6W0pS < n; U6W0pS = U6W0pS +1) {
        p1 = (struct   Student *) malloc (Len);
        if (!(0 != U6W0pS))
            head = p1;
        else
            p2->next = p1;
        p2 = p1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%s%d%d %c %c%d", p1->iKfiXBZEcw8, &p1->cj, &p1->wQzsIj19D, &p1->m6s0mZy, &p1->dZkq2gayCF, &p1->lw);
        p1->GsIVBDE5u = 0;
    }
    ybzSmiZH5NE = (struct   Student *) malloc (Len);
    dC5VOpTI = head;
    p1->next = NULL;
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
    do {
        if (dC5VOpTI->cj > 80 && dC5VOpTI->lw >= 1)
            dC5VOpTI->GsIVBDE5u += 8000;
        if (80 < dC5VOpTI->wQzsIj19D && !('Y' != dC5VOpTI->m6s0mZy))
            dC5VOpTI->GsIVBDE5u = dC5VOpTI->GsIVBDE5u + 850;
        if (dC5VOpTI->cj > 85 && dC5VOpTI->wQzsIj19D > 80)
            dC5VOpTI->GsIVBDE5u += 4000;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        if (dC5VOpTI->cj > 85 && dC5VOpTI->dZkq2gayCF == 'Y')
            dC5VOpTI->GsIVBDE5u += 1000;
        if (dC5VOpTI->cj > 90)
            dC5VOpTI->GsIVBDE5u = dC5VOpTI->GsIVBDE5u + 2000;
        dC5VOpTI = dC5VOpTI->next;
    }
    while (dC5VOpTI);
    ybzSmiZH5NE->GsIVBDE5u = 0;
    dC5VOpTI = head;
    do {
        GsIVBDE5u += dC5VOpTI->GsIVBDE5u;
        if (dC5VOpTI->GsIVBDE5u > ybzSmiZH5NE->GsIVBDE5u)
            ybzSmiZH5NE = dC5VOpTI;
        dC5VOpTI = dC5VOpTI->next;
    }
    while (dC5VOpTI);
    printf ("%s\n%d\n%d", ybzSmiZH5NE->iKfiXBZEcw8, ybzSmiZH5NE->GsIVBDE5u, GsIVBDE5u);
    return 0;
}

