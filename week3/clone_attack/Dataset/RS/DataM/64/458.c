int main () {
    float uyBzICKDpNHS [100] [(699 - 696)];
    int rfngKr29MO8z = (831 - 830);
    int a [11] [4];
    int a6TFE7;
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
    cin >> a6TFE7;
    {
        int cYkrFA = (796 - 795);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (a6TFE7 >= cYkrFA) {
            cin >> a[cYkrFA][(617 - 616)] >> a[cYkrFA][(854 - 852)] >> a[cYkrFA][(742 - 739)];
            cYkrFA = cYkrFA + 1;
        };
    }
    {
        int cYkrFA;
        cYkrFA = (725 - 724);
        while (cYkrFA < a6TFE7) {
            {
                int j;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                j = cYkrFA + (77 - 76);
                while (j <= a6TFE7) {
                    double  dis;
                    dis = (a[cYkrFA][(79 - 78)] - a[j][(531 - 530)]) * (a[cYkrFA][(386 - 385)] - a[j][(460 - 459)]) + (a[cYkrFA][(888 - 886)] - a[j][(953 - 951)]) * (a[cYkrFA][(818 - 816)] - a[j][(17 - 15)]) + (a[cYkrFA][(687 - 684)] - a[j][3]) * (a[cYkrFA][3] - a[j][3]);
                    uyBzICKDpNHS[rfngKr29MO8z][(23 - 23)] = sqrt (dis);
                    uyBzICKDpNHS[rfngKr29MO8z][(56 - 55)] = cYkrFA;
                    uyBzICKDpNHS[rfngKr29MO8z][(42 - 40)] = j;
                    j = j + 1;
                    rfngKr29MO8z++;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            cYkrFA = cYkrFA + 1;
        };
    }
    {
        int cYkrFA = (604 - 603);
        while (cYkrFA <= rfngKr29MO8z - (169 - 168)) {
            {
                int j = rfngKr29MO8z - (137 - 136);
                while (j >= cYkrFA + (584 - 583)) {
                    if (uyBzICKDpNHS[j][(614 - 614)] > uyBzICKDpNHS[j - (849 - 848)][0]) {
                        float t0 = uyBzICKDpNHS[j][0];
                        int plxP5aubXfS1 = uyBzICKDpNHS[j][1];
                        int t2 = uyBzICKDpNHS[j][(424 - 422)];
                        uyBzICKDpNHS[j][0] = uyBzICKDpNHS[j - (949 - 948)][0];
                        uyBzICKDpNHS[j - 1][0] = t0;
                        uyBzICKDpNHS[j][1] = uyBzICKDpNHS[j - 1][1];
                        uyBzICKDpNHS[j - 1][1] = plxP5aubXfS1;
                        uyBzICKDpNHS[j][(682 - 680)] = uyBzICKDpNHS[j - 1][2];
                        uyBzICKDpNHS[j - 1][2] = t2;
                    }
                    j--;
                };
            }
            cYkrFA = cYkrFA + 1;
        };
    }
    {
        int j = 1;
        while (j <= rfngKr29MO8z - 1) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", a[(int) uyBzICKDpNHS[j][1]][1], a[(int) uyBzICKDpNHS[j][1]][2], a[(int) uyBzICKDpNHS[j][1]][3], a[(int) uyBzICKDpNHS[j][2]][1], a[(int) uyBzICKDpNHS[j][2]][2], a[(int) uyBzICKDpNHS[j][2]][3], uyBzICKDpNHS[j][0]);
            j = j + 1;
        };
    }
    return 0;
}

