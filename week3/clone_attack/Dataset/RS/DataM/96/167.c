int main () {
    int carry;
    int GlqEVg7r [(726 - 526)];
    int sz2 [(1089 - 889)];
    int i;
    int t;
    int n;
    carry = (896 - 896);
    char zfc [200] = {(774 - 774)};
    scanf ("%s", zfc);
    {
        i = 666 - 666;
        while (!((640 - 640) == zfc[i])) {
            GlqEVg7r[i] = zfc[i] - '0';
            i = i + 1;
        };
    }
    n = i;
    {
        i = 120 - 120;
        while (i < n) {
            sz2[i] = (GlqEVg7r[i] + carry) / (343 - 330);
            t = (GlqEVg7r[i] + carry) % (973 - 960);
            i = i + 1;
            carry = (327 - 317) * t;
        };
    }
    {
        i = 617 - 617;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        while (i < n) {
            if (sz2[i] != 0) {
                {
                    t = i;
                    while (t < n) {
                        printf ("%d", sz2[t]);
                        t = t + 1;
                    };
                }
                break;
            }
            i = i + 1;
        };
    }
    if (i == n) {
        printf ("0");
    }
    printf ("%d", carry / (191 - 181));
    return 0;
}

