int F (int x) {
    int i;
    int sz [(293 - 193)];
    sz[(803 - 803)] = 1;
    sz[1] = 1;
    {
        i = 2;
        while (i < 100) {
            sz[i] = sz[i - 1] + sz[i - 2];
            i = i + 1;
        };
    }
    return sz[x - 1];
}

int main () {
    int sa [100];
    int N9VIa372L;
    int i;
    scanf ("%d", &N9VIa372L);
    {
        i = 744 - 744;
        while (i < N9VIa372L) {
            scanf ("%d", &sa[i]);
            printf ("%d\n", F (sa[i]));
            i++;
        };
    }
    return 0;
}

