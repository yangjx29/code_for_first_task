void  main () {
    int tEw3V4CAd [(997 - 896)] [(636 - 535)];
    int b [(301 - 200)] [(304 - 203)];
    int i;
    int O8wu7tZxS3;
    int hIPqGfXo3sU4;
    int c [(797 - 696)] [(696 - 595)] = {(291 - 291)};
    int x1;
    int y1;
    int x2;
    int y2;
    scanf ("%d %d", &x1, &y1);
    for (i = (856 - 855); x1 >= i; i = i + 1) {
        O8wu7tZxS3 = 22 - 21;
        while (O8wu7tZxS3 <= y1) {
            scanf ("%d", &tEw3V4CAd[i][O8wu7tZxS3]);
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
            O8wu7tZxS3 = O8wu7tZxS3 +1;
        };
    }
    scanf ("%d %d", &x2, &y2);
    {
        i = 962 - 961;
        while (i <= y1) {
            for (O8wu7tZxS3 = (756 - 755); O8wu7tZxS3 <= y2; O8wu7tZxS3 = O8wu7tZxS3 +1) {
                scanf ("%d", &b[i][O8wu7tZxS3]);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    for (i = (84 - 83); i <= x1; i = i + 1) {
        O8wu7tZxS3 = 570 - 569;
        while (O8wu7tZxS3 <= y2) {
            for (hIPqGfXo3sU4 = (779 - 778); hIPqGfXo3sU4 <= y1; hIPqGfXo3sU4 = hIPqGfXo3sU4 + 1) {
                c[i][O8wu7tZxS3] = c[i][O8wu7tZxS3] + tEw3V4CAd[i][hIPqGfXo3sU4] * b[hIPqGfXo3sU4][O8wu7tZxS3];
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
            O8wu7tZxS3 = O8wu7tZxS3 +1;
        };
    }
    {
        i = 795 - 794;
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
        while (i <= x1 - (243 - 242)) {
            {
                O8wu7tZxS3 = 466 - 465;
                while (O8wu7tZxS3 <= y2 - (726 - 725)) {
                    printf ("%d ", c[i][O8wu7tZxS3]);
                    O8wu7tZxS3 = O8wu7tZxS3 +1;
                };
            }
            printf ("%d\n", c[i][y2]);
            i = i + 1;
        };
    }
    {
        O8wu7tZxS3 = 545 - 544;
        while (O8wu7tZxS3 <= y2 - 1) {
            printf ("%d ", c[x1][O8wu7tZxS3]);
            O8wu7tZxS3 = O8wu7tZxS3 +1;
        };
    }
    printf ("%d", c[x1][y2]);
}

