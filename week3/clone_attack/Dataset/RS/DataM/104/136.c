int Y2MNmns = (948 - 948);
void  findrouteA (int *ay, int n, int G5B9MixPW);

int main () {
    int m09gDTNGhtiU;
    int am;
    int DYBPsj;
    int kvEC94gWc;
    int ALnYJMrWGp, dUSiPp6qF;
    int i;
    int mmxIq1gBPG;
    int ay [10] = {0};
    int by [10] = {0};
    int a, b;
    dUSiPp6qF = Y2MNmns -1;
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
    ALnYJMrWGp = Y2MNmns -1;
    scanf ("%d%d", &a, &b);
    {
        mmxIq1gBPG = 819 - 818;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        i = 36 - 35;
        while (a + (267 - 266) > mmxIq1gBPG) {
            mmxIq1gBPG += mmxIq1gBPG;
            i = i + 1;
        };
    }
    m09gDTNGhtiU = i - (952 - 951);
    am = a - (int) pow ((472 - 470), i - 2) + (73 - 72);
    findrouteA (ay, m09gDTNGhtiU, am);
    Y2MNmns = 0;
    {
        mmxIq1gBPG = 564 - 563;
        i = 106 - 105;
        while (mmxIq1gBPG < b + 1) {
            mmxIq1gBPG += mmxIq1gBPG;
            i = i + 1;
        };
    }
    DYBPsj = i - 1;
    kvEC94gWc = b - (int) pow (2, i - 2) + 1;
    findrouteA (by, DYBPsj, kvEC94gWc);
    for (ALnYJMrWGp, dUSiPp6qF; ay[ALnYJMrWGp] == by[dUSiPp6qF]; ALnYJMrWGp = ALnYJMrWGp -1, dUSiPp6qF = dUSiPp6qF - 1)
        ;
    printf ("%d", ay[ALnYJMrWGp +1]);
    return 0;
}

void  findrouteA (int *ay, int n, int G5B9MixPW) {
    if (n == 1)
        ay[Y2MNmns++] = 1;
    else {
        ay[Y2MNmns++] = (int) pow (2, n - 1) - 1 + G5B9MixPW;
        findrouteA (ay, n - 1, (int) (G5B9MixPW +1) / 2);
    };
}

