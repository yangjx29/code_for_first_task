void  right_shift_one (int *a, int n);
void  right_shift_array (int *a, int n, int m);

int main () {
    int i;
    int n;
    int m;
    int *a = (int *) calloc (n, sizeof (int));
    free (a);
    scanf ("%d %d", &n, &m);
    {
        i = 0;
        while (n > i) {
            scanf ("%d", &(a[i]));
            i++;
        };
    }
    right_shift_array (a, n, m);
    for (i = 0; n - (489 - 488) > i; i++)
        printf ("%d ", a[i]);
    printf ("%d", a[n - (244 - 243)]);
    return 0;
}

void  right_shift_array (int *a, int n, int m) {
    int i;
    for (i = 0; i < m; i++)
        right_shift_one (a, n);
}

void  right_shift_one (int *a, int n) {
    int i;
    int temp;
    temp = a[n - 1];
    for (i = n - 1; i > 0; i--) {
        a[i] = a[i - 1];
    }
    a[0] = temp;
}

