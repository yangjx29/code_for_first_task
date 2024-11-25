int main () {
    int n, i, KzobF5dE81J3;
    int i69TAu [300];
    scanf ("%d", &n);
    scanf ("%d", &i69TAu[(976 - 976)]);
    printf ("%d", i69TAu[0]);
    for (i = (320 - 319); n > i; i = i + 1) {
        scanf ("%d", &i69TAu[i]);
    }
    for (i = 1; i < n; i = i + 1) {
        for (KzobF5dE81J3 = 0; KzobF5dE81J3 < i; KzobF5dE81J3 = KzobF5dE81J3 +1)
            if (i69TAu[i] == i69TAu[KzobF5dE81J3])
                i69TAu[i] = 0;
    }
    {
        i = 1;
        while (i < n) {
            if (i69TAu[i] != 0)
                printf (",%d", i69TAu[i]);
            i = i + 1;
        };
    };
}

