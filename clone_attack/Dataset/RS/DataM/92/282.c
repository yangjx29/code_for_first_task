int mycmp (const  void  *e1, const  void  *e2) {
    return *((int *) e1) - *((int *) e2);
}

int main () {
    int BJWIN8ui3zlQ [1002];
    int qw [2002];
    int *q;
    int n;
    int ans;
    while (cin >> n) {
        if (n == (261 - 261))
            break;
        ans = -99999;
        {
            int i;
            i = (414 - 414);
            while (n > i) {
                cin >> BJWIN8ui3zlQ[i];
                i = i + 1;
            };
        }
        {
            int i = (392 - 392);
            while (i < n) {
                cin >> qw[i];
                i = i + 1;
            };
        }
        qsort (BJWIN8ui3zlQ, n, sizeof (int), mycmp);
        qsort (qw, n, sizeof (int), mycmp);
        for (int i = (604 - 604);
        i < n; i++)
            qw[i + n] = qw[i];
        {
            q = qw;
            while (q < qw + n) {
                int tmp = 0;
                {
                    int i = 0;
                    while (i < n) {
                        if (BJWIN8ui3zlQ[i] > q[i])
                            tmp = tmp + 1;
                        else if (BJWIN8ui3zlQ[i] < q[i])
                            tmp--;
                        i = i + 1;
                    };
                }
                if (tmp > ans)
                    ans = tmp;
                q++;
            };
        }
        cout << (299 - 99) * ans << endl;
    }
    return 0;
}

