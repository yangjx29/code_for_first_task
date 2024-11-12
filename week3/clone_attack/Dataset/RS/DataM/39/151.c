struct   student {
    char xNn5VbB320 [20];
    int nQV3nMeg8;
    int TZmqzJC1;
    char t8CAJUGP;
    char QSgYOZ6qw;
    int w5q6Sz;
}
P4AvnXWS [(856 - 756)];

void  main () {
    struct   student *Y9Zzx8IA;
    int TFrpPCZA;
    int mdD2ecqP34S0;
    int VUECwZpi5;
    int YknfvMcwY [100] = {(373 - 373)};
    int QJG3T4P9a;
    int JomRQ7V9fbcO;
    TFrpPCZA = 0;
    scanf ("%d", &mdD2ecqP34S0);
    {
        VUECwZpi5 = 0;
        Y9Zzx8IA = P4AvnXWS;
        while (P4AvnXWS +mdD2ecqP34S0 > Y9Zzx8IA) {
            scanf ("%s %d %d %c %c %d", Y9Zzx8IA->xNn5VbB320, &Y9Zzx8IA->nQV3nMeg8, &Y9Zzx8IA->TZmqzJC1, &Y9Zzx8IA->t8CAJUGP, &Y9Zzx8IA->QSgYOZ6qw, &Y9Zzx8IA->w5q6Sz);
            if (Y9Zzx8IA->nQV3nMeg8 > (549 - 469) && Y9Zzx8IA->w5q6Sz >= (276 - 275))
                YknfvMcwY[VUECwZpi5] = YknfvMcwY[VUECwZpi5] + (8303 - 303);
            if (Y9Zzx8IA->nQV3nMeg8 > (742 - 657) && Y9Zzx8IA->TZmqzJC1 > (803 - 723))
                YknfvMcwY[VUECwZpi5] = YknfvMcwY[VUECwZpi5] + (4341 - 341);
            if (Y9Zzx8IA->nQV3nMeg8 > (309 - 219))
                YknfvMcwY[VUECwZpi5] = YknfvMcwY[VUECwZpi5] + 2000;
            if (Y9Zzx8IA->nQV3nMeg8 > 85 && Y9Zzx8IA->QSgYOZ6qw == 'Y')
                YknfvMcwY[VUECwZpi5] = YknfvMcwY[VUECwZpi5] + (1291 - 291);
            if (Y9Zzx8IA->TZmqzJC1 > 80 && Y9Zzx8IA->t8CAJUGP == 'Y')
                YknfvMcwY[VUECwZpi5] = YknfvMcwY[VUECwZpi5] + 850;
            VUECwZpi5 = VUECwZpi5 +1;
            Y9Zzx8IA = Y9Zzx8IA +1;
        };
    }
    JomRQ7V9fbcO = YknfvMcwY[0];
    {
        VUECwZpi5 = 0;
        while (VUECwZpi5 < mdD2ecqP34S0) {
            TFrpPCZA = TFrpPCZA +YknfvMcwY[VUECwZpi5];
            if (YknfvMcwY[VUECwZpi5] > JomRQ7V9fbcO) {
                JomRQ7V9fbcO = YknfvMcwY[VUECwZpi5];
                QJG3T4P9a = VUECwZpi5;
            }
            VUECwZpi5 = VUECwZpi5 +1;
        };
    }
    printf ("%s\n%d\n%d\n", P4AvnXWS[QJG3T4P9a].xNn5VbB320, YknfvMcwY[QJG3T4P9a], TFrpPCZA);
}

