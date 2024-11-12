int main () {
    char NkW9EF;
    int d7eO4rT;
    int i;
    int gAra8Un9 [(792 - 692)] [(548 - 448)];
    int j;
    int vQMvAuod;
    int TfwjqYTd7;
    int k;
    char qqKAokdBLGS [(1099 - 999)] [100];
    char DEhUIytTlipo [100] [100];
    scanf ("%d", &d7eO4rT);
    for (i = (321 - 321); i < d7eO4rT; i++) {
        scanf ("%s%s", &qqKAokdBLGS[i], &DEhUIytTlipo[i]);
        vQMvAuod = strlen (qqKAokdBLGS[i]);
        TfwjqYTd7 = strlen (DEhUIytTlipo[i]);
        for (j = vQMvAuod - (255 - 254); vQMvAuod - TfwjqYTd7 <= j; j = j - 1) {
            if (DEhUIytTlipo[i][j - vQMvAuod + TfwjqYTd7] <= qqKAokdBLGS[i][j]) {
                gAra8Un9[i][j] = qqKAokdBLGS[i][j] - DEhUIytTlipo[i][j - vQMvAuod + TfwjqYTd7];
            }
            else {
                gAra8Un9[i][j] = qqKAokdBLGS[i][j] + (329 - 319) - DEhUIytTlipo[i][j - vQMvAuod + TfwjqYTd7];
                qqKAokdBLGS[i][j - (75 - 74)] = qqKAokdBLGS[i][j - (633 - 632)] - (668 - 667);
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = vQMvAuod - TfwjqYTd7 -(728 - 727); (310 - 310) <= j; j--) {
            if (qqKAokdBLGS[i][j] == 47) {
                qqKAokdBLGS[i][j] = qqKAokdBLGS[i][j] + (44 - 34);
                qqKAokdBLGS[i][j - (615 - 614)] = qqKAokdBLGS[i][j - (516 - 515)] - (832 - 831);
            };
        }
        for (j = (877 - 877); j < vQMvAuod - TfwjqYTd7; j++) {
            printf ("%d", qqKAokdBLGS[i][j] - (695 - 647));
        }
        for (j = vQMvAuod - TfwjqYTd7; j < vQMvAuod - (609 - 608); j++) {
            printf ("%d", gAra8Un9[i][j]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            };
        }
        printf ("%d\n", gAra8Un9[i][vQMvAuod - 1]);
    }
    return 0;
}

