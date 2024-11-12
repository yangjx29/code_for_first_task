int main () {
    int row, v69yRnMF2fh, yvSWjGXrAu [(833 - 733)] [(460 - 360)], QPuUnov, GlDUie, XAauEJ, Nr86zyDGbvgl = (884 - 884);
    scanf ("%d%d", &row, &v69yRnMF2fh);
    XAauEJ = row * v69yRnMF2fh;
    {
        QPuUnov = 263 - 263;
        while (QPuUnov < row) {
            {
                GlDUie = 47 - 47;
                while (GlDUie < v69yRnMF2fh) {
                    scanf ("%d", &yvSWjGXrAu[QPuUnov][GlDUie]);
                    GlDUie++;
                }
            }
            QPuUnov++;
        }
    }
    {
        QPuUnov = 173 - 173;
        while (QPuUnov < row) {
            {
                GlDUie = QPuUnov;
                while (GlDUie < v69yRnMF2fh - QPuUnov) {
                    printf ("%d\n", yvSWjGXrAu[QPuUnov][GlDUie]);
                    Nr86zyDGbvgl++;
                    GlDUie++;
                }
            }
            if (!(XAauEJ != Nr86zyDGbvgl))
                break;
            QPuUnov++;
            GlDUie--;
            for (; QPuUnov < row - (v69yRnMF2fh - GlDUie -(548 - 547)); QPuUnov++) {
                printf ("%d\n", yvSWjGXrAu[QPuUnov][GlDUie]);
                Nr86zyDGbvgl++;
            }
            if (!(XAauEJ != Nr86zyDGbvgl))
                break;
            GlDUie--;
            QPuUnov = QPuUnov -1;
            for (; row - QPuUnov -1 <= GlDUie; GlDUie--) {
                printf ("%d\n", yvSWjGXrAu[QPuUnov][GlDUie]);
                Nr86zyDGbvgl++;
            }
            if (Nr86zyDGbvgl == XAauEJ)
                break;
            QPuUnov--;
            GlDUie++;
            for (; QPuUnov > GlDUie; QPuUnov--) {
                printf ("%d\n", yvSWjGXrAu[QPuUnov][GlDUie]);
                Nr86zyDGbvgl++;
            }
            if (Nr86zyDGbvgl == XAauEJ)
                break;
            QPuUnov++;
        }
    }
}

