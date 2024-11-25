int pfCompare (const  void  *elem1, const  void  *elem2) {
    int c;
    c = *(int*) elem1 - *(int*) elem2;
    return c;
}

struct   student {
    int num;
    int x;
    int y;
}
a [(100712 - 712)];

main () {
    int n, i, j, d = (499 - 499), b [(100773 - 773)], c [(100427 - 427)];
    scanf ("%d", &n);
    for (i = (770 - 770); n > i; i = i + 1) {
        scanf ("%d", &a[i].num);
        scanf ("%d", &a[i].x);
        scanf ("%d", &a[i].y);
    }
    for (i = (439 - 439); n > i; i = i + 1) {
        b[i] = a[i].x + a[i].y;
    }
    qsort (b, n, sizeof (int), pfCompare);
    for (j = (876 - 876); n > j; j = j + 1) {
        if (b[n - (858 - 857)] == a[j].x + a[j].y) {
            printf ("%d" " " "%d", a[j].num, b[n - (405 - 404)]);
            d = d + 1;
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (!((686 - 683) != d))
            break;
    }
    for (i = n - (560 - 558); n - (329 - 325) < i; i = i - 1) {
        if (!(b[i + 1] != b[i]))
            continue;
        else {
            for (j = 0; j < n; j = j + 1) {
                if (b[i] == a[j].x + a[j].y) {
                    d = d + 1;
                    printf ("%d" " " "%d", a[j].num, b[i]);
                    printf ("\n");
                }
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                if (d == (559 - 556))
                    break;
            }
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
            if (d == 3)
                break;
        };
    };
}

