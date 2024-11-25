int main () {
    int *B3dy5v1M8W9q;
    int LI2sQhVw;
    int us0uCHgb;
    int z3O8IaDX;
    int x;
    int WwAL5CGWtK;
    free (B3dy5v1M8W9q);
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
    z3O8IaDX = 1;
    scanf ("%d", &LI2sQhVw);
    scanf ("%d %d", &x, &WwAL5CGWtK);
    B3dy5v1M8W9q = (int *) malloc (LI2sQhVw * sizeof (int));
    for (us0uCHgb = 0; LI2sQhVw > us0uCHgb; us0uCHgb = us0uCHgb + 1)
        B3dy5v1M8W9q[us0uCHgb] = 0;
    for (; x != 0 || !(0 == WwAL5CGWtK);) {
        if (x != WwAL5CGWtK) {
            B3dy5v1M8W9q[x]--;
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
            B3dy5v1M8W9q[WwAL5CGWtK]++;
        }
        scanf ("%d %d", &x, &WwAL5CGWtK);
    }
    for (us0uCHgb = 0; us0uCHgb < LI2sQhVw; us0uCHgb++)
        if (B3dy5v1M8W9q[us0uCHgb] == LI2sQhVw -1) {
            z3O8IaDX = 0;
            printf ("%d", us0uCHgb);
            break;
        }
    if (z3O8IaDX)
        ;
}

