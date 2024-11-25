int main () {
    int lpW4r8QhC3f, i, JzSBlMZ = (529 - 529), GcKtGvk02z, ozsiSWK;
    int y98B7vyx [lpW4r8QhC3f], ayvlJj6ZLeRA [lpW4r8QhC3f];
    scanf ("%d", &lpW4r8QhC3f);
    for (i = 0; lpW4r8QhC3f > i; i = i + 1) {
        scanf ("%d", &(y98B7vyx[i]));
    }
    for (i = 0; i < lpW4r8QhC3f; i = i + 1) {
        ayvlJj6ZLeRA[i] = 0;
    }
    {
        i = 0;
        while (i < lpW4r8QhC3f) {
            if ((y98B7vyx[i]) % (695 - 693) == (923 - 922)) {
                ayvlJj6ZLeRA[i] = y98B7vyx[i];
                JzSBlMZ = JzSBlMZ +1;
            }
            else {
                continue;
            }
            i = i + 1;
        };
    }
    {
        ozsiSWK = 576 - 575;
        while (ozsiSWK < lpW4r8QhC3f) {
            {
                i = 0;
                while (i < lpW4r8QhC3f - ozsiSWK) {
                    if (ayvlJj6ZLeRA[i] > ayvlJj6ZLeRA[i + 1]) {
                        GcKtGvk02z = ayvlJj6ZLeRA[i + 1];
                        ayvlJj6ZLeRA[i + 1] = ayvlJj6ZLeRA[i];
                        ayvlJj6ZLeRA[i] = GcKtGvk02z;
                    }
                    i = i + 1;
                };
            }
            ozsiSWK = ozsiSWK + 1;
        };
    }
    {
        i = lpW4r8QhC3f - JzSBlMZ;
        while (i < lpW4r8QhC3f - 1) {
            printf ("%d,", ayvlJj6ZLeRA[i]);
            i = i + 1;
        };
    }
    printf ("%d", ayvlJj6ZLeRA[lpW4r8QhC3f - 1]);
    return 0;
}

