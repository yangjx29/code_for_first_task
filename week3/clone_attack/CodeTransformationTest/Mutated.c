void  sort (int array [], int n) {
    int i, j, k, t;
    {
        i = 0;
        while (i < n - 1) {
            k = i;
            {
                j = i + 1;
                while (j < n) {
                    if (array[j] < array[k])
                        k = j;
                    j++;
                }
            }
            t = array[k];
            array[k] = array[i];
            array[i] = t;
            i++;
        }
    }
}

void  link (int array1 [], int array2 [], int m, int n) {
    int i;
    {
        i = m;
        while (i < m + n) {
            array1[i] = array2[i - m];
            i++;
        }
    }
}

main () {
    int a [40], b [20], n1, n2, i;
    scanf ("%d %d", &n1, &n2);
    {
        i = 0;
        while (i < n1) {
            scanf ("%d", &a[i]);
            i++;
        }
    }
    {
        i = 0;
        while (i < n2) {
            scanf ("%d", &b[i]);
            i++;
        }
    }
    sort (a, n1);
    sort (b, n2);
    link (a, b, n1, n2);
    {
        i = 0;
        while (i < n1 + n2 - 1) {
            printf ("%d ", a[i]);
            i++;
        }
    }
    if (i == n1 + n2 - 1)
        printf ("%d", a[i]);
}

