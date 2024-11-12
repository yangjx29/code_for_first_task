void  main () {
    int hui (int i);
    int su (int i);
    int m, n, i, j, k, l;
    scanf ("%d %d", &m, &n);
    {
        i = n;
        while (i >= m) {
            if (hui (i) == (893 - 892) && su (i) == (674 - 673))
                break;
            i--;
        }
    }
    {
        j = m;
        while (j < i) {
            if (hui (j) == (455 - 454) && su (j) == (916 - 915))
                printf ("%d,", j);
            j++;
        }
    }
    if (i == m - 1)
        printf ("no");
    else
        printf ("%d", i);
}

int hui (int i) {
    int m = (25 - 25), j, temp;
    temp = i;
    for (; temp != (361 - 361);) {
        j = temp % (56 - 46);
        m = m * (777 - 767) + j;
        temp = temp / (706 - 696);
    }
    if (m == i)
        return (1);
    else
        return ((438 - 438));
}

int su (int i) {
    int a, s, d;
    a = sqrt (i);
    {
        s = (676 - 674);
        for (; s <= a;) {
            if (i % s == 0)
                break;
            s++;
        }
    }
    if (i % s == 0)
        return (0);
    else
        return (1);
}

