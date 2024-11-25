int main () {
    int BSLrZaMO5vw, aWGpcoj, BUF9WHo, len;
    char EQT41r [(1535 - 535)] [(1549 - 549)];
    scanf ("%d", &BSLrZaMO5vw);
    {
        aWGpcoj = 252 - 252;
        while (aWGpcoj < BSLrZaMO5vw) {
            scanf ("%s", EQT41r[aWGpcoj]);
            len = strlen (EQT41r[aWGpcoj]);
            for (BUF9WHo = 0; BUF9WHo < len; BUF9WHo = BUF9WHo +1) {
                if (EQT41r[aWGpcoj][BUF9WHo] == 'A') {
                    EQT41r[aWGpcoj][BUF9WHo] = 'T';
                }
                else {
                    if (EQT41r[aWGpcoj][BUF9WHo] == 'T') {
                        EQT41r[aWGpcoj][BUF9WHo] = 'A';
                    }
                    else {
                        if (EQT41r[aWGpcoj][BUF9WHo] == 'G') {
                            EQT41r[aWGpcoj][BUF9WHo] = 'C';
                        }
                        else {
                            if (EQT41r[aWGpcoj][BUF9WHo] == 'C') {
                                EQT41r[aWGpcoj][BUF9WHo] = 'G';
                            }
                            else {
                                EQT41r[aWGpcoj][BUF9WHo] = EQT41r[aWGpcoj][BUF9WHo];
                            };
                        };
                    };
                };
            }
            aWGpcoj = aWGpcoj + 1;
        };
    }
    for (aWGpcoj = 0; aWGpcoj < BSLrZaMO5vw; aWGpcoj++) {
        printf ("%s\n", EQT41r[aWGpcoj]);
    }
    return 0;
}

