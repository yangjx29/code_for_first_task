int main (int argc, char *argv []) {
    char a [1000];
    int b [1000] = {1};
    int flag;
    int w7dUh8KSuX;
    int CwBF1RqK;
    int w;
    int k;
    int NnH1edRVWa;
    int huopnwQfRC;
    int n;
    for (NnH1edRVWa = 0; 1000 > NnH1edRVWa; NnH1edRVWa++)
        b[NnH1edRVWa] = 1;
    scanf ("%d", &n);
    scanf ("%s", a);
    CwBF1RqK = strlen (a);
    huopnwQfRC = 0;
    flag = 0;
    for (NnH1edRVWa = 0; NnH1edRVWa < CwBF1RqK -n; NnH1edRVWa++) {
        for (w7dUh8KSuX = NnH1edRVWa +1; CwBF1RqK > w7dUh8KSuX; w7dUh8KSuX++) {
            flag = 0;
            for (k = NnH1edRVWa; k < NnH1edRVWa +n; k++) {
                if (a[k] != a[w7dUh8KSuX]) {
                    w = flag;
                    flag = 0;
                    break;
                }
                else {
                    w7dUh8KSuX++;
                    flag++;
                }
            }
            if (flag == n) {
                w7dUh8KSuX = w7dUh8KSuX - n;
                b[NnH1edRVWa]++;
            }
            else {
                w7dUh8KSuX = w7dUh8KSuX - w;
                k = k - w;
            }
        }
    }
    for (NnH1edRVWa = 0; NnH1edRVWa < 1000; NnH1edRVWa++)
        if (b[NnH1edRVWa] > huopnwQfRC)
            huopnwQfRC = b[NnH1edRVWa];
    if (huopnwQfRC == 1)
        ;
    else {
        printf ("%d\n", huopnwQfRC);
        for (NnH1edRVWa = 0; NnH1edRVWa < 1000; NnH1edRVWa++) {
            if (b[NnH1edRVWa] == huopnwQfRC) {
                for (w7dUh8KSuX = NnH1edRVWa; w7dUh8KSuX < NnH1edRVWa +n; w7dUh8KSuX++)
                    printf ("%c", a[w7dUh8KSuX]);
            }
        }
    }
    return 0;
}

