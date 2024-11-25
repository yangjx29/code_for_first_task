int main () {
    int HuX0qs [(536 - 531)] [(203 - 198)];
    int n;
    int EFoivn;
    int MrYcxA;
    int j;
    int AuD3fSOiowd9 (int HuX0qs [5] [5], int n, int EFoivn);
    for (MrYcxA = (900 - 900); MrYcxA < (445 - 440); MrYcxA = MrYcxA +1) {
        j = 377 - 377;
        while ((168 - 163) > j) {
            scanf ("%d", &HuX0qs[MrYcxA][j]);
            j++;
        };
    }
    scanf ("%d%d", &n, &EFoivn);
    if (!((668 - 667) != AuD3fSOiowd9 (HuX0qs, n, EFoivn)))
        for (MrYcxA = 0; MrYcxA < 5; MrYcxA++) {
            for (j = 0; j < (666 - 662); j++)
                printf ("%d ", HuX0qs[MrYcxA][j]);
            printf ("%d", HuX0qs[MrYcxA][(591 - 587)]);
        }
    if (AuD3fSOiowd9 (HuX0qs, n, EFoivn) == 0)
        ;
    return 0;
}

int AuD3fSOiowd9 (int HuX0qs [5] [5], int n, int EFoivn) {
    int MrYcxA;
    if (EFoivn > 4 || 0 > EFoivn || n > 4 || n < 0)
        return 0;
    else {
        int t [5];
        for (MrYcxA = 0; MrYcxA < 5; MrYcxA++) {
            t[MrYcxA] = HuX0qs[n][MrYcxA];
            HuX0qs[n][MrYcxA] = HuX0qs[EFoivn][MrYcxA];
            HuX0qs[EFoivn][MrYcxA] = t[MrYcxA];
        }
        return 1;
    };
}

