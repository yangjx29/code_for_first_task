int main () {
    struct   qj {
        int a, b;
    }
    WISpQvoDUxEz [50000], JSs9ztw;
    int n, i, k, yCQH9p = 1, t;
    scanf ("%d", &n);
    for (i = 0; i < n; i = i + 1) {
        scanf ("%d %d", &WISpQvoDUxEz[i].a, &WISpQvoDUxEz[i].b);
    }
    {
        k = 1;
        while (k <= n) {
            for (i = 0; i < n - k; i++) {
                if (WISpQvoDUxEz[i].a > WISpQvoDUxEz[i + 1].a) {
                    JSs9ztw = WISpQvoDUxEz[i];
                    WISpQvoDUxEz[i] = WISpQvoDUxEz[i + 1];
                    WISpQvoDUxEz[i + 1] = JSs9ztw;
                };
            }
            k = k + 1;
        };
    }
    for (i = 0; n - 1 > i; i++) {
        if (WISpQvoDUxEz[i].b < WISpQvoDUxEz[i + 1].a) {
            yCQH9p = 0;
            break;
        }
        else if (WISpQvoDUxEz[i].b > WISpQvoDUxEz[i + 1].b) {
            t = WISpQvoDUxEz[i].b;
            WISpQvoDUxEz[i].b = WISpQvoDUxEz[i + 1].b;
            WISpQvoDUxEz[i + 1].b = t;
        }
        else
            ;
    }
    if (yCQH9p == 0) {
        printf ("no");
    }
    else {
        printf ("%d %d", WISpQvoDUxEz[0].a, WISpQvoDUxEz[n - 1].b);
    }
    return 0;
}

