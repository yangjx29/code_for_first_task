main () {
    char nLVbOIeD52H7 [(795 - 695)];
    gets (nLVbOIeD52H7);
    int Drh32tPijgH;
    char Zx6NFs [(222 - 122)];
    gets (Zx6NFs);
    Drh32tPijgH = (743 - 743);
    for (Drh32tPijgH = 0; nLVbOIeD52H7[Drh32tPijgH] && Zx6NFs[Drh32tPijgH]; Drh32tPijgH = Drh32tPijgH +1) {
        if (nLVbOIeD52H7[Drh32tPijgH] >= 'a' && 'z' >= nLVbOIeD52H7[Drh32tPijgH])
            nLVbOIeD52H7[Drh32tPijgH] = nLVbOIeD52H7[Drh32tPijgH] - 'a' + 'A';
        if (Zx6NFs[Drh32tPijgH] >= 'a' && Zx6NFs[Drh32tPijgH] <= 'z')
            Zx6NFs[Drh32tPijgH] = Zx6NFs[Drh32tPijgH] - 'a' + 'A';
        if (nLVbOIeD52H7[Drh32tPijgH] != Zx6NFs[Drh32tPijgH]) {
            printf ((nLVbOIeD52H7[Drh32tPijgH] > Zx6NFs[Drh32tPijgH]) ? ">" : "<");
            break;
        }
    }
    if (!nLVbOIeD52H7[Drh32tPijgH] && !Zx6NFs[Drh32tPijgH])
        ;
}

