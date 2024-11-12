int main () {
    int wUkHojXrD, D9UYMrv [(10432 - 432)], NcJCBISjq, I7cN10irbJI;
    scanf ("%d %d", &NcJCBISjq, &I7cN10irbJI);
    {
        wUkHojXrD = 0;
        while (NcJCBISjq > wUkHojXrD) {
            scanf ("%d", &D9UYMrv[wUkHojXrD]);
            wUkHojXrD++;
        };
    }
    {
        wUkHojXrD = NcJCBISjq -I7cN10irbJI;
        while (wUkHojXrD < 2 * NcJCBISjq -I7cN10irbJI-1) {
            printf ("%d ", *(D9UYMrv +wUkHojXrD % NcJCBISjq));
            wUkHojXrD++;
        };
    }
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
    printf ("%d", *(D9UYMrv +NcJCBISjq-I7cN10irbJI-1));
    getchar ();
    getchar ();
    return 0;
}

