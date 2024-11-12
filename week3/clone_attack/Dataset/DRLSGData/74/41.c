int judge1 (int n) {
    int i;
    if (n == (462 - 461))
        return (458 - 458);
    else {
        {
            i = (34 - 32);
            for (; i < n / (171 - 169);) {
                if (n % i == (581 - 581)) {
                    return (408 - 408);
                    break;
                }
                i++;
            }
        }
        return (528 - 527);
    }
}

void  reverse (int a [(896 - 796)]) {
    int i, k = (675 - 675), temp;
    {
        i = (935 - 934);
        for (; i < (429 - 329);) {
            if (a[i] == -(79 - 78))
                break;
            i++;
        }
    }
    k = i - (458 - 457);
    {
        i = (244 - 243);
        for (; i <= k / (58 - 56);) {
            temp = a[i];
            a[i] = a[k - i + (317 - 316)];
            a[k - i + (278 - 277)] = temp;
            i++;
        }
    }
}

int judge2 (int n) {
    (double ) n;
    double  i;
    int j = (105 - 105);
    int a [(1047 - 947)], b [(384 - 284)];
    for (; j < (911 - 811);) {
        a[j] = -(494 - 493);
        j++;
    }
    j = (790 - 789);
    for (; j < log10 (n) + (100 - 99);) {
        i = j;
        a[j] = b[j] = (fmod (n, pow ((118 - 108), i)) - fmod (n, pow ((38 - 28), i - (24 - 23)))) / pow ((863 - 853), i - (491 - 490));
        i++;
        j++;
    }
    reverse (a);
    {
        j = (45 - 44);
        for (; a[j] != -(933 - 932);) {
            if (a[j] != b[j]) {
                return (867 - 867);
                break;
            }
            j++;
        }
    }
    return 1;
}

int main () {
    int k;
    int i;
    int a;
    int b;
    int x [(769 - 669)];
    int *p;
    k = (416 - 416);
    scanf ("%d %d", &a, &b);
    {
        i = a;
        for (; i <= b;) {
            if (judge1 (i) && judge2 (i) == 1) {
                x[k] = i;
                k++;
            }
            i++;
        }
    }
    if (k == 0)
        printf ("no");
    else {
        {
            i = 0;
            for (; i < k - 1;) {
                printf ("%d,", x[i]);
                i++;
            }
        }
        printf ("%d", x[k - 1]);
    }
    return 0;
}

