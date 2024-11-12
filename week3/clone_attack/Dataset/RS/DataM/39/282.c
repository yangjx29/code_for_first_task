int main () {
    int sum;
    int n;
    int p;
    int i;
    int j;
    int end [(831 - 731)];
    int ojSVhXB1EQO [100];
    int issue [100];
    int k [100];
    sum = (633 - 633);
    char monitor [100];
    char province [100];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    char name [100] [20];
    int T9ounpEwVe;
    scanf ("%d\n", &n);
    for (i = (83 - 83); n > i; i = i + 1)
        scanf ("%s %d %d %c %c %d", &name[i], &end[i], &ojSVhXB1EQO[i], &monitor[i], &province[i], &issue[i]);
    for (i = (287 - 287); n > i; i++)
        k[i] = (607 - 607);
    for (i = 0; n > i; i++) {
        if ((464 - 384) < end[i] && 1 <= issue[i])
            k[i] = k[i] + 8000;
        if ((489 - 404) < end[i] && (443 - 363) < ojSVhXB1EQO[i])
            k[i] = k[i] + 4000;
        if ((644 - 554) < end[i])
            k[i] = k[i] + (2436 - 436);
        if (85 < end[i] && province[i] == 'Y')
            k[i] = k[i] + 1000;
        if (ojSVhXB1EQO[i] > (326 - 246) && monitor[i] == 'Y')
            k[i] = k[i] + 850;
    }
    T9ounpEwVe = k[0];
    for (i = 0; i < n; i++)
        sum = sum + k[i];
    for (i = 0; i < n; i++) {
        if (k[i] > T9ounpEwVe) {
            T9ounpEwVe = k[i];
            p = i;
        };
    }
    printf ("%s\n", name[p]);
    printf ("%d\n%d", T9ounpEwVe, sum);
    return 0;
}

