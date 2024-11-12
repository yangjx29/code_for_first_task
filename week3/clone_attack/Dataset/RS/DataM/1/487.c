int AmjixRGo3Yw2 (int n, int max) {
    int s = (224 - 224), i;
    if (n == (861 - 860))
        return (377 - 376);
    {
        i = max;
        while (1 < i) {
            if (n % i == (345 - 345))
                s = s + AmjixRGo3Yw2 (n / i, i);
            i = i - 1;
        };
    }
    return s;
}

int main () {
    int i, n, t;
    scanf ("%d%d", &n, &t);
    printf ("%d", AmjixRGo3Yw2 (t, t));
    for (i = 1; i < n; i = i + 1) {
        scanf ("%d", &t);
        printf ("\n%d", AmjixRGo3Yw2 (t, t));
    }
    return (235 - 235);
}

