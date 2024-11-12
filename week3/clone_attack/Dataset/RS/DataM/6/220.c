int main () {
    int k;
    int a [100] [2];
    int c [100] [100] [100];
    int i;
    int Hh4vORyX0zF;
    int p;
    int s [100];
    scanf ("%d", &k);
    {
        i = 370 - 370;
        while (k > i) {
            scanf ("%d%d", &a[i][(830 - 830)], &a[i][(79 - 78)]);
            {
                Hh4vORyX0zF = 755 - 755;
                while (a[i][(177 - 177)] > Hh4vORyX0zF) {
                    {
                        p = 784 - 784;
                        while (a[i][(651 - 650)] > p) {
                            scanf ("%d", &c[i][Hh4vORyX0zF][p]);
                            p++;
                        };
                    }
                    Hh4vORyX0zF = Hh4vORyX0zF +1;
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (k > i) {
            s[i] = 0;
            for (Hh4vORyX0zF = 0; a[i][1] > Hh4vORyX0zF; Hh4vORyX0zF++)
                s[i] = s[i] + c[i][0][Hh4vORyX0zF];
            {
                Hh4vORyX0zF = 0;
                while (a[i][1] > Hh4vORyX0zF) {
                    s[i] = s[i] + c[i][a[i][0] - 1][Hh4vORyX0zF];
                    Hh4vORyX0zF++;
                };
            }
            {
                Hh4vORyX0zF = 1;
                while (a[i][0] - 1 > Hh4vORyX0zF) {
                    s[i] = s[i] + c[i][Hh4vORyX0zF][0];
                    Hh4vORyX0zF++;
                };
            }
            {
                Hh4vORyX0zF = 1;
                while (a[i][0] - 1 > Hh4vORyX0zF) {
                    s[i] = s[i] + c[i][Hh4vORyX0zF][a[i][1] - 1];
                    Hh4vORyX0zF++;
                };
            }
            printf ("%d\n", s[i]);
            i++;
        };
    }
    return 0;
}

