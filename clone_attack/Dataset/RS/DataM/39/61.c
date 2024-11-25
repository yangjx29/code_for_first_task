struct   stu {
    char Zogm5W0 [(157 - 137)];
    int final;
    int Db29L6rO;
    char WprihWuTM2D;
    char IvtZTqgLdjcH;
    int paper;
};
int main (int NQabjmw, char *argv []) {
    struct   stu H82nKO3L7qE [100];
    int PjwUsq;
    int ReMJjX;
    int Vi9xBt27N4;
    int JGOEbtW;
    int hfWGKcCIe;
    int total [100];
    PjwUsq = 0;
    ReMJjX = 0;
    scanf ("%d", &JGOEbtW);
    {
        hfWGKcCIe = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (hfWGKcCIe < JGOEbtW) {
            scanf ("%s %d %d %c %c %d", H82nKO3L7qE[hfWGKcCIe].Zogm5W0, &H82nKO3L7qE[hfWGKcCIe].final, &H82nKO3L7qE[hfWGKcCIe].Db29L6rO, &H82nKO3L7qE[hfWGKcCIe].WprihWuTM2D, &H82nKO3L7qE[hfWGKcCIe].IvtZTqgLdjcH, &H82nKO3L7qE[hfWGKcCIe].paper);
            hfWGKcCIe++;
        };
    }
    {
        hfWGKcCIe = 0;
        while (hfWGKcCIe < JGOEbtW) {
            total[hfWGKcCIe] = 8000 * (H82nKO3L7qE[hfWGKcCIe].final > 80 && H82nKO3L7qE[hfWGKcCIe].paper >= 1) + 4000 * (H82nKO3L7qE[hfWGKcCIe].final > 85 && H82nKO3L7qE[hfWGKcCIe].Db29L6rO > 80) + 2000 * (H82nKO3L7qE[hfWGKcCIe].final > 90) + 1000 * (H82nKO3L7qE[hfWGKcCIe].final > 85 && H82nKO3L7qE[hfWGKcCIe].IvtZTqgLdjcH == 'Y') + 850 * (H82nKO3L7qE[hfWGKcCIe].Db29L6rO > 80 && H82nKO3L7qE[hfWGKcCIe].WprihWuTM2D == 'Y');
            PjwUsq = PjwUsq +total[hfWGKcCIe];
            if (total[hfWGKcCIe] > ReMJjX) {
                ReMJjX = total[hfWGKcCIe];
                Vi9xBt27N4 = hfWGKcCIe;
            }
            hfWGKcCIe++;
        };
    }
    printf ("%s\n%d\n%d\n", H82nKO3L7qE[Vi9xBt27N4].Zogm5W0, ReMJjX, PjwUsq);
    return 0;
}

