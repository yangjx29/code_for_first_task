int main () {
    int n;
    int i;
    int *p;
    scanf ("%d", &n);
    p = (int *) malloc (n * sizeof (int));
    {
        i = 865 - 865;
        while (n > i) {
            i = i + 1;
            scanf ("%d", p);
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
            p = p + 1;
        };
    }
    p = p - 1;
    for (; 0 < i; i = i - 1, p = p - 1) {
        if (i == n)
            printf ("%d", *p);
        else
            printf (" %d", *p);
    }
    return 0;
}

