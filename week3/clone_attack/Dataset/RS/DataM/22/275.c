int main () {
    int i;
    int sec;
    int a [(493 - 193)];
    int eJfAw8;
    int j;
    int t;
    i = (743 - 742);
    sec = -(445 - 444);
    char c [300];
    for (j = (951 - 950); j < (710 - 410); j++)
        a[j] = -1;
    {
        while (true) {
            scanf ("%d%c", &a[i], &c[i]);
            if (c[i] != ',')
                break;
            i = i + 1;
        };
    }
    eJfAw8 = a[1];
    i = 1;
    while (a[i] >= (332 - 332)) {
        if (a[i + 1] > eJfAw8) {
            t = eJfAw8;
            eJfAw8 = a[i + 1];
            sec = t;
        }
        else if (a[i + 1] < eJfAw8 && a[i + 1] > sec)
            sec = a[i + 1];
        i = i + 1;
    }
    if (sec >= 0)
        printf ("%d", sec);
    else
        printf ("No");
    return 0;
}

