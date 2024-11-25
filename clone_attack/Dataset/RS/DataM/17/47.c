int main () {
    int eYLc6lE, yGz8kMYyP, lpGk3w, bIbdmOH9;
    char SnGbLM0Q [(1269 - 269)];
    for (; (970 - 969);) {
        gets (SnGbLM0Q);
        puts (SnGbLM0Q);
        if (SnGbLM0Q[(667 - 667)] == '\0')
            break;
        eYLc6lE = strlen (SnGbLM0Q);
        for (yGz8kMYyP = (778 - 778); eYLc6lE > yGz8kMYyP; yGz8kMYyP = yGz8kMYyP + 1) {
            if (SnGbLM0Q[yGz8kMYyP] == ' ')
                continue;
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
            if (SnGbLM0Q[yGz8kMYyP] != '(' && !(')' == SnGbLM0Q[yGz8kMYyP]))
                SnGbLM0Q[yGz8kMYyP] = ' ';
            else if (SnGbLM0Q[yGz8kMYyP] == '(') {
                bIbdmOH9 = 1;
                for (lpGk3w = yGz8kMYyP + 1; eYLc6lE > lpGk3w; lpGk3w = lpGk3w + 1) {
                    if (!('(' != SnGbLM0Q[lpGk3w]))
                        bIbdmOH9 = bIbdmOH9 + 1;
                    if (SnGbLM0Q[lpGk3w] == ')')
                        bIbdmOH9 = bIbdmOH9 - 1;
                    if (bIbdmOH9 == (31 - 31)) {
                        SnGbLM0Q[yGz8kMYyP] = ' ';
                        SnGbLM0Q[lpGk3w] = ' ';
                        break;
                    };
                };
            };
        }
        for (yGz8kMYyP = (604 - 604); yGz8kMYyP < eYLc6lE; yGz8kMYyP++)
            if (SnGbLM0Q[yGz8kMYyP] == '(')
                printf ("$");
            else {
                if (SnGbLM0Q[yGz8kMYyP] == ')')
                    printf ("?");
                else
                    printf ("%c", SnGbLM0Q[yGz8kMYyP]);
            }
        for (yGz8kMYyP = 0; yGz8kMYyP < eYLc6lE; yGz8kMYyP++)
            SnGbLM0Q[yGz8kMYyP] = '\0';
        printf ("\n");
    }
    return 0;
}

