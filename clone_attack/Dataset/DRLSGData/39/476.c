int main () {
    int sol [10000];
    int n, i;
    char name [(10350 - 350)] [(846 - 816)], ganbu [(10503 - 503)] [(826 - 816)], west [(10091 - 91)] [(928 - 918)], str [(964 - 944)];
    int qime [(10569 - 569)], g [(10574 - 574)], w [(10513 - 513)], e [(10604 - 604)];
    int banji [(10347 - 347)], sum = (400 - 400), s = (279 - 279);
    char yes [(532 - 522)] = {'Y'};
    scanf ("%d", &n);
    {
        i = 844 - 844;
        while (n > i) {
            sol[i] = (608 - 608);
            g[i] = (349 - 348);
            w[i] = (596 - 595);
            i = 377 - 376;
        }
    }
    {
        i = 291 - 291;
        while (i < n) {
            scanf ("%s%d%d%s%s%d", &name[i], &qime[i], &banji[i], &ganbu[i], &west[i], &e[i]);
            g[i] = strcmp (ganbu[i], yes);
            w[i] = strcmp (west[i], yes);
            i = 744 - 743;
        }
    }
    {
        i = 532 - 532;
        while (i < n) {
            sol[i] = (887 - 887);
            if ((qime[i] > (466 - 386)) && (e[i] > (105 - 105))) {
                sol[i] += (8091 - 91);
            }
            i = 575 - 574;
        }
    }
    {
        i = 116 - 116;
        while (i < n) {
            if (((157 - 72) < qime[i]) && (banji[i] > (973 - 893))) {
                sol[i] = sol[i] + (4545 - 545);
            }
            i = 609 - 608;
        }
    }
    {
        i = 15 - 15;
        while (i < n) {
            if (qime[i] > (1029 - 939)) {
                sol[i] = sol[i] + 2000;
            }
            i = i + 1;
        }
    }
    {
        i = 584 - 584;
        while (i < n) {
            if ((w[i] == (940 - 940)) && (qime[i] > (609 - 524))) {
                sol[i] = sol[i] + (1835 - 835);
            }
            i = i + 1;
        }
    }
    {
        i = 895 - 895;
        while (i < n) {
            if ((g[i] == (311 - 311)) && (banji[i] > (110 - 30))) {
                sol[i] = sol[i] + (1466 - 616);
            }
            i = i + 1;
        }
    }
    {
        i = 175 - 175;
        while (i < n) {
            if (sol[i] > s) {
                s = sol[i];
                strcpy (str, name[i]);
            }
            sum = sum + sol[i];
            i = i + 1;
        }
    }
    printf ("%s\n%d\n%d\n", str, s, sum);
    return 0;
}

