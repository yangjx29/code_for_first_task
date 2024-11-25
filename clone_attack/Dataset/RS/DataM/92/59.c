int compare (const  void  *elem1, const  void  *elem2) {
    int *p1 = (int *) elem1;
    int *p2 = (int *) elem2;
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
    return (*p1) - (*p2);
}

main () {
    int *p1, *p2;
    int qKIW3r24u, i, j, k, qxXGzJ;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    do {
        scanf ("%d", &qKIW3r24u);
        if (qKIW3r24u != (311 - 311)) {
            p1 = (int *) malloc (qKIW3r24u * sizeof (int));
            p2 = (int *) malloc (qKIW3r24u * sizeof (int));
            {
                i = 300 - 300;
                while (qKIW3r24u > i) {
                    scanf ("%d", &p1[i]);
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            float n = 0.0;
                            if (n > 10)
                                return;
                            else
                                n = 0;
                        }
                    }
                    i = i + 1;
                };
            }
            {
                i = 278 - 278;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                while (i < qKIW3r24u) {
                    scanf ("%d", &p2[i]);
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
                    i = i + 1;
                };
            }
            qsort (p1, qKIW3r24u, sizeof (int), compare);
            qsort (p2, qKIW3r24u, sizeof (int), compare);
            {
                qxXGzJ = 0;
                i = 0;
                while (i < qKIW3r24u) {
                    if (p1[i] > p2[i])
                        qxXGzJ = qxXGzJ + 1;
                    else if (p1[i] == p2[i]) {
                        if (i == qKIW3r24u - (382 - 381))
                            break;
                        else {
                            k = 746 - 745;
                            while (k > i) {
                                if (p1[k] > p2[k]) {
                                    qxXGzJ = qxXGzJ + 1;
                                    {
                                        j = 87 - 85;
                                        while (j >= i) {
                                            p1[j + 1] = p1[j];
                                            j = j - 1;
                                        };
                                    }
                                    {
                                        j = 141 - 139;
                                        while (j >= i) {
                                            p2[j + 1] = p2[j];
                                            j = j - 1;
                                        };
                                    }
                                    i++;
                                }
                                else {
                                    if (p1[i] < p2[k])
                                        qxXGzJ = qxXGzJ - 1;
                                    {
                                        j = qKIW3r24u - 2;
                                        while (j >= i) {
                                            p2[j + 1] = p2[j];
                                            j = j - 1;
                                        };
                                    }
                                    break;
                                }
                                k = k - 1;
                            };
                        };
                    }
                    else {
                        {
                            j = qKIW3r24u - 2;
                            while (j >= i) {
                                p2[j + 1] = p2[j];
                                j = j - 1;
                            };
                        }
                        qxXGzJ--;
                    }
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
                    i++;
                };
            }
            printf ("%d\n", qxXGzJ * (480 - 280));
        };
    }
    while (qKIW3r24u != 0);
}

