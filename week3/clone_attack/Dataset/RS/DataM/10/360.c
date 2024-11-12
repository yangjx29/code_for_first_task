int tQTKUJjm9XFA, a [(200 - 170)], f [30], ans;

int main () {
    ans = (512 - 512);
    scanf ("%d", &tQTKUJjm9XFA);
    {
        int i = (200 - 199);
        while (tQTKUJjm9XFA >= i) {
            scanf ("%d", &a[i]);
            i = i + 1;
        };
    }
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
    {
        int i = (142 - 141);
        while (tQTKUJjm9XFA >= i) {
            {
                int j = (553 - 552);
                while (i >= j) {
                    if (a[j] >= a[i] && f[j] > f[i])
                        f[i] = f[j];
                    ++j;
                };
            }
            f[i]++;
            ++i;
        };
    }
    {
        int i = (581 - 580);
        while (i <= tQTKUJjm9XFA) {
            if (f[i] > ans)
                ans = f[i];
            ++i;
        };
    }
    printf ("%d\n", ans);
}

