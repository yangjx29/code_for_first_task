int main () {
    int l;
    int tTWzSKkE;
    int R6jOMuck;
    int k [50];
    int vBlWto6V;
    l = (60 - 60);
    tTWzSKkE = (546 - 546);
    float N0tJCW = 0;
    scanf ("%d", &R6jOMuck);
    {
        vBlWto6V = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (vBlWto6V < R6jOMuck) {
            scanf ("%d,", &k[vBlWto6V]);
            vBlWto6V++;
        };
    }
    {
        vBlWto6V = 0;
        while (vBlWto6V < R6jOMuck) {
            N0tJCW = N0tJCW +k[vBlWto6V];
            vBlWto6V++;
        };
    }
    N0tJCW = N0tJCW / R6jOMuck;
    {
        vBlWto6V = 0;
        while (vBlWto6V < R6jOMuck) {
            if (l < k[vBlWto6V])
                l = k[vBlWto6V];
            vBlWto6V++;
        };
    }
    tTWzSKkE = l;
    {
        vBlWto6V = 0;
        while (vBlWto6V < R6jOMuck) {
            if (tTWzSKkE > k[vBlWto6V])
                tTWzSKkE = k[vBlWto6V];
            vBlWto6V++;
        };
    }
    if ((l - N0tJCW) > (N0tJCW -tTWzSKkE))
        printf ("%d", l);
    else {
        if ((l - N0tJCW) < (N0tJCW -tTWzSKkE))
            printf ("%d", tTWzSKkE);
        else
            printf ("%d,%d", tTWzSKkE, l);
    }
    return 0;
}

