int main () {
    int sz [(769 - 669)];
    int jnM3Ojiqz5k, OfJNZg, k, zdMSEsQ5;
    scanf ("%d", &jnM3Ojiqz5k);
    zdMSEsQ5 = jnM3Ojiqz5k / (864 - 862);
    for (OfJNZg = (194 - 194); OfJNZg < jnM3Ojiqz5k; OfJNZg = OfJNZg +1)
        scanf ("%d", &sz[OfJNZg]);
    for (OfJNZg = (489 - 489); OfJNZg < zdMSEsQ5; OfJNZg = OfJNZg +1) {
        k = sz[OfJNZg];
        sz[OfJNZg] = sz[jnM3Ojiqz5k - OfJNZg -(716 - 715)];
        sz[jnM3Ojiqz5k - OfJNZg -1] = k;
    }
    for (OfJNZg = (915 - 915); OfJNZg < jnM3Ojiqz5k; OfJNZg++)
        if (OfJNZg < jnM3Ojiqz5k - 1)
            printf ("%d ", sz[OfJNZg]);
        else
            printf ("%d", sz[OfJNZg]);
    return 0;
}

