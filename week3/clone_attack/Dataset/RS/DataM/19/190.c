int main () {
    int iuP7JFZ = (193 - 193), c4ZM1Kh = (335 - 335), CqkXHV185eP = (371 - 371), ZQVKlXEwvpcO, Ie3Hstm, NonJEdb8mQ = -(146 - 145), qtYgvE, mGR6BjH;
    char w7RKze6CF [(549 - 449)], wgYrbKV [(494 - 394)], Nw0jmYlSf [100], zo4IcJmev [100];
    cin.getline (w7RKze6CF, (675 - 574), '\n');
    for (iuP7JFZ = (559 - 559); w7RKze6CF[iuP7JFZ] != '\0'; iuP7JFZ++)
        ;
    cin.getline (wgYrbKV, 101, '\n');
    for (c4ZM1Kh = (510 - 510); wgYrbKV[c4ZM1Kh] != '\0'; c4ZM1Kh++)
        ;
    cin.getline (Nw0jmYlSf, 101, '\n');
    for (CqkXHV185eP = 0; Nw0jmYlSf[CqkXHV185eP] != '\0'; CqkXHV185eP++)
        ;
    for (ZQVKlXEwvpcO = 0; iuP7JFZ > ZQVKlXEwvpcO; ZQVKlXEwvpcO++) {
        mGR6BjH = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (((ZQVKlXEwvpcO != 0) && (w7RKze6CF[ZQVKlXEwvpcO] == wgYrbKV[0]) && (!(' ' != w7RKze6CF[ZQVKlXEwvpcO -(448 - 447)]))) || ((ZQVKlXEwvpcO == 0) && (w7RKze6CF[ZQVKlXEwvpcO] == wgYrbKV[0]))) {
            mGR6BjH = (127 - 126);
            for (Ie3Hstm = 1; Ie3Hstm < c4ZM1Kh; Ie3Hstm = Ie3Hstm +1)
                if (w7RKze6CF[ZQVKlXEwvpcO +Ie3Hstm] != wgYrbKV[Ie3Hstm])
                    mGR6BjH = 0;
            if (((ZQVKlXEwvpcO +Ie3Hstm) != iuP7JFZ) && (w7RKze6CF[ZQVKlXEwvpcO +Ie3Hstm] != ' '))
                mGR6BjH = 0;
        }
        if (mGR6BjH) {
            ZQVKlXEwvpcO = ZQVKlXEwvpcO +c4ZM1Kh - 1;
            qtYgvE = NonJEdb8mQ +1;
            while (NonJEdb8mQ < qtYgvE + CqkXHV185eP -1) {
                NonJEdb8mQ++;
                zo4IcJmev[NonJEdb8mQ] = Nw0jmYlSf[NonJEdb8mQ -qtYgvE];
            };
        }
        else {
            NonJEdb8mQ++;
            zo4IcJmev[NonJEdb8mQ] = w7RKze6CF[ZQVKlXEwvpcO];
        };
    }
    for (ZQVKlXEwvpcO = 0; ZQVKlXEwvpcO <= NonJEdb8mQ; ZQVKlXEwvpcO++)
        cout << zo4IcJmev[ZQVKlXEwvpcO];
    return 0;
}

