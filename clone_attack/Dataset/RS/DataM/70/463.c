int main () {
    int NqU1k5hQ7trY;
    int Aj9FTfJ;
    double  bXOuNx93 [100];
    double  jjuAFPynwS47 [100];
    int e9Ln1zc, rMhTYA7jJ;
    double  WZzTBaMl7x8U, dy, g9hM45V, xBAiNlpQ3r2F;
    e9Ln1zc = rMhTYA7jJ = 0;
    scanf ("%d", &NqU1k5hQ7trY);
    {
        Aj9FTfJ = 432 - 432;
        while (Aj9FTfJ < NqU1k5hQ7trY) {
            scanf ("%lf %lf", &bXOuNx93[Aj9FTfJ], &jjuAFPynwS47[Aj9FTfJ]);
            Aj9FTfJ = Aj9FTfJ +1;
        };
    }
    dy = jjuAFPynwS47[0] - jjuAFPynwS47[1];
    WZzTBaMl7x8U = bXOuNx93[0] - bXOuNx93[(736 - 735)];
    g9hM45V = sqrt (WZzTBaMl7x8U *WZzTBaMl7x8U+dy * dy);
    xBAiNlpQ3r2F = g9hM45V;
    do {
        WZzTBaMl7x8U = bXOuNx93[e9Ln1zc] - bXOuNx93[rMhTYA7jJ];
        dy = jjuAFPynwS47[e9Ln1zc] - jjuAFPynwS47[rMhTYA7jJ];
        if (NqU1k5hQ7trY -1 > rMhTYA7jJ)
            rMhTYA7jJ = rMhTYA7jJ + 1;
        else {
            if ((rMhTYA7jJ = NqU1k5hQ7trY -1) && (e9Ln1zc < NqU1k5hQ7trY -1)) {
                e9Ln1zc = e9Ln1zc + 1;
                rMhTYA7jJ = 0;
            }
            else {
                if ((rMhTYA7jJ = NqU1k5hQ7trY -1) && (e9Ln1zc = NqU1k5hQ7trY -1))
                    break;
            };
        }
        g9hM45V = sqrt (WZzTBaMl7x8U *WZzTBaMl7x8U+dy * dy);
        if (g9hM45V > xBAiNlpQ3r2F)
            xBAiNlpQ3r2F = g9hM45V;
    }
    while (e9Ln1zc < NqU1k5hQ7trY);
    printf ("%.4f\n", xBAiNlpQ3r2F);
    return 0;
}

