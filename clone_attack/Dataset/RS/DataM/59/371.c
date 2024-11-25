int main () {
    char pkrSWoqijJpI;
    int oCoxItLY, TMWyBxG, jfJULqHBS [(446 - 346)] [100], HL9gZs = (538 - 538);
    cin >> oCoxItLY;
    {
        int Tcz3i91G = (285 - 285);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (oCoxItLY > Tcz3i91G) {
            {
                int kvgZ1I = (997 - 997);
                while (kvgZ1I < oCoxItLY) {
                    cin >> pkrSWoqijJpI;
                    switch (pkrSWoqijJpI) {
                    case '.' :
                        jfJULqHBS[Tcz3i91G][kvgZ1I] = (323 - 323);
                        break;
                    case '#' :
                        jfJULqHBS[Tcz3i91G][kvgZ1I] = -(578 - 577);
                        break;
                    case '@' :
                        jfJULqHBS[Tcz3i91G][kvgZ1I] = (718 - 717);
                        break;
                    }
                    kvgZ1I++;
                };
            }
            Tcz3i91G++;
        };
    }
    cin >> TMWyBxG;
    {
        int mHtveb6 = (614 - 612);
        while (mHtveb6 <= TMWyBxG) {
            {
                int Tcz3i91G = (11 - 11);
                while (Tcz3i91G < oCoxItLY) {
                    {
                        int kvgZ1I = (840 - 840);
                        while (kvgZ1I < oCoxItLY) {
                            if (jfJULqHBS[Tcz3i91G][kvgZ1I] == mHtveb6 - (159 - 158)) {
                                if (Tcz3i91G +(732 - 731) < oCoxItLY && !jfJULqHBS[Tcz3i91G +(373 - 372)][kvgZ1I])
                                    jfJULqHBS[Tcz3i91G +(218 - 217)][kvgZ1I] = mHtveb6;
                                if (Tcz3i91G -(180 - 179) >= (388 - 388) && !jfJULqHBS[Tcz3i91G -(20 - 19)][kvgZ1I])
                                    jfJULqHBS[Tcz3i91G -(355 - 354)][kvgZ1I] = mHtveb6;
                                if (kvgZ1I + (478 - 477) < oCoxItLY && !jfJULqHBS[Tcz3i91G][kvgZ1I + (913 - 912)])
                                    jfJULqHBS[Tcz3i91G][kvgZ1I + 1] = mHtveb6;
                                if (kvgZ1I - 1 >= (88 - 88) && !jfJULqHBS[Tcz3i91G][kvgZ1I - 1])
                                    jfJULqHBS[Tcz3i91G][kvgZ1I - 1] = mHtveb6;
                            }
                            kvgZ1I++;
                        };
                    }
                    Tcz3i91G++;
                };
            }
            mHtveb6++;
        };
    }
    {
        int Tcz3i91G = 0;
        while (Tcz3i91G < oCoxItLY) {
            {
                int kvgZ1I = 0;
                while (kvgZ1I < oCoxItLY) {
                    if (jfJULqHBS[Tcz3i91G][kvgZ1I] > 0)
                        HL9gZs++;
                    kvgZ1I++;
                };
            }
            Tcz3i91G++;
        };
    }
    cout << HL9gZs;
    return 0;
}

