void  main () {
    int fCjW0hew9FZT, j, k, m, JOvnH3cVhA0;
    int *ccbe4CsBDS;
    ccbe4CsBDS = (int *) malloc (200 * sizeof (int));
    scanf ("%d\n", &JOvnH3cVhA0);
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
    {
        fCjW0hew9FZT = 0;
        while (JOvnH3cVhA0 > fCjW0hew9FZT) {
            scanf ("%d", ccbe4CsBDS + fCjW0hew9FZT);
            fCjW0hew9FZT = fCjW0hew9FZT + 1;
        };
    }
    {
        fCjW0hew9FZT = 0;
        while (fCjW0hew9FZT < JOvnH3cVhA0 / 2) {
            m = *(ccbe4CsBDS + fCjW0hew9FZT);
            *(ccbe4CsBDS + fCjW0hew9FZT) = *(ccbe4CsBDS + JOvnH3cVhA0 -(220 - 219) - fCjW0hew9FZT);
            *(ccbe4CsBDS + JOvnH3cVhA0 -1 - fCjW0hew9FZT) = m;
            fCjW0hew9FZT++;
        };
    }
    for (fCjW0hew9FZT = 0; JOvnH3cVhA0 -1 > fCjW0hew9FZT; fCjW0hew9FZT = fCjW0hew9FZT + 1) {
        printf ("%d ", *(ccbe4CsBDS + fCjW0hew9FZT));
    }
    printf ("%d", *(ccbe4CsBDS + JOvnH3cVhA0 -1));
}

