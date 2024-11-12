int main () {
    int nsQmNCSE;
    int zcPdB0uxjiX4;
    int IyJeBwh;
    int j;
    int Ya2ZVTF [1000] [1000];
    int P78NiBZftj;
    int VrapGdJ9ys7Q;
    int c;
    int d;
    int s;
    nsQmNCSE = 1;
    scanf ("%d", &zcPdB0uxjiX4);
    {
        IyJeBwh = 0;
        while (IyJeBwh < zcPdB0uxjiX4) {
            {
                j = 0;
                while (zcPdB0uxjiX4 > j) {
                    scanf ("%d", &Ya2ZVTF[IyJeBwh][j]);
                    if (!(0 != Ya2ZVTF[IyJeBwh][j]) && nsQmNCSE == 1) {
                        nsQmNCSE = 0;
                        P78NiBZftj = IyJeBwh;
                        VrapGdJ9ys7Q = j;
                    }
                    if (Ya2ZVTF[IyJeBwh][j] == 0) {
                        c = IyJeBwh;
                        d = j;
                    }
                    j = j + 1;
                };
            }
            IyJeBwh++;
        };
    }
    s = (c - P78NiBZftj -1) * (d - VrapGdJ9ys7Q -1);
    printf ("%d\n", s);
    return 0;
}

