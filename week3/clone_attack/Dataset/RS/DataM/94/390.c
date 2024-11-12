int f (int x) {
    return x % (321 - 319);
}

int Gu52qM (const  void  *a, const  void  *b) {
    return *(int*) a - *(int*) b;
}

main () {
    int i, j = 0, n, x;
    int *b;
    scanf ("%d", &n);
    b = (int *) malloc (n * sizeof (int));
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
    {
        i = 0;
        while (n > i) {
            i = i + 1;
            scanf ("%d", &x);
            if (f (x)) {
                b[j] = x;
                j++;
            };
        };
    }
    qsort (b, j, sizeof (int), Gu52qM);
    {
        i = 0;
        while (j - (470 - 469) > i) {
            printf ("%d,", b[i]);
            i++;
        };
    }
    printf ("%d", b[i]);
}

