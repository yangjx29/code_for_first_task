main () {
    char sH06Xfcpb7 [(155 - 75)];
    int S53QXtDfKFy;
    char ZMWNCwu [(178 - 98)];
    int i;
    gets (sH06Xfcpb7);
    gets (ZMWNCwu);
    S53QXtDfKFy = (357 - 357);
    for (i = (751 - 751); i < 80; i++) {
        if ((sH06Xfcpb7[i] <= 'Z') && (sH06Xfcpb7[i] >= 'A'))
            sH06Xfcpb7[i] = sH06Xfcpb7[i] - 'A' + 'a';
        if ((ZMWNCwu[i] <= 'Z') && (ZMWNCwu[i] >= 'A'))
            ZMWNCwu[i] = ZMWNCwu[i] - 'A' + 'a';
    }
    for (i = 0;;) {
        if ((sH06Xfcpb7[i] == ZMWNCwu[i]) && (sH06Xfcpb7[i] != '\0'))
            i++;
        else if ((sH06Xfcpb7[i] == '\0') && (ZMWNCwu[i] == '\0'))
            break;
        else {
            S53QXtDfKFy = sH06Xfcpb7[i] - ZMWNCwu[i];
            break;
        }
    }
    if (S53QXtDfKFy > 0)
        ;
    else {
        if (S53QXtDfKFy == 0)
            ;
        else
            ;
    }
    return 0;
}

