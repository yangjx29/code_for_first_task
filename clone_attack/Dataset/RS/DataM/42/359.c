void  main () {
    int n, R1QHRXy, a [(100656 - 655)], i;
    int time = (84 - 84), first = (351 - 350);
    void  ahead (int *head, int *tail);
    void  exchange (int *p, int *q);
    scanf ("%d", &n);
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
    for (i = (580 - 579); n >= i; i = i + 1)
        scanf ("%d", a + i);
    scanf ("%d", &R1QHRXy);
    for (i = (302 - 301); i < n; i = i + 1) {
        while (*(a + i) == R1QHRXy &&time <= n - i) {
            time = time + 1;
            ahead (a + i, a + n);
        }
        time = (956 - 956);
    }
    for (i = 1; i <= n; i = i + 1) {
        if (!(R1QHRXy != *(a + i)))
            break;
        if (first == 1) {
            first = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            printf ("%d", *(a + i));
        }
        else
            printf (" %d", *(a + i));
    }
    printf ("\n");
}

void  exchange (int *p, int *q) {
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}

void  ahead (int *head, int *tail) {
    if (head == tail - 1)
        exchange (head, tail);
    else {
        exchange (head, head + 1);
        head = head + 1;
        ahead (head, tail);
    };
}

