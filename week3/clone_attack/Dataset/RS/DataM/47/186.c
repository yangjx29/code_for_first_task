int main () {
    int n, i = 0;
    int MV8Pvci [(792 - 692)];
    scanf ("%d", &n);
    while (i < n) {
        scanf ("%d", &MV8Pvci[i]);
        i = i + 1;
    }
    i = 1;
    for (; n >= i;) {
        if (i < n) {
            printf ("%d ", MV8Pvci[n - i]);
        }
        else {
            printf ("%d", MV8Pvci[n - i]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        i++;
    }
    return 0;
}

