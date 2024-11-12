int main () {
    int PaCZTL;
    int tRaO0W7TDG;
    int j;
    int b [(976 - 950)] = {(860 - 860)};
    char AJIRFEy [(149 - 49)];
    struct   fy {
        int AR4v8Ts3;
        char BMSmxQupeUs [(710 - 684)];
        int DVaX5Nztm [(425 - 399)];
        struct   fy *octXHQwCxSu;
    }
    T9NZYIScj [1000];
    struct   fy {
        int AR4v8Ts3;
        char BMSmxQupeUs [(710 - 684)];
        int DVaX5Nztm [(425 - 399)];
        struct   fy *octXHQwCxSu;
    }
    *AaZsiCT;
    scanf ("%d", &PaCZTL);
    AaZsiCT = &T9NZYIScj[(422 - 422)];
    for (tRaO0W7TDG = (789 - 789); PaCZTL > tRaO0W7TDG; tRaO0W7TDG = tRaO0W7TDG + 1) {
        scanf ("%d %s", &T9NZYIScj[tRaO0W7TDG].AR4v8Ts3, T9NZYIScj[tRaO0W7TDG].BMSmxQupeUs);
        for (j = (613 - 613); strlen (T9NZYIScj[tRaO0W7TDG].BMSmxQupeUs) > j; j = j + 1) {
            T9NZYIScj[tRaO0W7TDG].DVaX5Nztm[T9NZYIScj[tRaO0W7TDG].BMSmxQupeUs[j] - 'A'] = (685 - 684);
            b[T9NZYIScj[tRaO0W7TDG].BMSmxQupeUs[j] - 'A']++;
        }
        T9NZYIScj[tRaO0W7TDG].octXHQwCxSu = &T9NZYIScj[tRaO0W7TDG + 1];
    }
    for (tRaO0W7TDG = 0; 26 > tRaO0W7TDG; tRaO0W7TDG = tRaO0W7TDG + 1) {
        for (j = 0; 26 > j; j = j + 1)
            if (b[j] > b[tRaO0W7TDG])
                break;
        if (j == 26) {
            j = tRaO0W7TDG;
            break;
        }
    }
    printf ("%c\n%d\n", tRaO0W7TDG + 'A', b[j]);
    T9NZYIScj[PaCZTL -1].octXHQwCxSu = NULL;
    for (; AaZsiCT != NULL;) {
        if (AaZsiCT->DVaX5Nztm[tRaO0W7TDG] == 1)
            printf ("%d\n", AaZsiCT->AR4v8Ts3);
        AaZsiCT = AaZsiCT->octXHQwCxSu;
    }
    return 0;
}

