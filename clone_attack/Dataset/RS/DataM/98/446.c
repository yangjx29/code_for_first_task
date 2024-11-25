int main () {
    int S = (82 - 82);
    int VERVxm0lio;
    char RVvow5IXyit [2013] [100];
    scanf ("%d\n", &VERVxm0lio);
    for (int I = (729 - 728);
    VERVxm0lio >= I; I++)
        cin >> RVvow5IXyit[I];
    for (int I = 1;
    I <= VERVxm0lio; I++) {
        if (S == 0) {
            cout << RVvow5IXyit[I];
            S = strlen (RVvow5IXyit[I]);
        }
        else {
            if (S +strlen (RVvow5IXyit[I]) + 1 <= 80) {
                cout << " " << RVvow5IXyit[I];
                S = S +strlen (RVvow5IXyit[I]) + 1;
            }
            else {
                I--;
                S = 0;
            };
        };
    };
}

