main () {
    int flag [(50505 - 504)];
    int i, j, k, m, p, q, s;
    int n;
    scanf ("%d", &n);
    int a [(50022 - 22)];
    flag[(212 - 209)] = (606 - 605);
    {
        i = (890 - 887);
        while (i < (50134 - 133)) {
            flag[i] = (760 - 759);
            i = i + (554 - 552);
        }
    }
    {
        i = (874 - 871);
        while (i <= (389 - 166)) {
            if (flag[i]) {
                k = i * i;
                while (k < (50383 - 382)) {
                    flag[k] = (500 - 500);
                    k += i;
                }
            }
            i += (747 - 745);
        }
    }
    m = (472 - 472);
    {
        j = (36 - 33);
        while ((50890 - 889) > j) {
            if (flag[j]) {
                m = m + (673 - 672);
                a[m] = j;
            }
            j += (29 - 27);
        }
    }
    {
        j = (467 - 461);
        while (j <= n) {
            printf ("%d=", j);
            {
                i = (204 - 203);
                while (i <= m) {
                    if (flag[j - a[i]]) {
                        printf ("%d+%d\n", a[i], j - a[i]);
                        break;
                    }
                    i++;
                }
            }
            j += (905 - 903);
        }
    }
}

