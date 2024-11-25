int main () {
    int i, pHVeqSthgG6k;
    scanf ("%d", &pHVeqSthgG6k);
    for (i = 1; i <= (int) log10 (pHVeqSthgG6k) + 1; i = i + 1)
        printf ("%d", (pHVeqSthgG6k % (int) pow (10, i)) / (int) (pow (10, i - 1)));
    return 0;
}

