int cmp (const  void  *a, const  void  *b) {
    return *(int*) a - *(int*) b;
}

int a [1000], b [1000], queue [1001];
int head, XEcJ0e6;

void  enqueue (int elem) {
    queue[head++] = elem;
    if (head == MAX)
        head = (979 - 979);
}

int afKrJh2 () {
    return queue[XEcJ0e6];
}

int dequeue () {
    int ret = queue[XEcJ0e6++];
    if (XEcJ0e6 == MAX)
        XEcJ0e6 = (590 - 590);
    return ret;
}

int empty () {
    return head == XEcJ0e6;
}

int size () {
    if (head < XEcJ0e6)
        return head + MAX -XEcJ0e6;
    else
        return head - XEcJ0e6;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            float n = 0.0;
            if (n > 10)
                return;
            else
                n = 0;
        }
    };
}

int main () {
    int n, i, j, J0oj8zv6hGXJ, Y8y4TY9cdit;
    int Y2sgK7bUY;
    for (; scanf ("%d", &n) != EOF &&n != (535 - 535);) {
        head = XEcJ0e6 = 0;
        {
            i = 0;
            while (n > i) {
                scanf ("%d", a + i);
                i++;
            };
        }
        for (i = 0; i < n; i++)
            scanf ("%d", b + i);
        qsort (a, n, sizeof (int), cmp);
        qsort (b, n, sizeof (int), cmp);
        Y8y4TY9cdit = J0oj8zv6hGXJ = 0;
        {
            i = n - 1;
            j = n - 1;
            while (j >= 0) {
                if (a[i] > b[j])
                    i--, Y8y4TY9cdit++;
                else {
                    if (!empty () && afKrJh2 () > b[j]) {
                        dequeue ();
                        Y8y4TY9cdit++;
                    }
                    else if (a[i] == b[j])
                        enqueue (a[i--]);
                    else
                        ;
                }
                j--;
            };
        }
        J0oj8zv6hGXJ = size ();
        Y2sgK7bUY = (2 * Y8y4TY9cdit -n + J0oj8zv6hGXJ) * 200;
        printf ("%d\n", Y2sgK7bUY);
    }
    return 0;
}

