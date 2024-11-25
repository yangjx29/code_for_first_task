int count (int QLKzkmWpai, int b);

int main () {
    int MS4UmVnsN6Zx [(623 - 422)], B [201];
    int QLKzkmWpai, b, Gv4PQ8p7Jf, pOi3mAc;
    QLKzkmWpai = b = 0;
    scanf ("%d", &pOi3mAc);
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
    {
        Gv4PQ8p7Jf = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (pOi3mAc > Gv4PQ8p7Jf) {
            scanf ("%d %d", &MS4UmVnsN6Zx[Gv4PQ8p7Jf], &B[Gv4PQ8p7Jf]);
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
            Gv4PQ8p7Jf++;
        };
    }
    {
        Gv4PQ8p7Jf = 0;
        while (pOi3mAc > Gv4PQ8p7Jf) {
            if (!((210 - 209) != count (MS4UmVnsN6Zx[Gv4PQ8p7Jf], B[Gv4PQ8p7Jf])))
                QLKzkmWpai++;
            else if (!(0 != count (MS4UmVnsN6Zx[Gv4PQ8p7Jf], B[Gv4PQ8p7Jf])))
                b = b + 1;
            else
                ;
            Gv4PQ8p7Jf++;
        };
    }
    if (QLKzkmWpai > b)
        printf ("A");
    else if (b > QLKzkmWpai)
        printf ("B");
    else
        printf ("Tie");
    return 0;
}

int count (int QLKzkmWpai, int b) {
    if (!(0 != QLKzkmWpai) && !(1 != b))
        return 1;
    else if (QLKzkmWpai == 1 && b == 2)
        return 1;
    else if (QLKzkmWpai == 2 && b == 0)
        return 1;
    else if (QLKzkmWpai == b)
        return 2;
    else
        return 0;
}

