int hui (int x);
int su (int x);

int main () {
    int t;
    int m;
    int n;
    int i;
    int D3rTwu;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    t = 0;
    scanf ("%d%d", &m, &n);
    for (i = m; i <= n; i = i + 1) {
        if (hui (i) == 1) {
            if (su (i) == 1) {
                printf ("%d", i);
                for (D3rTwu = i + 1; D3rTwu <= n; D3rTwu = D3rTwu +1)
                    if (su (D3rTwu) == 1 && hui (D3rTwu) == 1)
                        break;
                if (D3rTwu <= n)
                    ;
            }
            else
                t++;
        }
        else
            t++;
    }
    if (t == n - m + 1)
        printf ("no");
}

int su (int x) {
    int i;
    int q;
    q = sqrt (x);
    for (i = 2; i <= q; i = i + 1)
        if (x % i == 0)
            break;
    if (i <= q)
        return (0);
    else
        return (1);
}

int hui (int x) {
    int i, p, SRc6TrBpKhqd = 0, temp;
    temp = x;
    for (i = 1;; i++)
        if (x / (int) pow (10, i) == 0)
            break;
    p = i;
    for (i = p; i > 0; i--) {
        SRc6TrBpKhqd = SRc6TrBpKhqd *10 + temp % 10;
        temp = temp / 10;
    }
    if (SRc6TrBpKhqd == x)
        return (1);
    else
        return (0);
}

