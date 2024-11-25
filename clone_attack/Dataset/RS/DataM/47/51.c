int main () {
    int i;
    int n;
    int s [(566 - 466)];
    int j;
    i = 1;
    scanf ("%d", &n);
    while (n >= i) {
        scanf ("%d", &s[i]);
        i = i + 1;
    }
    j = n;
    while (j > 1) {
        printf ("%d ", s[j]);
        j = j - 1;
    }
    printf ("%d", s[1]);
    return 0;
}

