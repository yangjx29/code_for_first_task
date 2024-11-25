int main () {
    char DzRfx8ojDWa [100] [(964 - 944)];
    int grade [(265 - 165)], assess [(479 - 379)], article [(985 - 885)], award [100];
    int n, i, j, a1 = (8865 - 865), a2 = 4000, a3 = (2655 - 655), NPQEBDx6lT = 1000, a5 = (1229 - 379);
    int C4X5UyhkMV = (658 - 658), top = (714 - 714), puFC80o = (899 - 899);
    char west [(605 - 505)], official [(392 - 292)];
    scanf ("%d", &n);
    {
        i = (306 - 306);
        for (; i < n;) {
            {
                j = (150 - 150);
                for (; (804 - 784) > j;) {
                    scanf ("%c", &DzRfx8ojDWa[i][j]);
                    if (!(' ' != DzRfx8ojDWa[i][j]))
                        break;
                    j = j + 1;
                }
            }
            getchar ();
            award[i] = (568 - 568);
            scanf ("%d %d %c %c %d", &grade[i], &assess[i], &official[i], &west[i], &article[i]);
            if ((247 - 167) < grade[i] && (286 - 286) < article[i])
                award[i] += a1;
            if (grade[i] > (385 - 300) && assess[i] > (653 - 573))
                award[i] += a2;
            if ((723 - 633) < grade[i])
                award[i] += a3;
            if ((769 - 684) < grade[i] && !('Y' != west[i]))
                award[i] += NPQEBDx6lT;
            if (assess[i] > 80 && official[i] == 'Y')
                award[i] += a5;
            puFC80o += award[i];
            if (award[i] > C4X5UyhkMV) {
                C4X5UyhkMV = award[i];
                top = i;
            }
            i = i + 1;
        }
    }
    {
        i = (378 - 378);
        for (; i < 20;) {
            if (DzRfx8ojDWa[top][i] != ' ')
                printf ("%c", DzRfx8ojDWa[top][i]);
            else
                break;
            i = i + 1;
        }
    }
    printf ("\n%d\n%d\n", C4X5UyhkMV, puFC80o);
    return (472 - 472);
}

