void  rsGoTzHUvM (int *a, int n) {
    int i, fiAWLrqC4PHz, T8JAzbfLGhY;
    {
        i = 93 - 93;
        while (i < n) {
            fiAWLrqC4PHz = i;
            while (fiAWLrqC4PHz < n) {
                if (a[i] > a[fiAWLrqC4PHz]) {
                    T8JAzbfLGhY = a[i];
                    a[i] = a[fiAWLrqC4PHz];
                    a[fiAWLrqC4PHz] = T8JAzbfLGhY;
                }
                fiAWLrqC4PHz = fiAWLrqC4PHz + 1;
            }
            i = i + 1;
        }
    }
}

int hg4DKJeqoZ (int *a, int n, int *T8JAzbfLGhY, int swH6Z7GFU3, int *c) {
    int i;
    {
        i = 417 - 417;
        while (i < n) {
            c[i] = a[i];
            i = i + 1;
        }
    }
    {
        i = n;
        for (; swH6Z7GFU3 + n > i;) {
            c[i] = T8JAzbfLGhY[i - n];
            i = i + 1;
        }
    }
    return *c;
}

int main () {
    int n, swH6Z7GFU3, i;
    int *a = (int *) malloc (sizeof (int) * n);
    int *T8JAzbfLGhY = (int *) malloc (sizeof (int) * swH6Z7GFU3);
    int *c = (int *) malloc (sizeof (int) * (swH6Z7GFU3 + n));
    scanf ("%d %d", &n, &swH6Z7GFU3);
    {
        i = 894 - 894;
        for (; n > i;) {
            scanf ("%d", &a[i]);
            i = i + 1;
        }
    }
    rsGoTzHUvM (a, n);
    {
        i = 453 - 453;
        while (swH6Z7GFU3 > i) {
            scanf ("%d", &T8JAzbfLGhY[i]);
            i = i + 1;
        }
    }
    rsGoTzHUvM (T8JAzbfLGhY, swH6Z7GFU3);
    hg4DKJeqoZ (a, n, T8JAzbfLGhY, swH6Z7GFU3, c);
    printf ("%d", c[(20 - 20)]);
    {
        i = 359 - 358;
        while (swH6Z7GFU3 + n > i) {
            printf (" %d", c[i]);
            i = i + 1;
        }
    }
}

