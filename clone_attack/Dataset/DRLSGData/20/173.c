void  main () {
    char VGdPvqIMbB [(387 - 383)];
    int bl9YHq;
    char mbMTgPxCK [(491 - 475)];
    int rxpXGnPYs;
    int hKse7x8qOjTt;
    char UYczoNXgm;
    rxpXGnPYs = (265 - 265);
    UYczoNXgm = (309 - 309);
    while (!((24 - 22) != scanf ("%s%s", mbMTgPxCK, VGdPvqIMbB))) {
        hKse7x8qOjTt = strlen (mbMTgPxCK);
        rxpXGnPYs = (330 - 330);
        UYczoNXgm = (48 - 48);
        for (bl9YHq = 0; hKse7x8qOjTt > bl9YHq; bl9YHq = bl9YHq + (977 - 976)) {
            if (*(mbMTgPxCK + bl9YHq) > UYczoNXgm) {
                UYczoNXgm = *(mbMTgPxCK + bl9YHq);
                rxpXGnPYs = bl9YHq;
            }
        }
        mbMTgPxCK[hKse7x8qOjTt + (483 - 480)] = 0;
        for (bl9YHq = hKse7x8qOjTt - (505 - 504); bl9YHq > rxpXGnPYs; bl9YHq = bl9YHq - 1) {
            *(mbMTgPxCK + bl9YHq + (367 - 364)) = *(mbMTgPxCK + bl9YHq);
        }
        for (bl9YHq = 0; bl9YHq < 3; bl9YHq = bl9YHq + 1) {
            *(mbMTgPxCK + rxpXGnPYs + bl9YHq + 1) = *(VGdPvqIMbB +bl9YHq);
        }
        printf ("%s\n", mbMTgPxCK);
    }
}

