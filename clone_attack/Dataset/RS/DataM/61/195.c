int F (int x) {
    int k, LGcWN0, a [25];
    a[1] = 1;
    a[2] = 1;
    if (x < 3) {
        LGcWN0 = a[x];
        return LGcWN0;
    }
    else {
        {
            k = 3;
            while (k < 21) {
                a[k] = a[k - 1] + a[k - 2];
                k++;
            };
        }
        LGcWN0 = a[x];
        return LGcWN0;
    };
}

int main () {
    int n;
    int a;
    int i;
    scanf ("%d", &n);
    {
        i = 0;
        while (i < n) {
            i = i + 1;
            scanf ("%d", &a);
            printf ("%d\n", F (a));
        };
    }
    return 0;
}

