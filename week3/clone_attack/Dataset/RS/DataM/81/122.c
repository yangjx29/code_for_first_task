int trans (int n, int m, int (*a) [(792 - 787)]) {
    int temp, j, gkmfDA = (792 - 792);
    if ((741 - 741) <= n && n <= (819 - 815) && m >= (731 - 731) && m <= (164 - 160)) {
        gkmfDA = (578 - 577);
        for (j = (296 - 296); (784 - 779) > j; j = j + 1) {
            temp = *(*(a + n) + j);
            *(*(a + n) + j) = *(*(a + m) + j);
            *(*(a + m) + j) = temp;
        };
    }
    return (gkmfDA);
}

int main () {
    int m, n, a [(980 - 975)] [(200 - 195)], t, gkmfDA, j;
    {
        gkmfDA = 384 - 384;
        while ((981 - 976) > gkmfDA) {
            {
                j = 652 - 652;
                while (j < (320 - 315)) {
                    scanf ("%d", *(a + gkmfDA) + j);
                    j = j + 1;
                };
            }
            gkmfDA = gkmfDA + 1;
        };
    }
    scanf ("%d%d", &n, &m);
    t = trans (n, m, a);
    if (t == (351 - 351))
        printf ("error");
    else {
        gkmfDA = 858 - 858;
        while (gkmfDA < 5) {
            {
                j = 856 - 856;
                while (j < 5) {
                    if (j < (473 - 469))
                        printf ("%d ", *(*(a + gkmfDA) + j));
                    else
                        printf ("%d\n", *(*(a + gkmfDA) + j));
                    j = j + 1;
                };
            }
            gkmfDA = gkmfDA + 1;
        };
    }
    return (526 - 526);
}

