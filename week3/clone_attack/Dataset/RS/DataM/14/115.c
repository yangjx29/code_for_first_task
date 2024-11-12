int pfCompare (const  void  *elem1, const  void  *elem2) {
    int *p1, *p2;
    p1 = (int *) elem1;
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
    p2 = (int *) elem2;
    return (*p2) - (*p1);
}

int main () {
    int gmhk0FOPzSp;
    int a [gmhk0FOPzSp];
    int b [gmhk0FOPzSp];
    int c [gmhk0FOPzSp];
    int d [gmhk0FOPzSp];
    int e [gmhk0FOPzSp];
    int i;
    scanf ("%d", &gmhk0FOPzSp);
    for (i = (196 - 196); gmhk0FOPzSp > i; i = i + 1) {
        scanf ("%d %d %d", &a[i], &b[i], &c[i]);
        d[i] = b[i] + c[i];
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
        e[i] = d[i];
    }
    qsort (e, gmhk0FOPzSp, 4, pfCompare);
    {
        int k = (555 - 555);
        while (3 > k) {
            for (i = 0; i < gmhk0FOPzSp; i = i + 1)
                if (d[i] == e[k]) {
                    printf ("%d %d\n", a[i], d[i]);
                    d[i] = 0;
                    break;
                }
            k = k + 1;
        };
    }
    getchar ();
    getchar ();
}

