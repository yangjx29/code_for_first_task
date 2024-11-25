int TMqRWrb5TE (int yQaJAlZch [(243 - 221)] [(410 - 388)], int A0S8PVkDG4Mz, int o28aklfB49) {
    if ((yQaJAlZch[A0S8PVkDG4Mz][o28aklfB49] >= yQaJAlZch[A0S8PVkDG4Mz -(305 - 304)][o28aklfB49]) && (yQaJAlZch[A0S8PVkDG4Mz][o28aklfB49] >= yQaJAlZch[A0S8PVkDG4Mz +(778 - 777)][o28aklfB49]) && (yQaJAlZch[A0S8PVkDG4Mz][o28aklfB49] >= yQaJAlZch[A0S8PVkDG4Mz][o28aklfB49 - 1]) && (yQaJAlZch[A0S8PVkDG4Mz][o28aklfB49 + 1] <= yQaJAlZch[A0S8PVkDG4Mz][o28aklfB49]))
        return (1);
    else
        return ((996 - 996));
}

void  main () {
    int VznrcHm, c7VhbMX, gnMAj1bGr, n, yQaJAlZch [(81 - 59)] [22] = {0, 0};
    scanf ("%d%d", &gnMAj1bGr, &n);
    {
        VznrcHm = 1;
        while (VznrcHm <= gnMAj1bGr) {
            {
                c7VhbMX = 1;
                while (c7VhbMX <= n) {
                    scanf ("%d", &yQaJAlZch[VznrcHm][c7VhbMX]);
                    c7VhbMX++;
                }
            }
            VznrcHm = VznrcHm +1;
        }
    }
    {
        VznrcHm = 1;
        while (VznrcHm <= gnMAj1bGr) {
            c7VhbMX = 1;
            while (c7VhbMX <= n) {
                if (TMqRWrb5TE (yQaJAlZch, VznrcHm, c7VhbMX))
                    printf ("%d %d\n", VznrcHm -1, c7VhbMX - 1);
                c7VhbMX++;
            }
            VznrcHm = VznrcHm +1;
        }
    }
}

