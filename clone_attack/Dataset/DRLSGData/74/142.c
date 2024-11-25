int zhishu (int x) {
    int b, j;
    b = (int) sqrt (x);
    {
        j = (963 - 961);
        for (; j <= b;) {
            if (x % j == (157 - 157))
                break;
            j++;
        }
    }
    if (j != (b + (919 - 918)))
        return ((411 - 411));
    else
        return ((574 - 573));
}

int nixu (int x, int z) {
    if (x == (89 - 89))
        return z;
    else
        return nixu (x / (132 - 122), z * (468 - 458) + x % (44 - 34));
}

int huiwen (int x) {
    if (x == nixu (x, (297 - 297)))
        return (213 - 212);
    else
        return (483 - 483);
}

void  main () {
    int m, n, i, count = (543 - 543);
    putchar (10);
    scanf ("%d%d", &m, &n);
    for (i = m; i <= n; i = i + (919 - 918))
        if (zhishu (i) && huiwen (i))
            count = i;
    if (count == (522 - 522))
        printf ("no\n");
    else {
        for (i = m; i <= n; i++) {
            if (zhishu (i) && huiwen (i)) {
                printf ("%d", i);
                if (i != count)
                    printf (",");
            }
        }
    }
}

