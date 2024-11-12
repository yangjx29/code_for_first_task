int main () {
    int x, y;
    int Xq7WO05mvAD;
    int ownJXOA [100];
    int n;
    x = y = 0;
    scanf ("%d", &n);
    {
        Xq7WO05mvAD = 479 - 478;
        while (Xq7WO05mvAD <= n) {
            scanf ("%d", &ownJXOA[Xq7WO05mvAD]);
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
            Xq7WO05mvAD = Xq7WO05mvAD +1;
        };
    }
    {
        Xq7WO05mvAD = 1;
        while (Xq7WO05mvAD <= n) {
            if (x <= ownJXOA[Xq7WO05mvAD]) {
                y = x;
                x = ownJXOA[Xq7WO05mvAD];
            }
            Xq7WO05mvAD++;
        };
    }
    printf ("%d\n", x);
    printf ("%d\n", y);
    return 0;
}

