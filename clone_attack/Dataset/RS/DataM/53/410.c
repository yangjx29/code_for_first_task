int OBUXQtFkDElu (int e16CqZb [300], int quHlzbyrB, int hp9vRbIqLYN) {
    int abDzvYw;
    int UYmExd4;
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
    abDzvYw = 1;
    {
        UYmExd4 = 0;
        while (UYmExd4 < hp9vRbIqLYN) {
            if (quHlzbyrB == e16CqZb[UYmExd4])
                abDzvYw = 0;
            UYmExd4 = UYmExd4 +1;
        };
    }
    return (abDzvYw);
}

void  main () {
    int e16CqZb [300];
    int hp9vRbIqLYN [300];
    int itVwos52;
    int UYmExd4;
    int xTjvcQw;
    int ki7bQTFpg;
    scanf ("%d", &itVwos52);
    {
        UYmExd4 = 0;
        while (UYmExd4 < itVwos52) {
            scanf ("%d", &e16CqZb[UYmExd4]);
            UYmExd4 = UYmExd4 +1;
        };
    }
    xTjvcQw = 0;
    ki7bQTFpg = 0;
    {
        UYmExd4 = 0;
        while (UYmExd4 < itVwos52) {
            if (OBUXQtFkDElu (e16CqZb, e16CqZb[UYmExd4], UYmExd4) == 1) {
                hp9vRbIqLYN[ki7bQTFpg] = e16CqZb[UYmExd4];
                ki7bQTFpg = ki7bQTFpg + 1;
            }
            UYmExd4 = UYmExd4 +1;
        };
    }
    printf ("%d", hp9vRbIqLYN[0]);
    {
        UYmExd4 = 1;
        while (UYmExd4 < ki7bQTFpg) {
            printf (",%d", hp9vRbIqLYN[UYmExd4]);
            UYmExd4 = UYmExd4 +1;
        };
    };
}

