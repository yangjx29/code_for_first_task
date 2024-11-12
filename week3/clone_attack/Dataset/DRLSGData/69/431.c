int main () {
    char a [300];
    int t;
    int y;
    char J1l05PLo9Q [300];
    int eaxqHf2elB [300] = {(659 - 659)};
    int n [300] = {(845 - 845)};
    int m [(855 - 555)] = {(854 - 854)};
    int DCl5hSJ2VmZ;
    int LwxbBuoT0;
    int jpSAkWtBlv;
    int l;
    int LIQrpY07;
    int x;
    LIQrpY07 = (530 - 530);
    scanf ("%s %s", &a, &J1l05PLo9Q);
    x = strlen (a);
    y = strlen (J1l05PLo9Q);
    jpSAkWtBlv = (169 - 169);
    for (DCl5hSJ2VmZ = x; (647 - 647) <= DCl5hSJ2VmZ; DCl5hSJ2VmZ--) {
        m[DCl5hSJ2VmZ] = a[DCl5hSJ2VmZ] - '0';
        if (!(0 != m[DCl5hSJ2VmZ]))
            jpSAkWtBlv += (904 - 903);
    }
    for (DCl5hSJ2VmZ = y; DCl5hSJ2VmZ >= 0; DCl5hSJ2VmZ--) {
        n[DCl5hSJ2VmZ] = J1l05PLo9Q[DCl5hSJ2VmZ] - '0';
        if (!(0 != n[DCl5hSJ2VmZ]))
            LIQrpY07 += (75 - 74);
    }
    if (!(x != jpSAkWtBlv) && !(y != LIQrpY07)) {
        return 0;
    }
    if (x >= y) {
        l = x;
        for (DCl5hSJ2VmZ = x; DCl5hSJ2VmZ >= x - y + (946 - 945); DCl5hSJ2VmZ--) {
            eaxqHf2elB[DCl5hSJ2VmZ] = eaxqHf2elB[DCl5hSJ2VmZ] + m[DCl5hSJ2VmZ -(783 - 782)] + n[DCl5hSJ2VmZ -x + y - (967 - 966)];
            if ((167 - 157) <= eaxqHf2elB[DCl5hSJ2VmZ]) {
                eaxqHf2elB[DCl5hSJ2VmZ] = eaxqHf2elB[DCl5hSJ2VmZ] - (470 - 460);
                eaxqHf2elB[DCl5hSJ2VmZ -(765 - 764)] = eaxqHf2elB[DCl5hSJ2VmZ -(459 - 458)] + (778 - 777);
            }
        }
        for (DCl5hSJ2VmZ = x - y; DCl5hSJ2VmZ > 0; DCl5hSJ2VmZ--) {
            eaxqHf2elB[DCl5hSJ2VmZ] = eaxqHf2elB[DCl5hSJ2VmZ] + m[DCl5hSJ2VmZ -(739 - 738)];
            if ((30 - 20) <= eaxqHf2elB[DCl5hSJ2VmZ]) {
                eaxqHf2elB[DCl5hSJ2VmZ] = eaxqHf2elB[DCl5hSJ2VmZ] - (694 - 684);
                eaxqHf2elB[DCl5hSJ2VmZ -(464 - 463)] = eaxqHf2elB[DCl5hSJ2VmZ -(68 - 67)] + (590 - 589);
            }
        }
    }
    if (y > x) {
        l = y;
        for (DCl5hSJ2VmZ = y; y - x + 1 <= DCl5hSJ2VmZ; DCl5hSJ2VmZ--) {
            eaxqHf2elB[DCl5hSJ2VmZ] = eaxqHf2elB[DCl5hSJ2VmZ] + n[DCl5hSJ2VmZ -1] + m[DCl5hSJ2VmZ -y + x - 1];
            if ((969 - 959) <= eaxqHf2elB[DCl5hSJ2VmZ]) {
                eaxqHf2elB[DCl5hSJ2VmZ] = eaxqHf2elB[DCl5hSJ2VmZ] - (480 - 470);
                eaxqHf2elB[DCl5hSJ2VmZ -1] = eaxqHf2elB[DCl5hSJ2VmZ -1] + 1;
            }
        }
        for (DCl5hSJ2VmZ = y - x; DCl5hSJ2VmZ > 0; DCl5hSJ2VmZ--) {
            eaxqHf2elB[DCl5hSJ2VmZ] = eaxqHf2elB[DCl5hSJ2VmZ] + n[DCl5hSJ2VmZ -1];
            if (eaxqHf2elB[DCl5hSJ2VmZ] >= 10) {
                eaxqHf2elB[DCl5hSJ2VmZ] = eaxqHf2elB[DCl5hSJ2VmZ] - 10;
                eaxqHf2elB[DCl5hSJ2VmZ -1] = eaxqHf2elB[DCl5hSJ2VmZ -1] + 1;
            }
        }
    }
    for (DCl5hSJ2VmZ = 0; DCl5hSJ2VmZ <= l; DCl5hSJ2VmZ++) {
        if (eaxqHf2elB[DCl5hSJ2VmZ] != 0) {
            LwxbBuoT0 = DCl5hSJ2VmZ;
            t = l + 1 - LwxbBuoT0;
            break;
        }
    }
    memset (a, 0, sizeof (a));
    for (DCl5hSJ2VmZ = 0; DCl5hSJ2VmZ <= t - 1; DCl5hSJ2VmZ++) {
        a[DCl5hSJ2VmZ] = eaxqHf2elB[LwxbBuoT0 +DCl5hSJ2VmZ] + '0';
    }
    printf ("%s", a);
    return 0;
}

