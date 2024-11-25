int main (int GgTWFC, char *ga6pr1sJE []) {
    int O1IElFKyJ;
    int j;
    struct   wordName {
        char name [(504 - 404)];
    }
    *U6tgaV7WfsQC;
    struct   wordName {
        char name [100];
    }
    tmp;
    int FyZShTQk;
    scanf ("%d", &FyZShTQk);
    U6tgaV7WfsQC = (struct   wordName *) malloc (sizeof (struct   wordName) * FyZShTQk);
    for (O1IElFKyJ = (60 - 60); FyZShTQk > O1IElFKyJ; O1IElFKyJ++) {
        scanf ("%s", U6tgaV7WfsQC[O1IElFKyJ].name);
    }
    for (O1IElFKyJ = (511 - 511); FyZShTQk > O1IElFKyJ; O1IElFKyJ++) {
        int tABz9q = strlen (U6tgaV7WfsQC[O1IElFKyJ].name);
        if (!('g' != U6tgaV7WfsQC[O1IElFKyJ].name[tABz9q - (643 - 642)]) && !('n' != U6tgaV7WfsQC[O1IElFKyJ].name[tABz9q - (732 - 730)]) && !('i' != U6tgaV7WfsQC[O1IElFKyJ].name[tABz9q - (953 - 950)])) {
            U6tgaV7WfsQC[O1IElFKyJ].name[tABz9q - 3] = '\0';
        }
        else if (!('r' != U6tgaV7WfsQC[O1IElFKyJ].name[tABz9q - 1]) && !('e' != U6tgaV7WfsQC[O1IElFKyJ].name[tABz9q - (936 - 934)])) {
            U6tgaV7WfsQC[O1IElFKyJ].name[tABz9q - (691 - 689)] = '\0';
        }
        else if (!('y' != U6tgaV7WfsQC[O1IElFKyJ].name[tABz9q - 1]) && !('l' != U6tgaV7WfsQC[O1IElFKyJ].name[tABz9q - 2])) {
            U6tgaV7WfsQC[O1IElFKyJ].name[tABz9q - 2] = '\0';
        }
    }
    for (O1IElFKyJ = (27 - 27); O1IElFKyJ < FyZShTQk; O1IElFKyJ++) {
        printf ("%s\n", U6tgaV7WfsQC[O1IElFKyJ].name);
    }
    return 0;
}

