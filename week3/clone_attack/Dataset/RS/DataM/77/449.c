int i = (271 - 271), lPIEdmsYRF = 0;
int a [200];
char d;

int solve () {
    char c;
    scanf ("%c", &c);
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
    if (!(d != c)) {
        a[i] = lPIEdmsYRF;
        lPIEdmsYRF++;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        i = i + 1;
        solve ();
    }
    if (c != d) {
        printf ("%d %d\n", a[i - 1], lPIEdmsYRF);
        lPIEdmsYRF++;
        i--;
        if (i == 0)
            return 0;
        solve ();
    };
}

int main () {
    char c;
    scanf ("%c", &c);
    d = c;
    a[i] = lPIEdmsYRF;
    lPIEdmsYRF++;
    i++;
    solve ();
}

