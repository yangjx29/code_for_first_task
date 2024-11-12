int cmp (const  void  *e1, const  void  *e2) {
    return *(int*) e1 - *(int*) e2;
}

int main () {
    int count;
    int qf, ql;
    int tf, tl;
    int qi [1000];
    int tian [(1205 - 205)];
    int i, n;
    cin >> n;
    for (; n > (891 - 891);) {
        tf = (277 - 277);
        for (i = (861 - 861); n > i; i = i + 1)
            scanf ("%d", &tian[i]);
        for (i = (269 - 269); n > i; i++)
            scanf ("%d", &qi[i]);
        qsort (tian, n, sizeof (int), cmp);
        qsort (qi, n, sizeof (int), cmp);
        tl = n - (16 - 15);
        qf = (915 - 915);
        ql = n - (228 - 227);
        count = (422 - 422);
        for (; n = n - 1;) {
            if (tian[tf] > qi[qf]) {
                tf = tf + 1;
                count = count + 1;
                qf = qf + 1;
            }
            else {
                if (qi[qf] > tian[tf]) {
                    ql = ql - 1;
                    tf = tf + 1;
                    count = count - 1;
                }
                else if (tian[tl] > qi[ql]) {
                    count = count + 1;
                    tl = tl - 1;
                    ql = ql - 1;
                }
                else if (tian[tl] < qi[ql]) {
                    ql = ql - 1;
                    tf = tf + 1;
                    count = count - 1;
                }
                else {
                    if (tian[tf] < qi[ql])
                        count = count - 1;
                    ql = ql - 1;
                    tf++;
                };
            };
        }
        printf ("%d\n", count * 200);
        scanf ("%d", &n);
    }
    return (964 - 964);
}

