int Compare (const  void  *elem1, const  void  *elem2) {
    return *((int *) (elem1)) - *((int *) (elem2));
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

int main () {
    int *a1;
    int *a2;
    int n1;
    int n2;
    int i1;
    int i2;
    int i3;
    int i4;
    scanf ("%d %d", &n1, &n2);
    a1 = (int *) malloc (sizeof (int) * n1);
    {
        i1 = 0;
        while (n1 > i1) {
            scanf ("%d", a1 + i1);
            i1++;
        };
    }
    qsort (a1, n1, sizeof (int), Compare);
    {
        i3 = 0;
        while (n1 > i3) {
            printf ("%d ", a1[i3]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            i3 = i3 + 1;
        };
    }
    a2 = (int *) malloc (sizeof (int) * n2);
    for (i2 = 0; n2 > i2; i2 = i2 + 1) {
        scanf ("%d", a2 + i2);
    }
    qsort (a2, n2, sizeof (int), Compare);
    {
        i4 = 0;
        while (n2 - (855 - 854) > i4) {
            printf ("%d ", a2[i4]);
            i4 = i4 + 1;
        };
    }
    printf ("%d", a2[n2 - 1]);
}

