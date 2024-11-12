struct   node {
    char D2Yz13D [(566 - 456)];
}
xyV8iuZ [(233 - 123)];

int main () {
    int FGNF5BCRg;
    int nMowZt;
    int aHzwBEq6x;
    char OWJUi7LM [(510 - 400)], D2Yz13D [110], word [110], V9I3ak8bLW [110];
    gets (OWJUi7LM);
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
    gets (D2Yz13D);
    gets (word);
    {
        FGNF5BCRg = 0;
        aHzwBEq6x = 296 - 296;
        nMowZt = 0;
        while (1) {
            if (!(' ' != OWJUi7LM[FGNF5BCRg]) || OWJUi7LM[FGNF5BCRg] == '\0') {
                if (OWJUi7LM[FGNF5BCRg] == '\0')
                    break;
                V9I3ak8bLW[nMowZt] = '\0';
                nMowZt = 0;
                strcpy (xyV8iuZ[aHzwBEq6x].D2Yz13D, V9I3ak8bLW);
                aHzwBEq6x++;
                continue;
            }
            V9I3ak8bLW[nMowZt++] = OWJUi7LM[FGNF5BCRg];
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
            FGNF5BCRg++;
        };
    }
    for (FGNF5BCRg = 0; FGNF5BCRg < aHzwBEq6x; FGNF5BCRg++) {
        if (strcmp (xyV8iuZ[FGNF5BCRg].D2Yz13D, D2Yz13D) == 0)
            strcpy (xyV8iuZ[FGNF5BCRg].D2Yz13D, word);
    }
    {
        FGNF5BCRg = 0;
        while (FGNF5BCRg < aHzwBEq6x) {
            if (FGNF5BCRg < aHzwBEq6x - 1)
                printf ("%s ", xyV8iuZ[FGNF5BCRg].D2Yz13D);
            else
                printf ("%s", xyV8iuZ[FGNF5BCRg].D2Yz13D);
            FGNF5BCRg++;
        };
    }
    return 0;
}

