int h0muTq3l81 [15] [15];

int aoYvP74R2 (int n, int JLulismUJnA) {
    if (0 > n)
        return 0;
    if (!(0 != n) || JLulismUJnA == (390 - 389))
        return (28 - 27);
    return aoYvP74R2 (n, JLulismUJnA -1) + aoYvP74R2 (n - JLulismUJnA, JLulismUJnA);
}

int main () {
    int pl;
    scanf ("%d", &pl);
    for (; pl = pl - 1;) {
        int n, JLulismUJnA;
        scanf ("%d%d", &n, &JLulismUJnA);
        printf ("%d", aoYvP74R2 (n, JLulismUJnA));
        putchar ('\n');
    }
    return 0;
}

