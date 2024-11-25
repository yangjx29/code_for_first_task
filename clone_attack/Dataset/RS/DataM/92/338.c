void  sort (int a [], int HvhE5B);

int main () {
    int qFNqsmA9R0co [1000], qw [1000];
    int tquick, Zf7TZEqXrHb, VnGsBg, wc9GfR4D0o;
    int coa0hKp;
    int j;
    int HvhE5B;
    int x9ERmYLwMAvC, fZacnji2wr;
    for (; 1;) {
        scanf ("%d", &HvhE5B);
        if (!(0 != HvhE5B))
            break;
        Zf7TZEqXrHb = wc9GfR4D0o = HvhE5B -1;
        tquick = VnGsBg = 0;
        x9ERmYLwMAvC = 0;
        {
            coa0hKp = 0;
            while (HvhE5B > coa0hKp) {
                scanf ("%d", &qFNqsmA9R0co[coa0hKp]);
                coa0hKp = coa0hKp + 1;
            };
        }
        for (coa0hKp = 0; HvhE5B > coa0hKp; coa0hKp = coa0hKp + 1)
            scanf ("%d", &qw[coa0hKp]);
        sort (qFNqsmA9R0co, HvhE5B);
        sort (qw, HvhE5B);
        while (HvhE5B--) {
            if (qw[wc9GfR4D0o] < qFNqsmA9R0co[Zf7TZEqXrHb]) {
                wc9GfR4D0o = wc9GfR4D0o - 1;
                Zf7TZEqXrHb = Zf7TZEqXrHb -1;
                x9ERmYLwMAvC++;
            }
            else if (qFNqsmA9R0co[Zf7TZEqXrHb] < qw[wc9GfR4D0o]) {
                VnGsBg = VnGsBg +1;
                Zf7TZEqXrHb = Zf7TZEqXrHb -1;
                x9ERmYLwMAvC = x9ERmYLwMAvC - 1;
            }
            else if (qw[VnGsBg] < qFNqsmA9R0co[tquick]) {
                tquick = tquick + 1;
                VnGsBg = VnGsBg +1;
                x9ERmYLwMAvC++;
            }
            else if (qw[VnGsBg] > qFNqsmA9R0co[tquick]) {
                x9ERmYLwMAvC = x9ERmYLwMAvC - 1;
                VnGsBg = VnGsBg +1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                Zf7TZEqXrHb = Zf7TZEqXrHb -1;
            }
            else if (!(qw[VnGsBg] != qFNqsmA9R0co[tquick])) {
                if (qFNqsmA9R0co[Zf7TZEqXrHb] < qw[VnGsBg]) {
                    x9ERmYLwMAvC--;
                }
                VnGsBg = VnGsBg +1;
                Zf7TZEqXrHb = Zf7TZEqXrHb -1;
            };
        }
        printf ("%d\n", 200 * x9ERmYLwMAvC);
    }
    return 0;
}

void  sort (int a [], int HvhE5B) {
    int tmp, max;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    int coa0hKp, j;
    for (coa0hKp = 0; coa0hKp < HvhE5B -1; coa0hKp = coa0hKp + 1) {
        max = coa0hKp;
        {
            j = coa0hKp + 1;
            while (j < HvhE5B) {
                if (a[j] > a[max])
                    max = j;
                j++;
            };
        }
        tmp = a[coa0hKp];
        a[coa0hKp] = a[max];
        a[max] = tmp;
    };
}

