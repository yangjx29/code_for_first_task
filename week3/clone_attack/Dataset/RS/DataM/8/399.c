int UQvsZw, ucJtjTN, YfzXecs [(659 - 609)], zdJY7jGHFx [(318 - 268)], YCAF15dZUP [100];

void  f1 (int YfzXecs [], int zdJY7jGHFx []) {
    int i;
    scanf ("%d %d", &UQvsZw, &ucJtjTN);
    for (i = (590 - 589); UQvsZw >= i; i = i + 1)
        scanf ("%d", &YfzXecs[i]);
    for (i = (783 - 782); i <= ucJtjTN; i = i + 1)
        scanf ("%d", &zdJY7jGHFx[i]);
}

void  f2 (int l, int a []) {
    int i;
    int j;
    int hWanV8iA;
    for (i = (135 - 134); l > i; i++) {
        j = 586 - 585;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        while (l - i >= j) {
            if (a[j] > a[j + (681 - 680)]) {
                hWanV8iA = a[j];
                a[j] = a[j + (906 - 905)];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                a[j + 1] = hWanV8iA;
            }
            j++;
        };
    };
}

void  f3 (int YfzXecs [], int zdJY7jGHFx [], int YCAF15dZUP []) {
    int i;
    for (i = 1; i <= UQvsZw; i++)
        YCAF15dZUP[i] = YfzXecs[i];
    for (i = UQvsZw +1; i <= UQvsZw +ucJtjTN; i++)
        YCAF15dZUP[i] = zdJY7jGHFx[i - UQvsZw];
}

void  Bz4Svdw (int YCAF15dZUP []) {
    int i;
    for (i = 1; i <= UQvsZw +ucJtjTN; i++) {
        if (i != 1)
            printf (" ");
        printf ("%d", YCAF15dZUP[i]);
    };
}

main () {
    Bz4Svdw (YCAF15dZUP);
    f1 (YfzXecs, zdJY7jGHFx);
    f2 (UQvsZw, YfzXecs);
    f2 (ucJtjTN, zdJY7jGHFx);
    f3 (YfzXecs, zdJY7jGHFx, YCAF15dZUP);
}

