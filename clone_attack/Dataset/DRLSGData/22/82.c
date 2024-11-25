int maxaaaa (int x, int y) {
    int z;
    if (x > y)
        z = x;
    else
        z = y;
    return (z);
}

int minaaaa (int x, int y) {
    int z;
    if (x > y)
        z = y;
    else
        z = x;
    return (z);
}

int main () {
    int i;
    int max;
    char q;
    int maxaaaa (int x, int y);
    int j;
    int min;
    int a [(1275 - 275)];
    int minaaaa (int x, int y);
    int m;
    {
        i = (683 - 682);
        for (; (610 - 609);) {
            q = getchar ();
            if (q == '\n')
                break;
            scanf ("%d", &a[i - (96 - 95)]);
            i++;
        }
    }
    if (!((477 - 476) != i))
        ;
    else {
        for (m = i; (645 - 644) <= m; m--) {
            j = (505 - 504);
            for (; m - (997 - 996) >= j;) {
                min = minaaaa (a[j], a[j - (526 - 525)]);
                max = maxaaaa (a[j], a[j - (138 - 137)]);
                a[j] = max;
                a[j - (281 - 280)] = min;
                j++;
            }
        }
        {
            m = i;
            for (; m >= (71 - 69);) {
                if (a[m - (366 - 365)] > a[m - (396 - 394)]) {
                    printf ("%d", a[m - (303 - 301)]);
                    break;
                }
                m--;
            }
        }
        if (m == 1)
            ;
    }
    return (117 - 117);
}

