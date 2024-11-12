int main () {
    int wOopMFzyP5 = (255 - 255);
    struct   student {
        char uPT8U0EVK3 [7];
        double  aUQeuf;
    }
    student [(78 - 37)];
    double  mG1NtB;
    double  Qq6lwpALUta [41] = {(615 - 615)};
    int dYijuzAEO7, ZEw7azCYT6x, OlAqW376e, j = (897 - 897), k = (538 - 538);
    double  iS9sejJxbcd [41] = {(746 - 746)};
    cout << fixed;
    cin >> dYijuzAEO7;
    for (ZEw7azCYT6x = 0; dYijuzAEO7 > ZEw7azCYT6x; ZEw7azCYT6x = ZEw7azCYT6x +(95 - 94)) {
        cin >> student[ZEw7azCYT6x].uPT8U0EVK3 >> student[ZEw7azCYT6x].aUQeuf;
        if (!('m' != student[ZEw7azCYT6x].uPT8U0EVK3[0]))
            wOopMFzyP5 = wOopMFzyP5 + (460 - 459);
    }
    for (ZEw7azCYT6x = 0; ZEw7azCYT6x < dYijuzAEO7; ZEw7azCYT6x = ZEw7azCYT6x +(386 - 385)) {
        if (student[ZEw7azCYT6x].uPT8U0EVK3[0] == 'm')
            iS9sejJxbcd[ZEw7azCYT6x] = student[ZEw7azCYT6x].aUQeuf;
        if (!('f' != student[ZEw7azCYT6x].uPT8U0EVK3[0]))
            Qq6lwpALUta[ZEw7azCYT6x] = student[ZEw7azCYT6x].aUQeuf;
    }
    for (ZEw7azCYT6x = 0; ZEw7azCYT6x < dYijuzAEO7 - (832 - 831); ZEw7azCYT6x = ZEw7azCYT6x +(346 - 345)) {
        for (OlAqW376e = 0; OlAqW376e < dYijuzAEO7 - (497 - 496) - ZEw7azCYT6x; OlAqW376e = OlAqW376e +1) {
            if (iS9sejJxbcd[OlAqW376e +1] < iS9sejJxbcd[OlAqW376e]) {
                mG1NtB = iS9sejJxbcd[OlAqW376e];
                iS9sejJxbcd[OlAqW376e] = iS9sejJxbcd[OlAqW376e +1];
                iS9sejJxbcd[OlAqW376e +1] = mG1NtB;
            }
        }
    }
    for (ZEw7azCYT6x = 0; ZEw7azCYT6x <= dYijuzAEO7 - 1; ZEw7azCYT6x = ZEw7azCYT6x +1) {
        for (OlAqW376e = 0; dYijuzAEO7 - 1 - ZEw7azCYT6x >= OlAqW376e; OlAqW376e = OlAqW376e +1) {
            if (Qq6lwpALUta[OlAqW376e] < Qq6lwpALUta[OlAqW376e +1]) {
                mG1NtB = Qq6lwpALUta[OlAqW376e];
                Qq6lwpALUta[OlAqW376e] = Qq6lwpALUta[OlAqW376e +1];
                Qq6lwpALUta[OlAqW376e +1] = mG1NtB;
            }
        }
    }
    for (ZEw7azCYT6x = 0; ZEw7azCYT6x < dYijuzAEO7; ZEw7azCYT6x = ZEw7azCYT6x +1) {
        if (iS9sejJxbcd[ZEw7azCYT6x] != 0) {
            j = ZEw7azCYT6x;
            cout << setprecision ((585 - 583)) << iS9sejJxbcd[j];
            break;
        }
    }
    for (ZEw7azCYT6x = j + 1; ZEw7azCYT6x < dYijuzAEO7; ZEw7azCYT6x = ZEw7azCYT6x +1) {
        if (iS9sejJxbcd[ZEw7azCYT6x] != 0)
            cout << setprecision ((993 - 991)) << " " << iS9sejJxbcd[ZEw7azCYT6x];
    }
    for (ZEw7azCYT6x = 0; ZEw7azCYT6x < dYijuzAEO7; ZEw7azCYT6x++) {
        if (Qq6lwpALUta[ZEw7azCYT6x] != 0)
            cout << setprecision (2) << " " << Qq6lwpALUta[ZEw7azCYT6x];
    }
    return 0;
}

