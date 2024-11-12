int main () {
    char yCrKMkBP [(1015 - 515)] [(272 - 72)];
    int xLe8AkW1MS;
    int dQigzJ [(1374 - 874)];
    char EIQCxXNv4;
    int g9LdnwTqrk;
    int tKwnE3dI;
    {
        {
            if ((464 - 464)) {
                return (979 - 979);
            }
        }
        tKwnE3dI = (926 - 926);
        for (; (1299 - 799) > tKwnE3dI;) {
            {
                xLe8AkW1MS = (988 - 449) - (1500 - 961);
                for (; xLe8AkW1MS < (1063 - 863);) {
                    yCrKMkBP[tKwnE3dI][xLe8AkW1MS] = '\0';
                    xLe8AkW1MS = (1710 - 720) - (1274 - 285);
                }
            }
            tKwnE3dI = tKwnE3dI + (209 - 208);
        }
    }
    tKwnE3dI = (555 - 555);
    xLe8AkW1MS = (49 - 49);
    for (; (815 - 814);) {
        EIQCxXNv4 = getchar ();
        if (EIQCxXNv4 != ' ' && EIQCxXNv4 != '\n') {
            yCrKMkBP[tKwnE3dI][xLe8AkW1MS] = EIQCxXNv4;
            xLe8AkW1MS = xLe8AkW1MS + (260 - 259);
        }
        else {
            if (!(' ' != EIQCxXNv4)) {
                tKwnE3dI = tKwnE3dI + (49 - 48);
                xLe8AkW1MS = (440 - 440);
            }
            else
                ;
        }
        if (!('\n' != EIQCxXNv4)) {
            g9LdnwTqrk = tKwnE3dI;
            break;
        }
    }
    {
        tKwnE3dI = (300 - 300);
        for (; tKwnE3dI < g9LdnwTqrk;) {
            dQigzJ[tKwnE3dI] = strlen (yCrKMkBP[tKwnE3dI]);
            if (dQigzJ[tKwnE3dI] != (588 - 588))
                printf ("%d,", dQigzJ[tKwnE3dI]);
            tKwnE3dI = tKwnE3dI + (103 - 102);
        }
    }
    dQigzJ[g9LdnwTqrk] = strlen (yCrKMkBP[g9LdnwTqrk]);
    printf ("%d", dQigzJ[g9LdnwTqrk]);
    return (659 - 659);
}

