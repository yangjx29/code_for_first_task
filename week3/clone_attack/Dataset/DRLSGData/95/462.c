int main () {
    int ZeCoNsxjTHzA;
    char tEvGhZ6Toi [81] = {0};
    gets (tEvGhZ6Toi);
    char ms0w72lxMT [81] = {0};
    gets (ms0w72lxMT);
    for (ZeCoNsxjTHzA = 0; strlen (tEvGhZ6Toi) > ZeCoNsxjTHzA; ZeCoNsxjTHzA = ZeCoNsxjTHzA +1) {
        if (tEvGhZ6Toi[ZeCoNsxjTHzA] >= 97 && tEvGhZ6Toi[ZeCoNsxjTHzA] <= 122) {
            tEvGhZ6Toi[ZeCoNsxjTHzA] = tEvGhZ6Toi[ZeCoNsxjTHzA] - 32;
        }
    }
    for (ZeCoNsxjTHzA = 0; strlen (ms0w72lxMT) > ZeCoNsxjTHzA; ZeCoNsxjTHzA = ZeCoNsxjTHzA +1) {
        if (ms0w72lxMT[ZeCoNsxjTHzA] >= 97 && ms0w72lxMT[ZeCoNsxjTHzA] <= 122) {
            ms0w72lxMT[ZeCoNsxjTHzA] = ms0w72lxMT[ZeCoNsxjTHzA] - 32;
        }
    }
    if (strcmp (tEvGhZ6Toi, ms0w72lxMT) == 0)
        ;
    else {
        if (strcmp (tEvGhZ6Toi, ms0w72lxMT) > 0)
            ;
        else
            ;
    }
    return 0;
}

