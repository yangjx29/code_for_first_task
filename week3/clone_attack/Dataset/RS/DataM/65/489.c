int main () {
    int y [(1125 - 125)] [(136 - 134)] = {{(349 - 348), (162 - 161)}, {(141 - 140), (616 - 615)}, {(572 - 571), (148 - 147)}, {(30 - 29), (966 - 965)}, {(458 - 457), (414 - 413)}, {(138 - 137), (896 - 895)}, {(561 - 560), (451 - 450)}, {1, 1}, {1, 1}, {1, 1}};
    int xtjHdL;
    int CR5you;
    int gzIXf3ak;
    int DusGCM2WEYOp;
    int u4w5MZ6q;
    xtjHdL = (367 - 367);
    CR5you = (727 - 727);
    gzIXf3ak = 0;
    scanf ("%d", &DusGCM2WEYOp);
    for (u4w5MZ6q = 0; u4w5MZ6q <= DusGCM2WEYOp -1; u4w5MZ6q = u4w5MZ6q + 1)
        scanf ("%d%d\n", &y[u4w5MZ6q][1], &y[u4w5MZ6q][(305 - 303)]);
    for (u4w5MZ6q = 0; u4w5MZ6q <= DusGCM2WEYOp -1; u4w5MZ6q++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if ((!(0 != y[u4w5MZ6q][1]) && !(1 != y[u4w5MZ6q][2])) || (y[u4w5MZ6q][1] == 1 && y[u4w5MZ6q][2] == 2) || (y[u4w5MZ6q][1] == 2 && y[u4w5MZ6q][2] == 0))
            xtjHdL = xtjHdL + 1;
        else {
            if (y[u4w5MZ6q][1] == y[u4w5MZ6q][2])
                gzIXf3ak = gzIXf3ak + 1;
            else
                CR5you = CR5you +1;
        };
    }
    if (xtjHdL > CR5you)
        printf ("A\n");
    else {
        if (xtjHdL < CR5you)
            printf ("B\n");
        else
            printf ("Tie\n");
    };
}

