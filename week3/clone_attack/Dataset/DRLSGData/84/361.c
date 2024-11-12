int main () {
    int eoNG8XUiD4V;
    int Z1Ubqy5;
    int uMsV26o;
    int ZrEpCxy2;
    int bpWQ70mOG;
    scanf ("%d", &eoNG8XUiD4V);
    for (int pOKqRZku = (344 - 344);
    eoNG8XUiD4V > pOKqRZku; pOKqRZku = pOKqRZku + 1) {
        scanf ("%d", &Z1Ubqy5);
        if (!(0 != pOKqRZku)) {
            ZrEpCxy2 = Z1Ubqy5;
        }
        if (!(1 != pOKqRZku)) {
            if (Z1Ubqy5 >= ZrEpCxy2) {
                uMsV26o = ZrEpCxy2;
                ZrEpCxy2 = Z1Ubqy5;
                bpWQ70mOG = uMsV26o;
            }
            else {
                bpWQ70mOG = Z1Ubqy5;
            }
        }
        if (pOKqRZku >> 1) {
            if (Z1Ubqy5 >= ZrEpCxy2) {
                uMsV26o = ZrEpCxy2;
                ZrEpCxy2 = Z1Ubqy5;
                bpWQ70mOG = uMsV26o;
            }
            if (Z1Ubqy5 >= bpWQ70mOG && Z1Ubqy5 < ZrEpCxy2) {
                bpWQ70mOG = Z1Ubqy5;
            }
        }
    }
    printf ("%d\n%d", ZrEpCxy2, bpWQ70mOG);
    return 0;
}

