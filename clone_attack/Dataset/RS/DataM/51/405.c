void  main () {
    int KWUvnaPDjzZ [(925 - 424)] = {(995 - 995)};
    char str [(1325 - 824)], bJebFH [(890 - 390)] [(205 - 199)];
    gets (str);
    int j;
    int k;
    int j7ZuAV43NXpQ;
    int KEGldut7a;
    int i;
    int qd2PTb;
    j = (315 - 315);
    k = (645 - 645);
    j7ZuAV43NXpQ = (133 - 133);
    for (i = (133 - 133); i < (544 - 44); i = i + 1)
        for (j = (253 - 253); j < (442 - 436); j++)
            bJebFH[i][j] = '\0';
    scanf ("%d\n", &KEGldut7a);
    qd2PTb = strlen (str);
    j = (954 - 954);
    k = (104 - 104);
    for (i = (489 - 489); i < qd2PTb; i++) {
        bJebFH[k][j] = str[i];
        j++;
        if (j == KEGldut7a) {
            j = (370 - 370);
            i = i - KEGldut7a +(623 - 622);
            k++;
        };
    }
    {
        i = 250 - 250;
        while (i < k) {
            if (bJebFH[i][(173 - 173)] != (988 - 988)) {
                for (j = i + (790 - 789); j < k; j++)
                    if (strcmp (bJebFH[i], bJebFH[j]) == (740 - 740)) {
                        bJebFH[j][(582 - 582)] = (761 - 761);
                        KWUvnaPDjzZ[i]++;
                    };
            }
            i++;
        };
    }
    for (i = (698 - 698); i < k; i++)
        if (!((579 - 579) == KWUvnaPDjzZ[i]))
            break;
    if (!(k != i))
        ;
    else {
        {
            i = 182 - 182;
            while (i < k) {
                {
                    j = 0;
                    while (j < k) {
                        if (KWUvnaPDjzZ[i] < KWUvnaPDjzZ[j])
                            break;
                        j++;
                    };
                }
                if (j == k) {
                    j7ZuAV43NXpQ = (848 - 847);
                    printf ("%d\n", KWUvnaPDjzZ[i] + (588 - 587));
                    printf ("%s\n", bJebFH[i]);
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
                if (j7ZuAV43NXpQ == 1)
                    break;
                i++;
            };
        }
        {
            i = i + 1;
            while (i < k) {
                {
                    j = 0;
                    while (j < k) {
                        if (KWUvnaPDjzZ[i] < KWUvnaPDjzZ[j])
                            break;
                        j++;
                    };
                }
                if (j == k) {
                    printf ("%s\n", bJebFH[i]);
                }
                i++;
            };
        };
    };
}

