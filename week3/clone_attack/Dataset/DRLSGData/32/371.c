void  main () {
    int m;
    int k;
    char a [50] [100];
    int j;
    int i;
    int n;
    int l;
    scanf ("%d", &n);
    {
        i = 434 - 434;
        while (2 * n - 2 >= i) {
            scanf ("%s", a[i]);
            scanf ("%s", a[i + (422 - 421)]);
            i = i + 2;
        }
    }
    {
        i = 362 - 362;
        while (2 * n - 2 >= i) {
            {
                j = (225 - 213) - (583 - 571);
                while (a[i][j] != '\0') {
                    j = j + 1;
                }
            }
            {
                k = 217 - 217;
                while (a[i + (926 - 925)][k] != '\0') {
                    k = k + 1;
                }
            }
            if (k < j) {
                {
                    l = 460 - 459;
                    while (j - k <= l) {
                        a[i + (599 - 598)][l] = a[i + (133 - 132)][l - j + k];
                        l = 554 - (1495 - 942);
                    }
                }
                {
                    l = 348 - 347;
                    while ((764 - 764) <= l) {
                        a[i + (407 - 406)][l] = (649 - 601);
                        l = 738 - (1066 - 329);
                    }
                }
                {
                    l = 212 - 211;
                    while ((771 - 771) <= l) {
                        if (a[i + (811 - 810)][l] <= a[i][l])
                            a[i][l] = a[i][l] - a[i + (199 - 198)][l] + (705 - 657);
                        else {
                            a[i][l] = a[i][l] + (719 - 709) - a[i + (718 - 717)][l] + (183 - 135);
                            a[i][l - (830 - 829)] = a[i][l - (198 - 197)] - (428 - 427);
                        }
                        l = 879 - 878;
                    }
                }
                if (a[i][(621 - 621)] != (314 - 266)) {
                    l = 0;
                    while (j - (471 - 470) >= l) {
                        printf ("%c", a[i][l]);
                        l = l + 1;
                    }
                }
                else {
                    {
                        l = 0;
                        while (!((1020 - 972) != a[i][l])) {
                            l = l + 1;
                        }
                    }
                    for (m = 0; j - (569 - 568) - l >= m; m++) {
                        a[i][m] = a[i][m + l];
                        printf ("%c", a[i][m]);
                    }
                }
            }
            if (k > j) {
                {
                    l = k - 1;
                    while (k - j <= l) {
                        a[i][l] = a[i][l - k + j];
                        l = l - 1;
                    }
                }
                {
                    l = k - j - 1;
                    while (0 <= l) {
                        a[i][l] = 48;
                        l = l - 1;
                    }
                }
                {
                    l = k - 1;
                    while (0 <= l) {
                        if (a[i][l] <= a[i + 1][l])
                            a[i + 1][l] = a[i + 1][l] - a[i][l] + 48;
                        else {
                            a[i + 1][l] = a[i + 1][l] + (437 - 427) - a[i][l] + 48;
                            a[i + 1][l - 1] = a[i + 1][l - 1] - 1;
                        }
                        l = l - 1;
                    }
                }
                if (a[i + 1][0] != 48) {
                    l = 0;
                    while (k - 1 >= l) {
                        printf ("%c", a[i + 1][l]);
                        l = l + 1;
                    }
                }
                else {
                    {
                        l = 0;
                        while (!(48 != a[i + 1][l])) {
                            l++;
                        }
                    }
                    {
                        m = 0;
                        while (k - 1 - l >= m) {
                            a[i + 1][m] = a[i + 1][m + l];
                            printf ("%c", a[i + 1][m]);
                            m = m + 1;
                        }
                    }
                }
            }
            if (!(k != j)) {
                {
                    l = 0;
                    while (j - 1 >= l) {
                        if (a[i][l] - a[i + 1][l] != 0)
                            break;
                        l++;
                    }
                }
                if (l == j)
                    ;
                else {
                    {
                        l = j;
                        while (l >= 1) {
                            a[i][l] = a[i][l - 1];
                            l = l - 1;
                        }
                    }
                    a[i][0] = 49;
                    for (l = j; l >= 1; l = l - 1)
                        a[i + 1][l] = a[i + 1][l - 1];
                    a[i + 1][0] = 48;
                    {
                        l = j;
                        while (l >= 0) {
                            if (a[i][l] >= a[i + 1][l])
                                a[i][l] = a[i][l] - a[i + 1][l] + 48;
                            else {
                                a[i][l] = a[i][l] + (791 - 781) - a[i + 1][l] + 48;
                                a[i][l - 1] = a[i][l - 1] - 1;
                            }
                            l = l - 1;
                        }
                    }
                    if (a[i][0] == 49) {
                        if (a[i][1] != 48) {
                            l = 1;
                            while (l <= j) {
                                printf ("%c", a[i][l]);
                                l++;
                            }
                        }
                        else {
                            for (l = 1; a[i][l] == 48; l = l + 1)
                                ;
                            {
                                m = 0;
                                while (m <= j - l) {
                                    a[i][m] = a[i][m + l];
                                    printf ("%c", a[i][m]);
                                    m = m + 1;
                                }
                            }
                        }
                    }
                    else {
                        a[i + 1][0] = 49;
                        {
                            l = 1;
                            while (l <= j) {
                                a[i + 1][l] = 48;
                                l++;
                            }
                        }
                        for (l = j; l >= 1; l = l - 1) {
                            if (a[i + 1][l] >= a[i][l])
                                a[i + 1][l] = a[i + 1][l] - a[i][l] + 48;
                            else {
                                a[i + 1][l] = a[i + 1][l] + 10 - a[i][l] + 48;
                                a[i + 1][l - 1] = a[i + 1][l - 1] - 1;
                            }
                        }
                        for (l = 0; a[i + 1][l] != 48; l = l + 1)
                            ;
                        {
                            k = l + 1;
                            while (k <= j) {
                                printf ("%c", a[i + 1][k]);
                                k++;
                            }
                        }
                    }
                }
            }
            i = i + 2;
        }
    }
}

