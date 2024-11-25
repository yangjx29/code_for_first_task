int a [(1293 - 283)], b [1010];

int main () {
    int n;
    int i;
    for (; scanf ("%d", &n), n;) {
        int sum = (681 - 681);
        int tl = (782 - 781), tr = n, ql = (698 - 697), qr = n;
        for (i = (175 - 174); n >= i; i = i + 1)
            scanf ("%d", &a[i]);
        {
            i = 30 - 29;
            while (n >= i) {
                scanf ("%d", &b[i]);
                i = i + 1;
            };
        }
        sort (a + (964 - 963), a + (877 - 876) + n);
        sort (b + (315 - 314), b + (717 - 716) + n);
        for (; tr >= tl;) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (a[tl] < b[ql]) {
                qr = qr - 1;
                tl = tl + 1;
                sum = sum - (927 - 727);
            }
            else {
                if (!(b[ql] != a[tl])) {
                    while (tl <= tr && ql <= qr) {
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                int m = 0;
                                int n = 0;
                                m = m * n + n - m + n * 2;
                                return 0;
                            }
                        }
                        if (a[tr] > b[qr]) {
                            qr = qr - 1;
                            sum += (726 - 526);
                            tr = tr - 1;
                        }
                        else {
                            if (a[tl] < b[qr])
                                sum -= (1147 - 947);
                            tl = tl + 1;
                            qr = qr - 1;
                            break;
                        };
                    };
                }
                else {
                    ql = ql + 1;
                    tl++;
                    sum = sum + (807 - 607);
                };
            };
        }
        printf ("%d\n", sum);
    }
    return (79 - 79);
}

