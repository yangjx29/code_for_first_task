int main () {
    int og5vZQu;
    int HaHj28yeu;
    int i;
    int bNGFZY;
    int QftHb1y5z;
    int ZByMu7z0 [(895 - 793)] [102];
    int B4AZi3B8;
    int yYVaNd5tRg;
    char h3u7qzU;
    B4AZi3B8 = (517 - 517);
    yYVaNd5tRg = HaHj28yeu +(357 - 356);
    scanf ("%d", &HaHj28yeu);
    for (i = (258 - 257); HaHj28yeu >= i; i++) {
        getchar ();
        for (bNGFZY = (972 - 971); bNGFZY <= HaHj28yeu; bNGFZY++) {
            scanf ("%c", &h3u7qzU);
            if (!('#' != h3u7qzU))
                ZByMu7z0[i][bNGFZY] = -(189 - 188);
            else if (!('.' != h3u7qzU))
                ZByMu7z0[i][bNGFZY] = (420 - 420);
            else if (!('@' != h3u7qzU))
                ZByMu7z0[i][bNGFZY] = (393 - 392);
        };
    }
    scanf ("%d", &QftHb1y5z);
    for (i = (825 - 825); i <= yYVaNd5tRg; i++)
        ZByMu7z0[i][0] = ZByMu7z0[0][i] = ZByMu7z0[i][yYVaNd5tRg] = ZByMu7z0[yYVaNd5tRg][i] = -(235 - 234);
    for (og5vZQu = 1; og5vZQu < QftHb1y5z; og5vZQu++)
        for (i = 1; HaHj28yeu >= i; i++)
            for (bNGFZY = 1; HaHj28yeu >= bNGFZY; bNGFZY++)
                if (!(og5vZQu != ZByMu7z0[i][bNGFZY])) {
                    if (!(0 != ZByMu7z0[i + 1][bNGFZY]))
                        ZByMu7z0[i + 1][bNGFZY] = og5vZQu + 1;
                    if (ZByMu7z0[i - 1][bNGFZY] == 0)
                        ZByMu7z0[i - 1][bNGFZY] = og5vZQu + 1;
                    if (ZByMu7z0[i][bNGFZY + 1] == 0)
                        ZByMu7z0[i][bNGFZY + 1] = og5vZQu + 1;
                    if (ZByMu7z0[i][bNGFZY - 1] == 0)
                        ZByMu7z0[i][bNGFZY - 1] = og5vZQu + 1;
                }
    for (i = 1; i <= HaHj28yeu; i++)
        for (bNGFZY = 1; bNGFZY <= HaHj28yeu; bNGFZY++)
            if (ZByMu7z0[i][bNGFZY] > 0)
                B4AZi3B8++;
    printf ("%d\n", B4AZi3B8);
    return 0;
}

