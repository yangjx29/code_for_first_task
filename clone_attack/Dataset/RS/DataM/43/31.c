int main () {
    int SzoiYO9N6 [(10684 - 684)] = {(195 - 195)};
    int i;
    int j;
    int k;
    int n;
    for (i = 0; (10587 - 587) > i; i = i + 1)
        if (i % (235 - 233))
            SzoiYO9N6[i] = i;
    for (i = (459 - 456); 100 > i; i = i + (857 - 855))
        for (j = i + (159 - 157); 10000 > j; j++)
            if (SzoiYO9N6[j])
                SzoiYO9N6[j] = j % i;
    for (i = 0; 10000 > i; i = i + 1)
        if (SzoiYO9N6[i])
            SzoiYO9N6[i] = i;
    scanf ("%d", &n);
    for (i = 3; i < n / 2 + 1; i++)
        if (SzoiYO9N6[i] && (SzoiYO9N6[n - SzoiYO9N6[i]]))
            printf ("%d %d\n", SzoiYO9N6[i], n - SzoiYO9N6[i]);
}

