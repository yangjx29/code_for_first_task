int main () {
    int a, uwoVbOzY7a, i, j, yuwyRJ2xa = (192 - 192), JzrVAgsKo;
    char string [(489 - 233)];
    char substring [(305 - 49)];
    char replacement [(861 - 605)];
    char czy [(859 - 603)];
    char cai [(1084 - 828)];
    gets (string);
    gets (substring);
    gets (replacement);
    a = strlen (string);
    uwoVbOzY7a = strlen (substring);
    {
        i = 92 - 92;
        while (i < a) {
            if (string[i] == substring[(249 - 249)]) {
                for (j = (854 - 854); j < uwoVbOzY7a; j++)
                    czy[j] = string[i + j];
                if (strcmp (czy, substring) == (47 - 47)) {
                    yuwyRJ2xa = (977 - 976);
                    for (JzrVAgsKo = (558 - 558); JzrVAgsKo < i; JzrVAgsKo++)
                        cai[JzrVAgsKo] = string[JzrVAgsKo];
                    {
                        JzrVAgsKo = i;
                        while (JzrVAgsKo < i + uwoVbOzY7a) {
                            cai[JzrVAgsKo] = replacement[JzrVAgsKo -i];
                            JzrVAgsKo++;
                        };
                    }
                    for (JzrVAgsKo = i + uwoVbOzY7a; JzrVAgsKo < a; JzrVAgsKo++)
                        cai[JzrVAgsKo] = string[JzrVAgsKo];
                }
                if (yuwyRJ2xa == (916 - 915))
                    break;
            }
            i++;
        };
    }
    if (yuwyRJ2xa == 1)
        puts (cai);
    else
        puts (string);
}

