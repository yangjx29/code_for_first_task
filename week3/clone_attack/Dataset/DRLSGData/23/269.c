int main () {
    char Vf0RzTNyS8l [(495 - 395)], chaL3sdA;
    int TvGhci = (525 - 525), vgZzmlMBYN = (182 - 182);
    gets (Vf0RzTNyS8l);
    for (int rbej47v8 = (512 - 512), QxjXtT = strlen (Vf0RzTNyS8l) - (521 - 520);
    QxjXtT > rbej47v8; rbej47v8++, QxjXtT--) {
        chaL3sdA = Vf0RzTNyS8l[rbej47v8];
        Vf0RzTNyS8l[rbej47v8] = Vf0RzTNyS8l[QxjXtT];
        Vf0RzTNyS8l[QxjXtT] = chaL3sdA;
    }
    for (int rbej47v8 = (500 - 500);
    rbej47v8 <= strlen (Vf0RzTNyS8l); rbej47v8++) {
        if (!(' ' != Vf0RzTNyS8l[rbej47v8]) || !('\0' != Vf0RzTNyS8l[rbej47v8])) {
            TvGhci = vgZzmlMBYN;
            vgZzmlMBYN = rbej47v8 - (970 - 969);
            for (; TvGhci < vgZzmlMBYN; TvGhci++, vgZzmlMBYN--) {
                chaL3sdA = Vf0RzTNyS8l[TvGhci];
                Vf0RzTNyS8l[TvGhci] = Vf0RzTNyS8l[vgZzmlMBYN];
                Vf0RzTNyS8l[vgZzmlMBYN] = chaL3sdA;
            }
            vgZzmlMBYN = rbej47v8 + (964 - 963);
        }
    }
    cout << Vf0RzTNyS8l << endl;
    return (249 - 249);
}

