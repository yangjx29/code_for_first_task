int main () {
    int l80NbhYi4yql, j, cZ5l7r3mP;
    int f2NBCdLP;
    f2NBCdLP = -100000;
    int nicOgkMQ3W = -100000;
    int a [300];
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
    char GDCBEY [300];
    for (l80NbhYi4yql = 0; l80NbhYi4yql < 300; l80NbhYi4yql = l80NbhYi4yql + 1) {
        scanf ("%d%c", &a[l80NbhYi4yql], &GDCBEY[l80NbhYi4yql]);
        if (!('\n' != GDCBEY[l80NbhYi4yql]))
            break;
    }
    cZ5l7r3mP = l80NbhYi4yql;
    if (l80NbhYi4yql == 0)
        printf ("No");
    else {
        for (l80NbhYi4yql = 0; cZ5l7r3mP >= l80NbhYi4yql; l80NbhYi4yql = l80NbhYi4yql + 1)
            if (f2NBCdLP < a[l80NbhYi4yql])
                f2NBCdLP = a[l80NbhYi4yql];
        {
            l80NbhYi4yql = 0;
            while (l80NbhYi4yql <= cZ5l7r3mP) {
                if (a[l80NbhYi4yql] == f2NBCdLP) {
                    a[l80NbhYi4yql] = -10000;
                }
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                l80NbhYi4yql = l80NbhYi4yql + 1;
            };
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
        {
            l80NbhYi4yql = 0;
            while (l80NbhYi4yql <= cZ5l7r3mP) {
                if (a[l80NbhYi4yql] > nicOgkMQ3W)
                    nicOgkMQ3W = a[l80NbhYi4yql];
                l80NbhYi4yql = l80NbhYi4yql + 1;
            };
        }
        if (nicOgkMQ3W == f2NBCdLP || nicOgkMQ3W == -10000)
            printf ("No");
        else
            printf ("%d", nicOgkMQ3W);
    }
    return 0;
}

