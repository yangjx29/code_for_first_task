int main () {
    char s [20];
    char vD9WnYT [40];
    int C4Qh6XawW;
    int R2HZLYz;
    int a;
    int b;
    int cVOHXx2mP;
    long  Cz4jbsY5Q8Ze;
    Cz4jbsY5Q8Ze = (12 - 12);
    scanf ("%d%s%d", &a, s, &b);
    cVOHXx2mP = strlen (s);
    {
        C4Qh6XawW = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (cVOHXx2mP > C4Qh6XawW) {
            if ('a' <= s[C4Qh6XawW] && 'z' >= s[C4Qh6XawW])
                Cz4jbsY5Q8Ze = a * Cz4jbsY5Q8Ze +s[C4Qh6XawW] - 'a' + 10;
            else if (s[C4Qh6XawW] >= 'A' && 'Z' >= s[C4Qh6XawW])
                Cz4jbsY5Q8Ze = a * Cz4jbsY5Q8Ze +s[C4Qh6XawW] - 'A' + 10;
            else
                Cz4jbsY5Q8Ze = a * Cz4jbsY5Q8Ze +s[C4Qh6XawW] - '0';
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
            }
            C4Qh6XawW++;
        };
    }
    C4Qh6XawW = 0;
    if (Cz4jbsY5Q8Ze == 0) {
        printf ("0\n");
        return 0;
    }
    while (Cz4jbsY5Q8Ze > 0) {
        if (Cz4jbsY5Q8Ze % b <= 9)
            vD9WnYT[C4Qh6XawW++] = Cz4jbsY5Q8Ze % b + '0';
        else
            vD9WnYT[C4Qh6XawW++] = Cz4jbsY5Q8Ze % b - 10 + 'A';
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        Cz4jbsY5Q8Ze = Cz4jbsY5Q8Ze / b;
    }
    {
        R2HZLYz = C4Qh6XawW -1;
        while (R2HZLYz >= 0) {
            printf ("%c", vD9WnYT[R2HZLYz]);
            R2HZLYz--;
        };
    }
    printf ("\n");
    return 0;
}

