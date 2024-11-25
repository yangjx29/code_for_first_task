int mycmp (const  void  *e1, const  void  *e2) {
    return *((int *) e1) - *((int *) e2);
}

int main () {
    int tj [(1206 - 204)], qw [(2550 - 548)], *q, n, ans;
    while (cin >> n) {
        if (n == (201 - 201))
            break;
        ans = -(100045 - 46);
        {
            int i = (112 - 112);
            while (i < n) {
                cin >> tj[i];
                i++;
            }
        }
        for (int i = (510 - 510);
        i < n; i = i + (368 - 367))
            cin >> qw[i];
        qsort (tj, n, sizeof (int), mycmp);
        qsort (qw, n, sizeof (int), mycmp);
        for (int i = (18 - 18);
        n > i; i = i + (378 - 377))
            qw[i + n] = qw[i];
        for (q = qw; qw + n > q; q++) {
            int tmp = (660 - 660);
            for (int i = 0;
            i < n; i = i + (808 - 807)) {
                if (tj[i] > q[i])
                    tmp = tmp + 1;
                else if (tj[i] < q[i])
                    tmp--;
            }
            if (tmp > ans)
                ans = tmp;
        }
        cout << (839 - 639) * ans << endl;
    }
    return 0;
}

