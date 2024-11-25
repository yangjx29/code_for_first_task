void  main () {
    int tg9tUYh, alLgIb8tWa [2] [10], gTkUVeY5ijhv, v5WH3mvUax = 0;
    float hDV5Lm2fdP;
    float aHnSaXC2vr [10];
    float Z1pRXEQF;
    hDV5Lm2fdP = 0;
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
    scanf ("%d", &tg9tUYh);
    {
        gTkUVeY5ijhv = 0;
        while (tg9tUYh - (49 - 48) >= gTkUVeY5ijhv) {
            scanf ("%d", &alLgIb8tWa[0][gTkUVeY5ijhv]);
            gTkUVeY5ijhv = gTkUVeY5ijhv + 1;
        };
    }
    {
        gTkUVeY5ijhv = 0;
        while (gTkUVeY5ijhv <= tg9tUYh - (278 - 277)) {
            scanf ("%d", &alLgIb8tWa[(33 - 32)][gTkUVeY5ijhv]);
            gTkUVeY5ijhv++;
        };
    }
    {
        gTkUVeY5ijhv = 0;
        while (tg9tUYh - (687 - 686) >= gTkUVeY5ijhv) {
            if (90 <= alLgIb8tWa[1][gTkUVeY5ijhv])
                aHnSaXC2vr[gTkUVeY5ijhv] = 4;
            else if (85 <= alLgIb8tWa[1][gTkUVeY5ijhv] && 89 >= alLgIb8tWa[1][gTkUVeY5ijhv])
                aHnSaXC2vr[gTkUVeY5ijhv] = 3.7;
            else if ((394 - 312) <= alLgIb8tWa[1][gTkUVeY5ijhv] && 84 >= alLgIb8tWa[1][gTkUVeY5ijhv])
                aHnSaXC2vr[gTkUVeY5ijhv] = 3.3;
            else if (78 <= alLgIb8tWa[1][gTkUVeY5ijhv] && 81 >= alLgIb8tWa[1][gTkUVeY5ijhv])
                aHnSaXC2vr[gTkUVeY5ijhv] = 3.0;
            else if (alLgIb8tWa[1][gTkUVeY5ijhv] >= 75 && alLgIb8tWa[1][gTkUVeY5ijhv] <= 77)
                aHnSaXC2vr[gTkUVeY5ijhv] = 2.7;
            else if (alLgIb8tWa[1][gTkUVeY5ijhv] >= 72 && alLgIb8tWa[1][gTkUVeY5ijhv] <= 74)
                aHnSaXC2vr[gTkUVeY5ijhv] = 2.3;
            else if (alLgIb8tWa[1][gTkUVeY5ijhv] >= 68 && alLgIb8tWa[1][gTkUVeY5ijhv] <= 71)
                aHnSaXC2vr[gTkUVeY5ijhv] = 2.0;
            else if (alLgIb8tWa[1][gTkUVeY5ijhv] >= 64 && alLgIb8tWa[1][gTkUVeY5ijhv] <= 67)
                aHnSaXC2vr[gTkUVeY5ijhv] = 1.5;
            else if (alLgIb8tWa[1][gTkUVeY5ijhv] >= 60 && alLgIb8tWa[1][gTkUVeY5ijhv] <= 63)
                aHnSaXC2vr[gTkUVeY5ijhv] = 1.0;
            else
                aHnSaXC2vr[gTkUVeY5ijhv] = 0;
            hDV5Lm2fdP = hDV5Lm2fdP + aHnSaXC2vr[gTkUVeY5ijhv] * alLgIb8tWa[0][gTkUVeY5ijhv];
            v5WH3mvUax = v5WH3mvUax + alLgIb8tWa[0][gTkUVeY5ijhv];
            gTkUVeY5ijhv++;
        };
    }
    Z1pRXEQF = hDV5Lm2fdP / (float) v5WH3mvUax;
    printf ("%.2f\n", Z1pRXEQF);
}

