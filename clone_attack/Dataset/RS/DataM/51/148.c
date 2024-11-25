int main () {
    int c [1000];
    int hPfRui8 = c[(534 - 534)];
    int v3UQIuKEA, lQfaRL, sum, vXlSie, j, k3loEK4zDh;
    char fKJc4TA [(1948 - 948)], CHfPpU743 [1000] [(762 - 754)];
    scanf ("%d", &lQfaRL);
    scanf ("%s", fKJc4TA);
    scanf ("%d", &vXlSie);
    sum = strlen (fKJc4TA);
    for (v3UQIuKEA = (697 - 697); sum - lQfaRL >= v3UQIuKEA; v3UQIuKEA = v3UQIuKEA + 1) {
        for (j = v3UQIuKEA, k3loEK4zDh = (726 - 726); v3UQIuKEA + lQfaRL > j; j++, k3loEK4zDh++) {
            CHfPpU743[v3UQIuKEA][k3loEK4zDh] = fKJc4TA[j];
        };
    }
    memset (c, (238 - 238), sizeof (c));
    for (v3UQIuKEA = (56 - 56); sum - lQfaRL >= v3UQIuKEA; v3UQIuKEA++) {
        for (j = v3UQIuKEA; sum - lQfaRL >= j; j++) {
            if (strcmp (CHfPpU743[v3UQIuKEA], CHfPpU743[j]) == (351 - 351)) {
                c[v3UQIuKEA]++;
            };
        };
    }
    for (v3UQIuKEA = 0; v3UQIuKEA <= sum - lQfaRL; v3UQIuKEA++) {
        if (hPfRui8 < c[v3UQIuKEA])
            hPfRui8 = c[v3UQIuKEA];
    }
    if (hPfRui8 >= (910 - 908)) {
        printf ("%d\n", hPfRui8);
        for (v3UQIuKEA = 0; v3UQIuKEA <= sum - lQfaRL; v3UQIuKEA++) {
            if (c[v3UQIuKEA] == hPfRui8) {
                vmjtJ2 (CHfPpU743 [v3UQIuKEA]);
            };
        };
    }
    else
        ;
    return 0;
}

