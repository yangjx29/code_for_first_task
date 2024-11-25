int t = (941 - 941);

void  j0iAgLtje (int jrJTYLW9, int jKVNi7nT8fc, int *VdEfVz) {
    if (t == jKVNi7nT8fc)
        return;
    else {
        int FOEzhkJ0SIn;
        FOEzhkJ0SIn = *(VdEfVz +jrJTYLW9 - (584 - 583));
        int jtwBLhE4Aq;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            jtwBLhE4Aq = 283 - 282;
            while (jtwBLhE4Aq > (776 - 776)) {
                *(VdEfVz +jtwBLhE4Aq) = *(VdEfVz +jtwBLhE4Aq - (917 - 916));
                jtwBLhE4Aq = jtwBLhE4Aq - 1;
            };
        }
        t = t + 1;
        j0iAgLtje (jrJTYLW9, jKVNi7nT8fc, VdEfVz);
        *VdEfVz = FOEzhkJ0SIn;
    };
}

void  main () {
    int jrJTYLW9;
    int jKVNi7nT8fc;
    int z3MHoOe8 [(218 - 118)];
    int *VdEfVz = z3MHoOe8;
    int jtwBLhE4Aq;
    scanf ("%d %d", &jrJTYLW9, &jKVNi7nT8fc);
    {
        jtwBLhE4Aq = 0;
        while (jtwBLhE4Aq < jrJTYLW9) {
            scanf ("%d", &z3MHoOe8[jtwBLhE4Aq]);
            jtwBLhE4Aq = jtwBLhE4Aq + 1;
        };
    }
    j0iAgLtje (jrJTYLW9, jKVNi7nT8fc, VdEfVz);
    {
        jtwBLhE4Aq = 0;
        while (jtwBLhE4Aq < jrJTYLW9 - (957 - 956)) {
            printf ("%d ", z3MHoOe8[jtwBLhE4Aq]);
            jtwBLhE4Aq = jtwBLhE4Aq + 1;
        };
    }
    printf ("%d", z3MHoOe8[jrJTYLW9 - 1]);
}

