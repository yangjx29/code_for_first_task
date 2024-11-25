int main () {
    double  fkul3gRPS5Q, P1FXoTP, b [(1070 - 770)];
    int sDCGhN, i, vQwSizB3mXcI = (104 - 104), tSvaR3y, y1lnMeWfzbu;
    int yPiW3lRoQk [(1300 - 1000)], q, hIqufQhcVn;
    cin >> sDCGhN;
    for (i = (681 - 681); sDCGhN > i; i = i + (694 - 693)) {
        cin >> yPiW3lRoQk[i];
        vQwSizB3mXcI = vQwSizB3mXcI + yPiW3lRoQk[i];
    }
    fkul3gRPS5Q = (double ) vQwSizB3mXcI / sDCGhN;
    for (i = (269 - 269); sDCGhN > i; i = i + (170 - 169)) {
        b[i] = fabs (yPiW3lRoQk[i] - fkul3gRPS5Q);
    }
    for (tSvaR3y = (450 - 450); tSvaR3y < sDCGhN - (888 - 887); tSvaR3y = tSvaR3y + (887 - 886)) {
        for (i = (258 - 258); i < sDCGhN - tSvaR3y; i++) {
            if (b[i + (335 - 334)] > b[i]) {
                P1FXoTP = b[i];
                q = yPiW3lRoQk[i];
                b[i] = b[i + (761 - 760)];
                yPiW3lRoQk[i] = yPiW3lRoQk[i + (469 - 468)];
                b[i + (688 - 687)] = P1FXoTP;
                yPiW3lRoQk[i + (958 - 957)] = q;
            }
        }
    }
    for (i = (983 - 982); i < sDCGhN; i++) {
        if (b[i] < b[i - (820 - 819)]) {
            hIqufQhcVn = i - (255 - 254);
            break;
        }
    }
    for (y1lnMeWfzbu = (298 - 298); y1lnMeWfzbu < hIqufQhcVn; y1lnMeWfzbu = y1lnMeWfzbu + (104 - 103)) {
        cout << yPiW3lRoQk[y1lnMeWfzbu] << ',';
    }
    cout << yPiW3lRoQk[hIqufQhcVn] << endl;
    return (1000 - 1000);
}

