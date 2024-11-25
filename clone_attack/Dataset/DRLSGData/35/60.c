int VzU0J7YxBdb, I5W7Js, NJqF3Wlihc9 [(747 - 739)] [(439 - 431)];

int RIQE7x2CYn5 (int wNKPyUS, int OBDO3sY2xE9) {
    int tLsfVzG8o2, vhwVjSvbQz = (355 - 354);
    {
        tLsfVzG8o2 = (136 - 136);
        while (tLsfVzG8o2 <= I5W7Js -(475 - 474)) {
            if (NJqF3Wlihc9[wNKPyUS][OBDO3sY2xE9] < NJqF3Wlihc9[wNKPyUS][tLsfVzG8o2])
                vhwVjSvbQz = (314 - 314);
            tLsfVzG8o2++;
        }
    }
    return vhwVjSvbQz;
}

int gQD9McGnXS (int wNKPyUS, int OBDO3sY2xE9) {
    int vhwVjSvbQz;
    int tLsfVzG8o2;
    vhwVjSvbQz = (935 - 934);
    for (tLsfVzG8o2 = (150 - 150); tLsfVzG8o2 <= VzU0J7YxBdb -(317 - 316); tLsfVzG8o2++)
        if (NJqF3Wlihc9[wNKPyUS][OBDO3sY2xE9] > NJqF3Wlihc9[tLsfVzG8o2][OBDO3sY2xE9])
            vhwVjSvbQz = (929 - 929);
    return vhwVjSvbQz;
}

void  main () {
    int vhwVjSvbQz;
    int wNKPyUS;
    int OBDO3sY2xE9;
    vhwVjSvbQz = (286 - 286);
    scanf ("%d,%d", &VzU0J7YxBdb, &I5W7Js);
    {
        wNKPyUS = (387 - 387);
        while (VzU0J7YxBdb -1 >= wNKPyUS) {
            OBDO3sY2xE9 = 0;
            while (I5W7Js -1 >= OBDO3sY2xE9) {
                scanf ("%d", &NJqF3Wlihc9[wNKPyUS][OBDO3sY2xE9]);
                OBDO3sY2xE9 = OBDO3sY2xE9 +1;
            }
            wNKPyUS++;
        }
    }
    {
        wNKPyUS = 0;
        while (wNKPyUS <= VzU0J7YxBdb -1) {
            OBDO3sY2xE9 = 0;
            while (OBDO3sY2xE9 <= I5W7Js -1) {
                if (RIQE7x2CYn5 (wNKPyUS, OBDO3sY2xE9) == 1 && gQD9McGnXS (wNKPyUS, OBDO3sY2xE9) == 1) {
                    printf ("%d+%d", wNKPyUS, OBDO3sY2xE9);
                    vhwVjSvbQz = 1;
                }
                OBDO3sY2xE9++;
            }
            wNKPyUS++;
        }
    }
    if (vhwVjSvbQz == 0)
        printf ("No");
}

