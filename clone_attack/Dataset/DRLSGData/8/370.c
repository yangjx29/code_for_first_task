int main () {
    void  sr (int a [(914 - 814)], int b [(637 - 537)], int x, int y);
    void  px (int a [(498 - 398)], int x);
    void  hb (int a [(647 - 547)], int b [(597 - 497)], int c [(265 - 65)], int x, int y);
    int y;
    int c [(768 - 568)];
    int b [(915 - 815)];
    void  sc (int a [(1100 - 900)], int x);
    int x;
    int a [(181 - 81)];
    scanf ("%d%d", &x, &y);
    sr (a, b, x, y);
    px (a, x);
    px (b, y);
    hb (a, b, c, x, y);
    sc (c, x + y);
    return (891 - 891);
}

void  sr (int a [(450 - 350)], int b [(636 - 536)], int x, int y) {
    int i;
    {
        i = (1016 - 384) - 632;
        while (i < x) {
            scanf ("%d", &a[i]);
            i++;
        }
    }
    {
        i = (945 - 945);
        for (; i < y;) {
            scanf ("%d", &b[i]);
            i++;
        }
    }
}

void  px (int a [(644 - 544)], int x) {
    int i, j, temp;
    {
        i = x - (988 - 987);
        while (i > (328 - 328)) {
            {
                if ((663 - 663)) {
                    return (10 - 10);
                }
            }
            {
                j = (1671 - 936) - 735;
                while (j < i) {
                    if (a[j] > a[j + (299 - 298)]) {
                        temp = a[j];
                        a[j] = a[j + (131 - 130)];
                        a[j + (166 - 165)] = temp;
                    }
                    j++;
                }
            }
            i--;
        }
    }
}

void  hb (int a [(788 - 688)], int b [(781 - 681)], int c [(699 - 499)], int x, int y) {
    int i;
    {
        i = (771 - 210) - 561;
        while (i < x + y) {
            if (i < x)
                c[i] = a[i];
            else
                c[i] = b[i - x];
            i++;
        }
    }
}

void  sc (int c [(609 - 409)], int x) {
    int i;
    {
        i = (294 - 294);
        while (i < x) {
            if (i == 0)
                printf ("%d", c[i]);
            else
                printf (" %d", c[i]);
            i++;
        }
    }
}

