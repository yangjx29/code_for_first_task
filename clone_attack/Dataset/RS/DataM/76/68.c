struct   G7E3NC5tu {
    int lhAqKyg4xal;
    int end;
};
void  main () {
    struct   G7E3NC5tu G7E3NC5tu [(50026 - 24)], wTzZtSQ;
    int Eb823JHipo5, D4Z0eL, zUn17BTruCLA, YJxKmW, nDrOX9MjhZs, flag = (155 - 155);
    scanf ("%d", &Eb823JHipo5);
    {
        D4Z0eL = 932 - 932;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (Eb823JHipo5 > D4Z0eL) {
            scanf ("%d%d", &G7E3NC5tu[D4Z0eL].lhAqKyg4xal, &G7E3NC5tu[D4Z0eL].end);
            D4Z0eL++;
        };
    }
    {
        D4Z0eL = 995 - 995;
        while (Eb823JHipo5 > D4Z0eL) {
            {
                zUn17BTruCLA = 451 - 450;
                while (zUn17BTruCLA < Eb823JHipo5) {
                    if (G7E3NC5tu[D4Z0eL].lhAqKyg4xal > G7E3NC5tu[zUn17BTruCLA].lhAqKyg4xal) {
                        wTzZtSQ = G7E3NC5tu[D4Z0eL];
                        G7E3NC5tu[D4Z0eL] = G7E3NC5tu[zUn17BTruCLA];
                        G7E3NC5tu[zUn17BTruCLA] = wTzZtSQ;
                    }
                    zUn17BTruCLA++;
                };
            }
            D4Z0eL++;
        };
    }
    YJxKmW = G7E3NC5tu[(911 - 911)].lhAqKyg4xal;
    nDrOX9MjhZs = G7E3NC5tu[(645 - 645)].end;
    for (D4Z0eL = 0; Eb823JHipo5 > D4Z0eL; D4Z0eL++) {
        if (nDrOX9MjhZs < G7E3NC5tu[D4Z0eL].lhAqKyg4xal) {
            flag = (968 - 967);
            break;
        }
        else if (G7E3NC5tu[D4Z0eL].lhAqKyg4xal <= nDrOX9MjhZs && nDrOX9MjhZs <= G7E3NC5tu[D4Z0eL].end) {
            nDrOX9MjhZs = G7E3NC5tu[D4Z0eL].end;
        };
    }
    if (flag)
        printf ("no");
    else
        printf ("%d %d\n", YJxKmW, nDrOX9MjhZs);
}

