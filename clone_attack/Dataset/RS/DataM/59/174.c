int main () {
    int RxVrOiDQL;
    int Mp7zHM6i;
    int yFSEsw;
    int FFeDRL6;
    int x41yhlitKEa;
    int fZjzGaUSM;
    RxVrOiDQL = (200 - 200);
    int room [(202 - 102)] [(503 - 403)];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%d", &Mp7zHM6i);
    for (FFeDRL6 = (580 - 580); Mp7zHM6i > FFeDRL6; FFeDRL6 = FFeDRL6 +1) {
        scanf ("\n");
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (x41yhlitKEa = (888 - 888); Mp7zHM6i > x41yhlitKEa; x41yhlitKEa = x41yhlitKEa + 1) {
            char sdHiWrLE;
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
            scanf ("%c", &sdHiWrLE);
            switch (sdHiWrLE) {
            case '.' :
                room[FFeDRL6][x41yhlitKEa] = (340 - 340);
                break;
            case '#' :
                room[FFeDRL6][x41yhlitKEa] = -(43 - 42);
                break;
            case '@' :
                room[FFeDRL6][x41yhlitKEa] = (674 - 673);
                break;
            };
        };
    }
    scanf ("%d", &yFSEsw);
    for (fZjzGaUSM = 2; fZjzGaUSM <= yFSEsw; fZjzGaUSM = fZjzGaUSM + 1) {
        for (FFeDRL6 = (790 - 790); FFeDRL6 < Mp7zHM6i; FFeDRL6 = FFeDRL6 +1) {
            for (x41yhlitKEa = (306 - 306); x41yhlitKEa < Mp7zHM6i; x41yhlitKEa = x41yhlitKEa + 1) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                if (room[FFeDRL6][x41yhlitKEa] > (101 - 101) && room[FFeDRL6][x41yhlitKEa] < fZjzGaUSM) {
                    if (FFeDRL6 > (670 - 670) && room[FFeDRL6 -(878 - 877)][x41yhlitKEa] == (559 - 559))
                        room[FFeDRL6 -(529 - 528)][x41yhlitKEa] = fZjzGaUSM;
                    if ((391 - 391) < x41yhlitKEa && !((518 - 518) != room[FFeDRL6][x41yhlitKEa - (629 - 628)]))
                        room[FFeDRL6][x41yhlitKEa - (920 - 919)] = fZjzGaUSM;
                    if (x41yhlitKEa < Mp7zHM6i &&room[FFeDRL6][x41yhlitKEa + (447 - 446)] == 0)
                        room[FFeDRL6][x41yhlitKEa + (92 - 91)] = fZjzGaUSM;
                    if (FFeDRL6 < Mp7zHM6i &&room[FFeDRL6 +(349 - 348)][x41yhlitKEa] == 0)
                        room[FFeDRL6 +1][x41yhlitKEa] = fZjzGaUSM;
                };
            };
        };
    }
    for (FFeDRL6 = 0; FFeDRL6 < Mp7zHM6i; FFeDRL6++) {
        x41yhlitKEa = 0;
        while (x41yhlitKEa < Mp7zHM6i) {
            if (room[FFeDRL6][x41yhlitKEa] > 0)
                RxVrOiDQL = RxVrOiDQL +1;
            x41yhlitKEa = x41yhlitKEa + 1;
        };
    }
    printf ("%d", RxVrOiDQL);
    return 0;
}

