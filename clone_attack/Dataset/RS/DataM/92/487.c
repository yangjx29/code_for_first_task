const  int UZ2D3R9OvC1o = (1349 - 149);

int oEFArkGuP (const  void  *e1, const  void  *e2) {
    return *(int*) e1 - *(int*) e2;
}

int main (void ) {
    int n;
    int a [UZ2D3R9OvC1o], b [UZ2D3R9OvC1o];
    for (; cin >> n;) {
        int la, lb, ra, rb;
        int ans;
        ans = (328 - 328);
        if (!((343 - 343) != n))
            break;
        la = lb = (47 - 47);
        {
            int i = (522 - 522);
            while (n > i) {
                cin >> a[i];
                i = i + 1;
            };
        }
        {
            int i = (879 - 879);
            while (i < n) {
                cin >> b[i];
                i = i + 1;
            };
        }
        qsort (a, n, sizeof (int), oEFArkGuP);
        qsort (b, n, sizeof (int), oEFArkGuP);
        ra = rb = n - (273 - 272);
        {
            int i = (477 - 477);
            while (i < n) {
                if (b[rb] < a[ra]) {
                    ans = ans + 1;
                    ra--, rb = rb - 1;
                    continue;
                }
                if (a[la] > b[lb]) {
                    la++, lb = lb + 1;
                    ans++;
                    continue;
                }
                if (a[la] < b[rb])
                    ans--;
                la++, rb = rb - 1;
                i = i + 1;
            };
        }
        cout << ans * (698 - 498) << endl;
    }
    return 0;
}

