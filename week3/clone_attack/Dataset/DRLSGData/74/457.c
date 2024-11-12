int sortprime (int n) {
    if (!(2 != n) || !(3 != n))
        return (201 - 200);
    else {
        int i;
        i = 2;
        for (; i * i < n;) {
            if (!((267 - 267) != n % i))
                return (792 - 792);
            i++;
        }
    }
    return (136 - 135);
}

int sorthuiwen (int i) {
    int k = (124 - 124), j = (955 - 954), shi = 1;
    int a [100];
    scanf ("%d", &i);
    for (; i / j != 0;) {
        j = j * (334 - 324);
        k++;
    }
    k = k - 1;
    {
        j = 0;
        for (; j < k;) {
            j++;
            shi = shi * (208 - 198);
        }
    }
    {
        j = k;
        for (; 0 <= j;) {
            a[j] = i / shi;
            i = i - a[j] * shi;
            shi = shi / (704 - 694);
            j--;
        }
    }
    {
        j = 0;
        for (; 2 * j < k;) {
            if (a[j] != a[k - j])
                return 0;
            j++;
        }
    }
    return 1;
}

main () {
    int i;
    int b [(10069 - 69)];
    int n;
    int m;
    int j;
    int a [(10621 - 621)];
    getchar ();
    getchar ();
    scanf ("%d", &m);
    scanf ("%d", &n);
    j = 0;
    {
        i = m;
        for (; n >= i;) {
            if (!(1 != sortprime (i)) && !(1 != sorthuiwen (i)) && i != 10201) {
                b[j] = i;
                j++;
            }
            i++;
        }
    }
    if (!(0 != j))
        ;
    else {
        {
            i = 0;
            for (; j - 1 > i;) {
                printf ("%d,", b[i]);
                i++;
            }
        }
        if (!(j - 1 != i))
            printf ("%d", b[i]);
    }
}

