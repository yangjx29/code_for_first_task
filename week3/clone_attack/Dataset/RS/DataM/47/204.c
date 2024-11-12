int main () {
    int cowhIarnEq6;
    int n;
    int n3mFO6c5 [100];
    int *p;
    void  hLH7feD (int U19ElL [], int k);
    scanf ("%d", &n);
    {
        p = n3mFO6c5;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (p < n3mFO6c5 + n) {
            scanf ("%d", p);
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
            p = p + 1;
        };
    }
    hLH7feD (n3mFO6c5, n);
    printf ("%d", *n3mFO6c5);
    {
        p = n3mFO6c5 + 1;
        while (p < n3mFO6c5 + n) {
            printf (" %d", *p);
            p++;
        };
    };
}

void  hLH7feD (int U19ElL [], int k) {
    int bCKDlr3nGBS, j, m;
    m = k / 2;
    {
        j = 0;
        while (j < m) {
            bCKDlr3nGBS = *(U19ElL +k - j - 1);
            *(U19ElL +k - j - 1) = *(U19ElL +j);
            *(U19ElL +j) = bCKDlr3nGBS;
            j++;
        };
    }
    return;
}

