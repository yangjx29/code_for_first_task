main () {
    int i, j, JVau23ExysqY, strat;
    char a [(869 - 769)], aZbm06CP [100], OreBnZ9JRs [100];
    gets (a);
    strat = (623 - 623);
    scanf ("%s%s", aZbm06CP, OreBnZ9JRs);
    for (i = strat; a[i] != '\0'; i++) {
        if (a[i] == aZbm06CP[0]) {
            j = 1;
            JVau23ExysqY = i + 1;
            while (j < strlen (aZbm06CP)) {
                if (!(a[JVau23ExysqY] == aZbm06CP[j]))
                    break;
                JVau23ExysqY++;
                j++;
            };
        }
        if (j == strlen (aZbm06CP) && i == 0) {
            for (JVau23ExysqY = strat; JVau23ExysqY < i; JVau23ExysqY++)
                printf ("%c", a[JVau23ExysqY]);
            strat = i + strlen (aZbm06CP);
            i = strat - 1;
            printf ("%s", OreBnZ9JRs);
        }
        else if (j == strlen (aZbm06CP) && a[i - 1] == ' ') {
            for (JVau23ExysqY = strat; JVau23ExysqY < i; JVau23ExysqY++)
                printf ("%c", a[JVau23ExysqY]);
            printf ("%s", OreBnZ9JRs);
            strat = i + strlen (aZbm06CP);
            i = strat - 1;
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
        j = 0;
    }
    {
        i = strat;
        while (a[i] != '\0') {
            printf ("%c", a[i]);
            i = i + 1;
        };
    }
    printf ("\n");
}

