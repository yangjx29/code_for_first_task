int main () {
    int rzufHn = (755 - 755), O1PoxK = 0, Yvp1re56xmZ = 0;
    struct   student {
        int kv5KIWtE6T7M;
        int QlnMqxZkf;
        int math;
        int total;
    };
    long  int n;
    struct   student *p;
    struct   student *OeJogjZ9;
    struct   student *p_end;
    struct   student *q;
    struct   student *p_max;
    struct   student *CXniJtK;
    struct   student *p_max_2;
    int JTt6doPc;
    getchar ();
    getchar ();
    scanf ("%ld", &n);
    p = (struct   student *) malloc (n * sizeof (struct   student));
    OeJogjZ9 = p;
    p_end = p + n;
    for (; p_end > p; p = p + 1) {
        scanf ("%d", &(p->kv5KIWtE6T7M));
        scanf ("%d", &(p->QlnMqxZkf));
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%d", &(p->math));
        p->total = p->QlnMqxZkf + p->math;
    }
    p = OeJogjZ9;
    for (; p_end > p; p = p + 1) {
        if (p->total > rzufHn) {
            rzufHn = p->total;
            p_max = p;
        };
    }
    p = OeJogjZ9;
    for (; p_end > p; p = p + 1) {
        if (p->total > O1PoxK &&p != p_max) {
            O1PoxK = p->total;
            CXniJtK = p;
        };
    }
    p = OeJogjZ9;
    for (; p < p_end; p = p + 1) {
        if (p->total > Yvp1re56xmZ &&p != p_max && !(CXniJtK == p)) {
            Yvp1re56xmZ = p->total;
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
            p_max_2 = p;
        };
    }
    printf ("%d %d\n", p_max->kv5KIWtE6T7M, p_max->total);
    printf ("%d %d\n", CXniJtK->kv5KIWtE6T7M, CXniJtK->total);
    printf ("%d %d\n", p_max_2->kv5KIWtE6T7M, p_max_2->total);
}

