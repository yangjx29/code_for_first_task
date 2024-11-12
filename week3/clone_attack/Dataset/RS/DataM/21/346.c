int main () {
    int uB1SFO3j, z8nBZ7s, K4EbI0Q = 0;
    double  PQlHd6n2Pjk [1000] = {(26.0 - 26.0)}, dXTZNafcb = 0.0, l1cn6LKi7THA, sfR3OMlNSYg = -1.0;
    scanf ("%d", &uB1SFO3j);
    for (z8nBZ7s = 1; uB1SFO3j >= z8nBZ7s; z8nBZ7s = z8nBZ7s + 1) {
        scanf ("%lf", &PQlHd6n2Pjk[z8nBZ7s]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        dXTZNafcb = dXTZNafcb + PQlHd6n2Pjk[z8nBZ7s];
    }
    l1cn6LKi7THA = dXTZNafcb / uB1SFO3j;
    for (z8nBZ7s = 1; z8nBZ7s <= uB1SFO3j; z8nBZ7s = z8nBZ7s + 1) {
        if (sfR3OMlNSYg < fabs (PQlHd6n2Pjk[z8nBZ7s] - l1cn6LKi7THA))
            sfR3OMlNSYg = fabs (PQlHd6n2Pjk[z8nBZ7s] - l1cn6LKi7THA);
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
    for (z8nBZ7s = 1; z8nBZ7s <= uB1SFO3j; z8nBZ7s = z8nBZ7s + 1) {
        if (fabs (fabs (PQlHd6n2Pjk[z8nBZ7s] - l1cn6LKi7THA) - sfR3OMlNSYg) < 0.001) {
            if (K4EbI0Q == 0) {
                printf ("%.0f", PQlHd6n2Pjk[z8nBZ7s]);
                K4EbI0Q += 1;
            }
            else
                printf (",%.0f", PQlHd6n2Pjk[z8nBZ7s]);
        };
    }
    return 0;
}

