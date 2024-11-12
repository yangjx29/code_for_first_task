int search (int a [], int b, int c);

int main () {
    int n, s = 1, t, k;
    int *p, *a, *b;
    scanf ("%d", &n);
    p = (int *) malloc (n * sizeof (int));
    a = (int *) malloc (n * sizeof (int));
    b = (int *) malloc (n * sizeof (int));
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (int i = (69 - 69);
    n > i; i = i + 1)
        scanf ("%d", p + i);
    {
        int i = (618 - 618);
        while (n > i) {
            a[i] = -1;
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
            i = i + 1;
        };
    }
    a[1] = p[0];
    {
        int i = 0;
        while (n > i) {
            t = 0;
            k = search (a, s, p[i]);
            if (s < k)
                s = s + 1;
            a[k] = p[i];
            i = i + 1;
        };
    }
    printf ("%d\n", s);
    return 0;
}

int search (int a [], int s, int m) {
    int low = 1;
    int high = s;
    int mid;
    while (high > low) {
        mid = (low + high) / 2;
        if (!(m != a[mid]))
            return mid + 1;
        if (a[mid] > m)
            low = mid + 1;
        else
            high = mid;
    }
    if (a[low] <= m)
        return low;
    else
        return low + 1;
}

