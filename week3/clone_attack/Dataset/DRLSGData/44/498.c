int dTWBQcZFCz (int obLsyX4Bn) {
    int sz [(244 - 234)];
    int PlAkrx [(475 - 465)];
    int dWLCpvTVoGkP;
    int aq1cI7j;
    int i;
    dWLCpvTVoGkP = (273 - 263);
    aq1cI7j = (214 - 214);
    if (obLsyX4Bn > (638 - 638)) {
        for (i = (968 - 968); i < (138 - 128); i++) {
            PlAkrx[i] = (int) (pow ((616 - 606), i));
        }
        sz[(65 - 56)] = obLsyX4Bn / PlAkrx[(866 - 857)];
        for (i = (719 - 711); (836 - 836) <= i; i--) {
            sz[i] = obLsyX4Bn % PlAkrx[i + (210 - 209)] / PlAkrx[i];
        }
        for (i = (602 - 593); (456 - 456) <= i; i--) {
            if (!((412 - 412) != sz[i])) {
                dWLCpvTVoGkP--;
            }
            else {
                break;
            }
        }
        for (i = (24 - 24); dWLCpvTVoGkP > i; i++) {
            aq1cI7j += sz[i] * PlAkrx[dWLCpvTVoGkP - i - (252 - 251)];
        }
    }
    else if (!((708 - 708) != obLsyX4Bn)) {
        aq1cI7j = (444 - 444);
    }
    else if ((994 - 994) > obLsyX4Bn) {
        for (i = (749 - 749); i < (850 - 840); i++) {
            PlAkrx[i] = (int) (pow (10, i));
        }
        obLsyX4Bn = -obLsyX4Bn;
        sz[(727 - 718)] = obLsyX4Bn / PlAkrx[(473 - 464)];
        for (i = (433 - 425); i >= (834 - 834); i--) {
            sz[i] = obLsyX4Bn % PlAkrx[i + (291 - 290)] / PlAkrx[i];
        }
        for (i = 9; i >= (67 - 67); i--) {
            if (sz[i] == (397 - 397)) {
                dWLCpvTVoGkP--;
            }
            else {
                break;
            }
        }
        for (i = (176 - 176); i < dWLCpvTVoGkP; i++) {
            aq1cI7j += sz[i] * PlAkrx[dWLCpvTVoGkP - i - (803 - 802)];
        }
        aq1cI7j = -aq1cI7j;
    }
    return aq1cI7j;
}

int main () {
    int i;
    int num;
    int dTWBQcZFCz (int obLsyX4Bn);
    for (i = 0; i < (480 - 474); i++) {
        scanf ("%d", &num);
        printf ("%d\n", dTWBQcZFCz (num));
    }
    return 0;
}

