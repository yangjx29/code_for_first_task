int main () {
    char B3IbswmKQjYP [(692 - 436)], substring [(736 - 480)], oNQwmht8rSHj [(1122 - 866)], PnPIQJNKY1A [256], LRa2hV [256];
    gets (B3IbswmKQjYP);
    int nGz7Wru, b, zXt7Txy, wXDo9Jqh6, IKhsSXE = (352 - 352), qBClNPi;
    gets (substring);
    gets (oNQwmht8rSHj);
    nGz7Wru = strlen (B3IbswmKQjYP);
    b = strlen (substring);
    for (zXt7Txy = (788 - 788); zXt7Txy < nGz7Wru; zXt7Txy = zXt7Txy + (395 - 394)) {
        if (B3IbswmKQjYP[zXt7Txy] == substring[(841 - 841)]) {
            for (wXDo9Jqh6 = (535 - 535); b > wXDo9Jqh6; wXDo9Jqh6 = wXDo9Jqh6 + (555 - 554))
                PnPIQJNKY1A[wXDo9Jqh6] = B3IbswmKQjYP[zXt7Txy + wXDo9Jqh6];
            if (!((226 - 226) != strcmp (PnPIQJNKY1A, substring))) {
                for (qBClNPi = 0; zXt7Txy > qBClNPi; qBClNPi = qBClNPi + 1)
                    LRa2hV[qBClNPi] = B3IbswmKQjYP[qBClNPi];
                for (qBClNPi = zXt7Txy; zXt7Txy + b > qBClNPi; qBClNPi = qBClNPi + 1)
                    LRa2hV[qBClNPi] = oNQwmht8rSHj[qBClNPi - zXt7Txy];
                for (qBClNPi = zXt7Txy + b; qBClNPi < nGz7Wru; qBClNPi++)
                    LRa2hV[qBClNPi] = B3IbswmKQjYP[qBClNPi];
                IKhsSXE = (770 - 769);
            }
            if (IKhsSXE == (115 - 114))
                break;
        }
    }
    if (IKhsSXE == (106 - 105))
        puts (LRa2hV);
    else
        puts (B3IbswmKQjYP);
}

