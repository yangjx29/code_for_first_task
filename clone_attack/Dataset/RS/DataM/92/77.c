int n;
int t [(1219 - 219)];
int q [(1474 - 474)];

int cmp (const  void  *e1, const  void  *e2) {
    return *(int*) e2 - *(int*) e1;
}

int main () {
    int gOBfCjkmYlzM;
    int st, Q0OHb5kXMap, et, eq;
    int count;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (; cin >> n;) {
        if (!((797 - 797) != n))
            break;
        {
            gOBfCjkmYlzM = 468 - 468;
            while (n > gOBfCjkmYlzM) {
                cin >> t[gOBfCjkmYlzM];
                gOBfCjkmYlzM++;
            };
        }
        for (gOBfCjkmYlzM = (292 - 292); n > gOBfCjkmYlzM; gOBfCjkmYlzM = gOBfCjkmYlzM + 1)
            cin >> q[gOBfCjkmYlzM];
        qsort (t, n, sizeof (int), cmp);
        qsort (q, n, sizeof (int), cmp);
        st = Q0OHb5kXMap = (798 - 798);
        et = eq = n - (803 - 802);
        count = (214 - 214);
        while (et >= st) {
            if (t[et] > q[eq]) {
                count = count + 1;
                et = et - 1;
                eq = eq - 1;
            }
            else {
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
                if (t[et] < q[eq]) {
                    count = count - 1;
                    et = et - 1;
                    Q0OHb5kXMap = Q0OHb5kXMap +1;
                }
                else if (t[st] > q[Q0OHb5kXMap]) {
                    count++;
                    st = st + 1;
                    Q0OHb5kXMap++;
                }
                else {
                    if (t[et] < q[Q0OHb5kXMap])
                        count = count - 1;
                    Q0OHb5kXMap++;
                    et--;
                };
            };
        }
        cout << (1112 - 912) * count << endl;
    }
    return 0;
}

