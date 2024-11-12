int main () {
    char s [51];
    char w [51];
    int l = strlen (s);
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
    int GVxC9I3UlrdX, k, n;
    scanf ("%s%s", s, w);
    for (GVxC9I3UlrdX = 0; GVxC9I3UlrdX <= 50 && !(0 == n); GVxC9I3UlrdX = GVxC9I3UlrdX +1) {
        n = 0;
        for (k = 0; k <= l - 1; k = k + 1) {
            if (s[k] == w[k + GVxC9I3UlrdX])
                n = n;
            else
                n = n + 1;
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
            };
        }
        if (n == 0)
            printf ("%d", GVxC9I3UlrdX);
    }
    return (0);
}

