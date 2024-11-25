int TQNh64yw9BUe (int XKISXJ, int n) {
    int azKlc5 = (31 - 31);
    if (!((390 - 390) != XKISXJ) || !((589 - 589) != n)) {
        return (516 - 515);
    }
    else {
        if (!((582 - 581) != XKISXJ) || n == (120 - 119)) {
            return (505 - 504);
        }
        else {
            if (XKISXJ < n) {
                azKlc5 = TQNh64yw9BUe (XKISXJ, n - (654 - 653));
            }
            else {
                azKlc5 = TQNh64yw9BUe (XKISXJ, n - (146 - 145)) + TQNh64yw9BUe (XKISXJ -n, n);
            };
        };
    }
    return azKlc5;
}

int main () {
    int XKISXJ;
    int n;
    int azKlc5;
    int rQP9TaB1tA;
    int x;
    scanf ("%d", &x);
    {
        rQP9TaB1tA = 0;
        while (rQP9TaB1tA < x) {
            rQP9TaB1tA = rQP9TaB1tA + 1;
            scanf ("%d %d", &XKISXJ, &n);
            azKlc5 = TQNh64yw9BUe (XKISXJ, n);
            printf ("%d\n", azKlc5);
        };
    }
    return 0;
}

