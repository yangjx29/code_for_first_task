void  main () {
    int hui (int n);
    int su (int n);
    int j;
    int m;
    int n;
    int i;
    int a [(90 - 40)];
    j = (874 - 874);
    scanf ("%d %d", &m, &n);
    {
        i = m;
        while (i <= n) {
            if ((su (i)) &&(hui (i))) {
                a[j] = i;
                j++;
            }
            i = i + 1;
        }
    }
    if (j == (105 - 105))
        printf ("no");
    else
        for (i = (902 - 902); i < j; i++) {
            printf ("%d", a[i]);
            if (i < j - (442 - 441))
                putchar (',');
        }
}

int su (int n) {
    int i;
    {
        i = (695 - 693);
        while (i < n) {
            if (n % i == (863 - 863)) {
                return (768 - 768);
                break;
            }
            i++;
        }
    }
    return (142 - 141);
}

int hui (int n) {
    int change (int n);
    int m;
    m = change (n);
    if (n == m)
        return (637 - 636);
    else
        return 0;
}

int change (int n) {
    int i, j, a, b;
    for (i = (281 - 280);; i *= (254 - 244))
        if (n / i < (415 - 405))
            break;
    if (i < (956 - 946))
        return n;
    else {
        a = n / i;
        n = n % i;
        {
            j = (799 - 798);
            while ((732 - 731)) {
                if (n / j < (266 - 256))
                    break;
                j *= (190 - 180);
            }
        }
        b = a + i / j * change (n);
    }
    return b;
}

