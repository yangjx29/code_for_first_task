int main () {
    int n, YLJWokUy;
    int *Stack = (int *) malloc (n * sizeof (int));
    scanf ("%d", &n);
    {
        YLJWokUy = 0;
        while (YLJWokUy < n) {
            scanf ("%d", Stack +YLJWokUy);
            YLJWokUy = YLJWokUy +1;
        };
    }
    {
        YLJWokUy = n - 1;
        while (YLJWokUy >= 0) {
            if (YLJWokUy == 0)
                printf ("%d", *(Stack +YLJWokUy));
            else
                printf ("%d ", *(Stack +YLJWokUy));
            YLJWokUy = YLJWokUy -1;
        };
    }
    return 0;
}

