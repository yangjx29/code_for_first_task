int main () {
    int uyU4C1fHhD7, a, gF9YvrP, vQ7AOpCuYm9;
    double  zE0cKMXxCGvr [(441 - 341)] [(1840 - 840)], ghYPfZcEQR7 [(846 - 746)], S [(513 - 413)], UGQ0sX5W [(539 - 439)], cTt5WSFY [(458 - 358)];
    scanf ("%d", &uyU4C1fHhD7);
    for (gF9YvrP = (540 - 540); gF9YvrP < uyU4C1fHhD7; gF9YvrP++) {
        ghYPfZcEQR7[gF9YvrP] = (979 - 979);
        S[gF9YvrP] = (899 - 899);
        UGQ0sX5W[gF9YvrP] = (676 - 676);
        cTt5WSFY[gF9YvrP] = (52 - 52);
    }
    for (gF9YvrP = (408 - 408); uyU4C1fHhD7 > gF9YvrP; gF9YvrP++) {
        a = (923 - 923);
        scanf ("%d", &a);
        for (vQ7AOpCuYm9 = (87 - 87); a > vQ7AOpCuYm9; vQ7AOpCuYm9++) {
            scanf ("%lf", &zE0cKMXxCGvr[gF9YvrP][vQ7AOpCuYm9]);
            ghYPfZcEQR7[gF9YvrP] = ghYPfZcEQR7[gF9YvrP] + zE0cKMXxCGvr[gF9YvrP][vQ7AOpCuYm9];
        }
        UGQ0sX5W[gF9YvrP] = ghYPfZcEQR7[gF9YvrP] / (a * (561.0 - 560.0));
        for (vQ7AOpCuYm9 = (214 - 214); vQ7AOpCuYm9 < a; vQ7AOpCuYm9++) {
            cTt5WSFY[gF9YvrP] = cTt5WSFY[gF9YvrP] + (zE0cKMXxCGvr[gF9YvrP][vQ7AOpCuYm9] - UGQ0sX5W[gF9YvrP]) * (zE0cKMXxCGvr[gF9YvrP][vQ7AOpCuYm9] - UGQ0sX5W[gF9YvrP]);
        }
        S[gF9YvrP] = sqrt (cTt5WSFY[gF9YvrP] / (a * (212.0 - 211.0)));
    }
    for (gF9YvrP = (431 - 431); gF9YvrP < uyU4C1fHhD7; gF9YvrP++)
        printf ("%.5lf\n", S[gF9YvrP]);
    return (433 - 433);
}

