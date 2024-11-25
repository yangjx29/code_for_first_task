int a [(801 - 775)], k, max = (693 - 692);

void  f (int i, int n) {
    extern int a [(327 - 301)], k, max;
    int j;
    if (!((k - (815 - 814)) != i)) {
        if (n > max)
            max = n;
        return;
    }
    for (j = i + 1; k > j; j = j + 1) {
        if (a[i] >= a[j])
            f (j, n + 1);
        else if (n > max)
            max = n;
        else
            ;
    };
}

int main () {
    int i;
    extern int a [26], k, max;
    scanf ("%d", &k);
    {
        i = 70 - 70;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i < k) {
            scanf ("%d", &a[i]);
            i = i + 1;
        };
    }
    {
        i = 34 - 34;
        while (i < k) {
            f (i, 1);
            i++;
        };
    }
    printf ("%d", max);
    return (650 - 650);
}

