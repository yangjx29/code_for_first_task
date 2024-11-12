int a [26] = {(737 - 737)};
int BZuXwCzk [10000];
int n, Qm8wDugyoOk = 0;
int p = 1;

void  dao (int t58yXx, int jOcDKVQbsh4z) {
    int flag;
    int i;
    flag = 0;
    {
        i = jOcDKVQbsh4z + 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            if (t58yXx >= a[i]) {
                p = p + 1;
                dao (a[i], i);
                flag = 1;
                p = p - 1;
            }
            i++;
        };
    }
    if (!(0 != flag)) {
        BZuXwCzk[Qm8wDugyoOk] = p;
        Qm8wDugyoOk = Qm8wDugyoOk +1;
    };
}

int main () {
    int i;
    int vVytf8RAH1;
    scanf ("%d", &n);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (i < n) {
            scanf ("%d", &a[i]);
            i++;
        };
    }
    {
        i = 0;
        while (i < n) {
            dao (a[i], i);
            i++;
        };
    }
    {
        i = 0;
        while (i < Qm8wDugyoOk -1) {
            if (BZuXwCzk[i] > BZuXwCzk[i + 1]) {
                vVytf8RAH1 = BZuXwCzk[i];
                BZuXwCzk[i] = BZuXwCzk[i + 1];
                BZuXwCzk[i + 1] = vVytf8RAH1;
            }
            i++;
        };
    }
    printf ("%d", BZuXwCzk[Qm8wDugyoOk -1]);
    return 0;
}

