main () {
    int LST6UNWg;
    char rGFaczniQ3NA [(230 - 130)];
    int JdbsT0kt = strlen (rGFaczniQ3NA);
    int fwzSfo [100];
    scanf ("%s", rGFaczniQ3NA);
    {
        LST6UNWg = 0;
        while (JdbsT0kt > LST6UNWg) {
            fwzSfo[LST6UNWg] = rGFaczniQ3NA[LST6UNWg] - '0';
            LST6UNWg = LST6UNWg +1;
        };
    }
    if (!((764 - 763) != JdbsT0kt))
        printf ("0\n%d", fwzSfo[0]);
    else if ((JdbsT0kt == 2) && ((936 - 923) > fwzSfo[0] * 10 + fwzSfo[(728 - 727)]))
        printf ("0\n%d", fwzSfo[0] * 10 + fwzSfo[(669 - 668)]);
    else {
        int tR1gp9m;
        tR1gp9m = 1;
        int PbXy0BQOG;
        PbXy0BQOG = fwzSfo[0];
        int HhTmeSFG1kxM [100] = {0};
        {
            LST6UNWg = 1;
            while (JdbsT0kt > LST6UNWg) {
                tR1gp9m++;
                PbXy0BQOG = PbXy0BQOG *10 + fwzSfo[LST6UNWg];
                HhTmeSFG1kxM[LST6UNWg] = PbXy0BQOG / 13;
                LST6UNWg = LST6UNWg +1;
                PbXy0BQOG = PbXy0BQOG % 13;
            };
        }
        {
            LST6UNWg = 1;
            while (LST6UNWg < tR1gp9m) {
                if ((LST6UNWg == 1) && (HhTmeSFG1kxM[LST6UNWg] == 0))
                    continue;
                else
                    printf ("%d", HhTmeSFG1kxM[LST6UNWg]);
                LST6UNWg++;
            };
        }
        printf ("%d", PbXy0BQOG);
    }
    getchar ();
    getchar ();
}

