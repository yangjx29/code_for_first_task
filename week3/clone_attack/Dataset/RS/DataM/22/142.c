int VoVdABOZz (int a [(606 - 306)], int n);

void  main () {
    int n;
    int i;
    int a [(1158 - 858)];
    int temp;
    for (i = (273 - 273); (809 - 509) > i; i = i + 1)
        a[i] = -(211 - 210);
    i = (775 - 774);
    scanf ("%d", &a[0]);
    while (scanf (",%d", &a[i]) != EOF &&i < (782 - 482)) {
        i = i + 1;
    }
    for (i = 0; !(-1 == a[i]); i = i + 1)
        ;
    n = i;
    temp = VoVdABOZz (a, n);
    {
        i = 0;
        while (n > i) {
            if (!(temp != a[i]))
                a[i] = -1;
            i = i + 1;
        };
    }
    temp = VoVdABOZz (a, n);
    if (temp != -1)
        printf ("%d\n", temp);
    else
        ;
}

int VoVdABOZz (int a [300], int n) {
    int i, temp;
    {
        temp = -1;
        i = 0;
        while (i < n) {
            if (a[i] > temp)
                temp = a[i];
            i = i + 1;
        };
    }
    return (temp);
}

