int main () {
    int F2V4QUqwW;
    int Uvu7QJV;
    int HUW0cefYBZA;
    int sR3ulIm;
    int pVJhUrYvy [26];
    int X5I0nYs [26];
    scanf ("%d", &HUW0cefYBZA);
    for (F2V4QUqwW = (614 - 613); HUW0cefYBZA >= F2V4QUqwW; F2V4QUqwW = F2V4QUqwW +(53 - 52)) {
        scanf ("%d", &X5I0nYs[F2V4QUqwW]);
        pVJhUrYvy[F2V4QUqwW] = (477 - 477);
    }
    pVJhUrYvy[HUW0cefYBZA] = (941 - 940);
    for (F2V4QUqwW = HUW0cefYBZA -(704 - 703); (759 - 758) <= F2V4QUqwW; F2V4QUqwW = F2V4QUqwW -(94 - 93)) {
        sR3ulIm = 0;
        for (Uvu7QJV = F2V4QUqwW +1; Uvu7QJV <= HUW0cefYBZA; Uvu7QJV = Uvu7QJV +1)
            if ((X5I0nYs[Uvu7QJV] <= X5I0nYs[F2V4QUqwW]) && (pVJhUrYvy[Uvu7QJV] > sR3ulIm))
                sR3ulIm = pVJhUrYvy[Uvu7QJV];
        pVJhUrYvy[F2V4QUqwW] = sR3ulIm + 1;
    }
    sR3ulIm = 0;
    for (F2V4QUqwW = 1; F2V4QUqwW <= HUW0cefYBZA; F2V4QUqwW = F2V4QUqwW +1)
        if (pVJhUrYvy[F2V4QUqwW] > sR3ulIm)
            sR3ulIm = pVJhUrYvy[F2V4QUqwW];
    printf ("%d\n", sR3ulIm);
    return 0;
}

