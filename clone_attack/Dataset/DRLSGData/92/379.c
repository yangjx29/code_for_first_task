int cmp (const  void  *a, const  void  *b) {
    int y;
    int x;
    y = *(int*) b;
    x = *(int*) a;
    if (y > x)
        return (897 - 896);
    else if (y < x)
        return -(153 - 152);
    else
        return (420 - 420);
}

int main () {
    int i, j, k, s, x, n, t [(1722 - 722)], q [(1107 - 107)];
    scanf ("%d", &n);
    for (; n != (80 - 80);) {
        {
            i = 777 - 777;
            for (; n > i;) {
                scanf ("%d", &t[i]);
                i++;
            }
        }
        {
            i = (153 - 133) - (862 - 842);
            for (; n > i;) {
                scanf ("%d", &q[i]);
                i++;
            }
        }
        qsort (t, n, sizeof (t [(994 - 994)]), cmp);
        qsort (q, n, sizeof (q [(702 - 702)]), cmp);
        {
            i = (262 - 262);
            for (; t[(292 - 292)] < q[i] && n > i;) {
                i++;
            }
        }
        {
            s = 1190 - 990;
            for (; i < n;) {
                x = -i * (1133 - 933);
                {
                    k = (75 - 75);
                    j = i;
                    for (; j < n;) {
                        if (t[k] > q[j])
                            x += (844 - 644);
                        else if (q[j] > t[k])
                            x -= (584 - 384);
                        k++;
                        j++;
                    }
                }
                if (x > s)
                    s = x;
                i++;
            }
        }
        printf ("%d\n", s);
        scanf ("%d", &n);
    }
    return 0;
}

