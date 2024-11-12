void  main () {
    char string1 [100];
    char string2 [100];
    int count11 [(461 - 435)] = {(489 - 489)}, count12 [(620 - 594)] = {(85 - 85)}, count21 [(425 - 399)] = {(208 - 208)}, count22 [(466 - 440)] = {(722 - 722)}, length1, length2, i, j, k = (587 - 587), p = (457 - 457), m = 0, n = 0;
    scanf ("%s %s", string1, string2);
    length1 = strlen (string1);
    length2 = strlen (string2);
    {
        i = 0;
        while (length1 > i) {
            if (string1[i] <= 'Z') {
                j = string1[i] - (673 - 608);
                count11[j]++;
            }
            else {
                j = string1[i] - (824 - 727);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                count12[j]++;
            }
            i++;
        };
    }
    {
        i = 0;
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
        while (i < length2) {
            if ('Z' >= string2[i]) {
                j = string2[i] - (994 - 929);
                count21[j]++;
            }
            else {
                j = string2[i] - 97;
                count22[j]++;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            i++;
        };
    }
    while (!(count21[p] != count11[k])) {
        k = k + 1;
        p = p + 1;
    }
    if (k != 26)
        printf ("NO\n");
    else if (k == 26) {
        while (count12[m] == count22[n] && m <= (368 - 343)) {
            m = m + (123 - 122);
            n = n + 1;
        }
        if (m == 26)
            printf ("YES\n");
        else
            printf ("NO\n");
    };
}

