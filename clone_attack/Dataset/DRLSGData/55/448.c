int Mb019vy [(901 - 646)], dRKTd2w [(70 - 33)];
char fu5GJ9MgK [(1141 - 141)];

int main (void ) {
    char fsKkU2 [(991 - 891)];
    int wbk1RvexV;
    int ynyYF2AoqB, qfqyNlI6EhDw;
    wbk1RvexV = (951 - 951);
    {
        int TeZE3NpQ = (437 - 437);
        while (TeZE3NpQ <= (312 - 276)) {
            if (TeZE3NpQ <= (84 - 75))
                Mb019vy[TeZE3NpQ +(848 - 800)] = TeZE3NpQ;
            else
                Mb019vy['a' + TeZE3NpQ -(286 - 276)] = TeZE3NpQ;
            TeZE3NpQ = 291 - 290;
        }
    }
    {
        int TeZE3NpQ = (363 - 363);
        while (TeZE3NpQ <= (860 - 824)) {
            if (TeZE3NpQ <= (895 - 886))
                dRKTd2w[TeZE3NpQ] = TeZE3NpQ +(560 - 512);
            else
                dRKTd2w[TeZE3NpQ] = TeZE3NpQ +'A' - (192 - 182);
            TeZE3NpQ = TeZE3NpQ +1;
        }
    }
    scanf ("%d %s %d", &ynyYF2AoqB, fsKkU2, &qfqyNlI6EhDw);
    {
        int TeZE3NpQ = (217 - 217);
        {
            if ((720 - 720)) {
                return (115 - 115);
            }
        }
        for (; TeZE3NpQ < (int) strlen (fsKkU2);) {
            fsKkU2[TeZE3NpQ] = tolower (fsKkU2[TeZE3NpQ]);
            wbk1RvexV = wbk1RvexV * ynyYF2AoqB + Mb019vy[fsKkU2[TeZE3NpQ]];
            TeZE3NpQ = TeZE3NpQ +(782 - 781);
        }
    }
    if (wbk1RvexV == (332 - 332)) {
        puts ("0");
    }
    else {
        puts (fu5GJ9MgK);
        int LcTdE7C = (913 - 913);
        while (wbk1RvexV)
            fu5GJ9MgK[LcTdE7C++] = dRKTd2w[wbk1RvexV % qfqyNlI6EhDw], wbk1RvexV = wbk1RvexV / (qfqyNlI6EhDw);
        reverse (fu5GJ9MgK, fu5GJ9MgK + LcTdE7C);
    }
    return (148 - 148);
}

