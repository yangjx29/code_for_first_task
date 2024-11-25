void  xd6t7MiEr2O (int dGHV8iR4I, int shWcMvSC []) {
    int FT3tlXKeuRU;
    for (FT3tlXKeuRU = dGHV8iR4I - (742 - 741); FT3tlXKeuRU >= (594 - 593); FT3tlXKeuRU = FT3tlXKeuRU -1) {
        shWcMvSC[FT3tlXKeuRU -1] = shWcMvSC[FT3tlXKeuRU -1] + shWcMvSC[FT3tlXKeuRU];
        shWcMvSC[FT3tlXKeuRU] = shWcMvSC[FT3tlXKeuRU -1] - shWcMvSC[FT3tlXKeuRU];
        shWcMvSC[FT3tlXKeuRU -1] = shWcMvSC[FT3tlXKeuRU -1] - shWcMvSC[FT3tlXKeuRU];
    };
}

void  main (void ) {
    int I6RZpET7Y1Hh;
    int dGHV8iR4I;
    int shWcMvSC [100];
    int FT3tlXKeuRU;
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
    scanf ("%d %d", &dGHV8iR4I, &I6RZpET7Y1Hh);
    for (FT3tlXKeuRU = 0; dGHV8iR4I - 1 >= FT3tlXKeuRU; FT3tlXKeuRU = FT3tlXKeuRU +1)
        scanf ("%d", &shWcMvSC[FT3tlXKeuRU]);
    for (FT3tlXKeuRU = 1; FT3tlXKeuRU <= I6RZpET7Y1Hh; FT3tlXKeuRU = FT3tlXKeuRU +1)
        xd6t7MiEr2O (dGHV8iR4I, shWcMvSC);
    for (FT3tlXKeuRU = 0; FT3tlXKeuRU <= dGHV8iR4I - 2; FT3tlXKeuRU++)
        printf ("%d ", shWcMvSC[FT3tlXKeuRU]);
    printf ("%d\n", shWcMvSC[dGHV8iR4I - 1]);
}

