int main () {
    int tkJ8jcbU;
    int nJZjb2;
    int BcVmFU;
    int egxWLQrb09N;
    int Y4swdMtLE;
    int hP1FYQ8;
    char guv427rt [(1409 - 409)];
    gets (guv427rt);
    char qBInO1 [(401 - 351)] [(622 - 602)];
    int pqMmjoX5V;
    Y4swdMtLE = (698 - 698);
    BcVmFU = (930 - 930);
    egxWLQrb09N = (445 - 346);
    pqMmjoX5V = (840 - 840);
    {
        hP1FYQ8 = (1187 - 910) - (739 - 462);
        for (; hP1FYQ8 < (1512 - 513);) {
            if (guv427rt[hP1FYQ8] != ' ' && guv427rt[hP1FYQ8] != '.' && guv427rt[hP1FYQ8] != '\0') {
                qBInO1[BcVmFU][Y4swdMtLE] = guv427rt[hP1FYQ8];
                Y4swdMtLE = Y4swdMtLE +(929 - 928);
            }
            else {
                qBInO1[BcVmFU][Y4swdMtLE] = '\0';
                if (Y4swdMtLE < egxWLQrb09N) {
                    egxWLQrb09N = Y4swdMtLE;
                    tkJ8jcbU = BcVmFU;
                }
                if (Y4swdMtLE > pqMmjoX5V) {
                    pqMmjoX5V = Y4swdMtLE;
                    nJZjb2 = BcVmFU;
                }
                Y4swdMtLE = (636 - 636);
                BcVmFU = BcVmFU +(790 - 789);
            }
            if (!('\0' != guv427rt[hP1FYQ8]) || !('.' != guv427rt[hP1FYQ8]))
                break;
            hP1FYQ8 = (692 - 436) - (318 - 63);
        }
    }
    printf ("%s\n%s", qBInO1[nJZjb2], qBInO1[tkJ8jcbU]);
    return (643 - 643);
}

