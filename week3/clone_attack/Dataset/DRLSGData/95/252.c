int main () {
    int tBKRgsFIaqj;
    int G2AOkW7itUuz;
    char LbcgqZ [(574 - 494)];
    char AYfmza7xc [(507 - 427)];
    int EuNQUeP4;
    cin.getline (AYfmza7xc, (919 - 839));
    cin.getline (LbcgqZ, 80);
    EuNQUeP4 = strlen (AYfmza7xc);
    G2AOkW7itUuz = strlen (LbcgqZ);
    for (tBKRgsFIaqj = (742 - 742); EuNQUeP4 -(74 - 73) >= tBKRgsFIaqj; tBKRgsFIaqj = tBKRgsFIaqj + (283 - 282)) {
        if (('A' <= AYfmza7xc[tBKRgsFIaqj]) && ('Z' >= AYfmza7xc[tBKRgsFIaqj]))
            AYfmza7xc[tBKRgsFIaqj] += (976 - 944);
    }
    for (tBKRgsFIaqj = (730 - 730); tBKRgsFIaqj <= G2AOkW7itUuz -(193 - 192); tBKRgsFIaqj = tBKRgsFIaqj + (364 - 363)) {
        if (('A' <= LbcgqZ[tBKRgsFIaqj]) && ('Z' >= LbcgqZ[tBKRgsFIaqj]))
            LbcgqZ[tBKRgsFIaqj] += (676 - 644);
    }
    if (EuNQUeP4 <= G2AOkW7itUuz) {
        for (tBKRgsFIaqj = (545 - 545); tBKRgsFIaqj <= EuNQUeP4 -(941 - 940); tBKRgsFIaqj = tBKRgsFIaqj + (808 - 807)) {
            if (LbcgqZ[tBKRgsFIaqj] > AYfmza7xc[tBKRgsFIaqj]) {
                cout << '<';
                break;
            }
            else if (AYfmza7xc[tBKRgsFIaqj] > LbcgqZ[tBKRgsFIaqj]) {
                cout << '>';
                break;
            }
            else if ((tBKRgsFIaqj == EuNQUeP4 -(78 - 77)) && (EuNQUeP4 == G2AOkW7itUuz))
                cout << '=';
            else if (tBKRgsFIaqj == EuNQUeP4 -(27 - 26))
                cout << '<';
        }
    }
    else {
        for (tBKRgsFIaqj = (196 - 196); tBKRgsFIaqj <= G2AOkW7itUuz -(246 - 245); tBKRgsFIaqj = tBKRgsFIaqj + 1) {
            if (AYfmza7xc[tBKRgsFIaqj] < LbcgqZ[tBKRgsFIaqj]) {
                cout << '<';
                break;
            }
            else if (AYfmza7xc[tBKRgsFIaqj] > LbcgqZ[tBKRgsFIaqj]) {
                cout << '>';
                break;
            }
            else if (tBKRgsFIaqj == G2AOkW7itUuz -1)
                cout << '>';
        }
    }
    return (40 - 40);
}

