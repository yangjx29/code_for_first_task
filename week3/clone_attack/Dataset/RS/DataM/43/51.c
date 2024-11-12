int main () {
    int W6PgSouHnj5, snY4vZTdQG2C [1000], XiXeAuWd8 = 0, i, CJRntosCuU;
    scanf ("%d", &W6PgSouHnj5);
    for (i = 2; i < W6PgSouHnj5; i++) {
        for (CJRntosCuU = 2; CJRntosCuU <= sqrt (i); CJRntosCuU = CJRntosCuU +1) {
            if (!(0 != i % CJRntosCuU))
                break;
        }
        if (CJRntosCuU > sqrt (i)) {
            snY4vZTdQG2C[XiXeAuWd8] = i;
            XiXeAuWd8 = XiXeAuWd8 +1;
        };
    }
    {
        i = 0;
        while (i < XiXeAuWd8 -1) {
            {
                CJRntosCuU = XiXeAuWd8 -1;
                while (CJRntosCuU >= i) {
                    if (snY4vZTdQG2C[i] + snY4vZTdQG2C[CJRntosCuU] == W6PgSouHnj5)
                        printf ("%d %d\n", snY4vZTdQG2C[i], snY4vZTdQG2C[CJRntosCuU]);
                    CJRntosCuU = CJRntosCuU -1;
                };
            }
            i = i + 1;
        };
    }
    getchar ();
    getchar ();
}

