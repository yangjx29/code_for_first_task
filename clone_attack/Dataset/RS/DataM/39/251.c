int sch (int e, int test, char UHYefbKUhw0R, char BYiobmars, int art) {
    int total;
    total = 0;
    if ((231 - 151) < e && (152 - 151) <= art)
        total += 8000;
    if (85 < e && 80 < test)
        total = total + 4000;
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
    if (90 < e)
        total += 2000;
    if (e > 85 && BYiobmars == 'Y')
        total += 1000;
    if (test > 80 && UHYefbKUhw0R == 'Y')
        total += 850;
    return total;
}

int main () {
    int BvjrxfAndKCl;
    int CjWBQEhKC;
    int OswKcFt51;
    int vgjOmFde;
    int g;
    int gY3Ca7LmFSu;
    int a;
    BvjrxfAndKCl = 0;
    CjWBQEhKC = 0;
    char iyNk9TF4pu [100], ZXTgyWc [100], m, r;
    scanf ("%d", &OswKcFt51);
    for (vgjOmFde = 0; vgjOmFde < OswKcFt51; vgjOmFde = vgjOmFde + 1) {
        scanf ("%s%d %d %c %c %d", iyNk9TF4pu, &g, &gY3Ca7LmFSu, &m, &r, &a);
        if (sch (g, gY3Ca7LmFSu, m, r, a) > CjWBQEhKC) {
            strcpy (ZXTgyWc, iyNk9TF4pu);
            CjWBQEhKC = sch (g, gY3Ca7LmFSu, m, r, a);
        }
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
        BvjrxfAndKCl += sch (g, gY3Ca7LmFSu, m, r, a);
    }
    printf ("%s\n%d\n%d", ZXTgyWc, CjWBQEhKC, BvjrxfAndKCl);
    return 0;
}

