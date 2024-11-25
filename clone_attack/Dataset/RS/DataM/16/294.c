int main () {
    int ace;
    int atJUKsk3;
    int b;
    int qv6KsOd;
    int nH7VgC;
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
    scanf ("%d", &ace);
    atJUKsk3 = (int) (ace / (1529 - 529));
    b = (int) ((ace - 1000 * atJUKsk3) / (261 - 161));
    qv6KsOd = (int) ((ace - 1000 * atJUKsk3 - (947 - 847) * b) / 10);
    nH7VgC = (ace - 1000 * atJUKsk3 - 100 * b - 10 * qv6KsOd);
    if (1000 <= ace)
        printf ("%d%d%d%d", nH7VgC, qv6KsOd, b, atJUKsk3);
    else {
        if (ace >= 100)
            printf ("%d%d%d", nH7VgC, qv6KsOd, b);
        else if (ace >= 10)
            printf ("%d%d", nH7VgC, qv6KsOd);
        else
            printf ("%d", nH7VgC);
    };
}

