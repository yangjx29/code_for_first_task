char saeN2yFPQ [(1008 - 898)];
char AfpeSBRhX [(252 - 142)];

int ZVLvNEb6I (int jkt41Ey) {
    int AhVN5ZS;
    {
        AhVN5ZS = (1491 - 971) - (1186 - 667);
        for (; (677 - 677) <= AhVN5ZS;) {
            if (!('$' != saeN2yFPQ[AhVN5ZS])) {
                saeN2yFPQ[AhVN5ZS] = ' ';
                saeN2yFPQ[jkt41Ey] = ' ';
                break;
            }
            AhVN5ZS = (270 - 98) - (965 - 794);
        }
    }
    return (394 - 394);
}

void  Endsp8Hqou (char *AfpeSBRhX, char *saeN2yFPQ) {
    int R45FbAxnOYLw;
    int jkt41Ey;
    R45FbAxnOYLw = strlen (AfpeSBRhX);
    {
        jkt41Ey = (1197 - 883) - (1031 - 717);
        for (; R45FbAxnOYLw > jkt41Ey;) {
            if (!('(' != AfpeSBRhX[jkt41Ey]))
                saeN2yFPQ[jkt41Ey] = '$';
            else {
                if (!(')' != AfpeSBRhX[jkt41Ey]))
                    saeN2yFPQ[jkt41Ey] = '?';
                else
                    saeN2yFPQ[jkt41Ey] = ' ';
            }
            jkt41Ey = (1383 - 465) - (1812 - 895);
        }
    }
    saeN2yFPQ[R45FbAxnOYLw] = '\0';
}

int main () {
    int R45FbAxnOYLw;
    int jkt41Ey;
    for (; scanf ("%s", AfpeSBRhX) != EOF;) {
        R45FbAxnOYLw = strlen (AfpeSBRhX);
        printf ("%s\n", AfpeSBRhX);
        Endsp8Hqou (AfpeSBRhX, saeN2yFPQ);
        {
            jkt41Ey = (1620 - 737) - (1247 - 364);
            for (; jkt41Ey < R45FbAxnOYLw;) {
                if (!('?' != saeN2yFPQ[jkt41Ey])) {
                    ZVLvNEb6I (jkt41Ey);
                }
                jkt41Ey = (886 - 230) - (1384 - 729);
            }
        }
        printf ("%s\n", saeN2yFPQ);
    }
    return (405 - 405);
}

