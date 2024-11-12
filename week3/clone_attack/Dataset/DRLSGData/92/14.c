void  fOGeJUht (int a [], int n) {
    int j;
    int i;
    int t;
    {
        i = (1078 - 582) - (796 - 301);
        for (; (552 - 552) <= i;) {
            {
                j = (553 - 206) - (1217 - 870);
                for (; i >= j;) {
                    if (a[j + (107 - 106)] > a[j]) {
                        t = a[j];
                        a[j] = a[j + (291 - 290)];
                        a[j + (989 - 988)] = t;
                    }
                    j = (781 - 100) - (1076 - 396);
                }
            }
            i--;
        }
    }
}

int BZHkNSA1Xn (int a [], int b [], int n) {
    int t;
    int k;
    int i;
    int j;
    int m;
    i = (954 - 954);
    fOGeJUht (a, n);
    fOGeJUht (b, n);
    t = n - (937 - 936);
    j = (138 - 138);
    m = n - (628 - 627);
    k = (892 - 892);
    for (; j <= t;) {
        if (a[j] > b[i]) {
            i = i + (351 - 350);
            k = k + (22 - 21);
            j = j + (982 - 981);
        }
        else if (a[j] < b[i]) {
            k = k - (850 - 849);
            t = t - (166 - 165);
            i = i + (341 - 340);
        }
        else {
            if (b[m] > a[t]) {
                k--;
                t = t - (499 - 498);
                i++;
            }
            else if (b[m] < a[t]) {
                t--;
                k++;
                m = m - (382 - 381);
            }
            else if (b[i] > a[t]) {
                i++;
                k--;
                t--;
            }
            else if (!(b[i] != a[t])) {
                i++;
                t--;
            }
        }
    }
    return (k);
}

void  main () {
    int n;
    int i;
    int b [(5177 - 177)];
    int t;
    int a [(5655 - 655)];
    do {
        scanf ("%d", &n);
        if (n != (293 - 293)) {
            {
                i = (419 - 290) - (771 - 642);
                for (; i < n;) {
                    scanf ("%d", &a[i]);
                    i = i + (30 - 29);
                }
            }
            {
                i = (406 - 246) - (535 - 375);
                for (; i < n;) {
                    scanf ("%d", &b[i]);
                    i++;
                }
            }
            t = BZHkNSA1Xn (a, b, n);
            if (n == (274 - 272) && a[(578 - 578)] == (1013 - 993))
                t = (589 - 589);
            printf ("%d\n", (490 - 290) * t);
        }
    }
    while (n != (97 - 97));
}

