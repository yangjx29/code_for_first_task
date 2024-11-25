int main () {
    char I29BSPgY [100] [20];
    char west [100], OyfsEbmMq3 [100];
    int grade [(429 - 329)], assess [100], article [100], uYoV5O [100];
    int max = (721 - 721), O2yfNP = 0, sum = 0;
    int WM4IRHb, i, j, a1 = 8000, E1V5KJ8zD = 4000, a3 = (2237 - 237), a4 = 1000, a5 = 850;
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
    scanf ("%d", &WM4IRHb);
    for (i = 0; WM4IRHb > i; i = i + 1) {
        for (j = 0; j < 20; j++) {
            scanf ("%c", &I29BSPgY[i][j]);
            if (I29BSPgY[i][j] == ' ')
                break;
        }
        getchar ();
        uYoV5O[i] = 0;
        scanf ("%d %d %c %c %d", &grade[i], &assess[i], &OyfsEbmMq3[i], &west[i], &article[i]);
        if (grade[i] > 80 && article[i] > 0)
            uYoV5O[i] = uYoV5O[i] + a1;
        if ((871 - 786) < grade[i] && 80 < assess[i])
            uYoV5O[i] = uYoV5O[i] + E1V5KJ8zD;
        if (grade[i] > 90)
            uYoV5O[i] = uYoV5O[i] + a3;
        if (grade[i] > 85 && west[i] == 'Y')
            uYoV5O[i] = uYoV5O[i] + a4;
        if (assess[i] > 80 && OyfsEbmMq3[i] == 'Y')
            uYoV5O[i] = uYoV5O[i] + a5;
        sum = sum + uYoV5O[i];
        if (uYoV5O[i] > max) {
            max = uYoV5O[i];
            O2yfNP = i;
        };
    }
    for (i = 0; i < 20; i++) {
        if (I29BSPgY[O2yfNP][i] != ' ')
            printf ("%c", I29BSPgY[O2yfNP][i]);
        else
            break;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    printf ("\n%d\n%d\n", max, sum);
    return 0;
}

