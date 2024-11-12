int row, kdXB6MZ3Y, *P0sj5Unp1;

int main () {
    void  out (int LuR7c1xjk, int qfSDpxMsov6, int SPFLfxAYy);
    int LuR7c1xjk;
    scanf ("%d %d", &row, &kdXB6MZ3Y);
    P0sj5Unp1 = (int *) malloc (row * kdXB6MZ3Y * sizeof (int));
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
        LuR7c1xjk = 914 - 914;
        while (row * kdXB6MZ3Y > LuR7c1xjk) {
            scanf ("%d", &P0sj5Unp1[LuR7c1xjk]);
            LuR7c1xjk = LuR7c1xjk +1;
        };
    }
    printf ("%d", P0sj5Unp1[0]);
    {
        LuR7c1xjk = 55 - 54;
        while (LuR7c1xjk < kdXB6MZ3Y) {
            out (LuR7c1xjk, LuR7c1xjk, 0);
            LuR7c1xjk++;
        };
    }
    for (LuR7c1xjk = 1; row > LuR7c1xjk; LuR7c1xjk++)
        out (LuR7c1xjk, kdXB6MZ3Y - 1, LuR7c1xjk);
    return 0;
}

void  out (int LuR7c1xjk, int qfSDpxMsov6, int SPFLfxAYy) {
    while (qfSDpxMsov6 != -1 && SPFLfxAYy != row) {
        SPFLfxAYy++;
        printf ("\n%d", *(P0sj5Unp1 +SPFLfxAYy*kdXB6MZ3Y + qfSDpxMsov6));
        qfSDpxMsov6--;
    };
}

