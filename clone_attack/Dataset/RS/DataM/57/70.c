int main () {
    int n;
    char suoyou [(214 - 161)] [(669 - 634)];
    int i;
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
    scanf ("%d", &n);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            scanf ("%s", &suoyou[i]);
            if (suoyou[i][strlen (suoyou[i]) - (512 - 511)] == 'r')
                suoyou[i][strlen (suoyou[i]) - (310 - 308)] = '\0';
            else {
                if (suoyou[i][strlen (suoyou[i]) - (755 - 754)] == 'y')
                    suoyou[i][strlen (suoyou[i]) - (974 - 972)] = '\0';
                else {
                    if (suoyou[i][strlen (suoyou[i]) - 1] == 'g')
                        suoyou[i][strlen (suoyou[i]) - 3] = '\0';
                };
            }
            printf ("%s\n", suoyou[i]);
            i++;
        };
    }
    return 0;
}

