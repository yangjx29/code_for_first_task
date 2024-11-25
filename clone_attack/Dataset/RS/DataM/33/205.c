int main () {
    char VebNE4zr [256];
    int ea4Xlb8oZT;
    int agJD9pHR;
    int rSsQtXwDJpc;
    ea4Xlb8oZT = 0;
    agJD9pHR = 0;
    scanf ("%d", &rSsQtXwDJpc);
    for (agJD9pHR = 0; rSsQtXwDJpc > agJD9pHR; agJD9pHR = agJD9pHR + 1) {
        scanf ("%s", VebNE4zr);
        for (ea4Xlb8oZT = 0; !('\0' == VebNE4zr[ea4Xlb8oZT]); ea4Xlb8oZT = ea4Xlb8oZT + 1) {
            if (VebNE4zr[ea4Xlb8oZT] == 'A')
                VebNE4zr[ea4Xlb8oZT] = 'T';
            else if (VebNE4zr[ea4Xlb8oZT] == 'T')
                VebNE4zr[ea4Xlb8oZT] = 'A';
            else if (VebNE4zr[ea4Xlb8oZT] == 'G')
                VebNE4zr[ea4Xlb8oZT] = 'C';
            else if (VebNE4zr[ea4Xlb8oZT] == 'C')
                VebNE4zr[ea4Xlb8oZT] = 'G';
        }
        printf ("%s\n", VebNE4zr);
    }
    return 0;
}

