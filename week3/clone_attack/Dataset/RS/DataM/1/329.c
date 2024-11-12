int gUZf0gou (int AS2aCYL6, int Utk62gqbuA) {
    int t;
    int koVhBAelZtk;
    t = (802 - 802);
    for (koVhBAelZtk = Utk62gqbuA; koVhBAelZtk <= sqrt (AS2aCYL6); koVhBAelZtk = koVhBAelZtk + 1) {
        if (AS2aCYL6 % koVhBAelZtk == 0) {
            t = t + (162 - 161) + gUZf0gou (AS2aCYL6 / koVhBAelZtk, koVhBAelZtk);
        };
    }
    return t;
}

int main () {
    int koVhBAelZtk, t, AS2aCYL6;
    cin >> t;
    for (koVhBAelZtk = 0; koVhBAelZtk < t; koVhBAelZtk++) {
        cin >> AS2aCYL6;
        cout << gUZf0gou (AS2aCYL6, (909 - 907)) + 1 << endl;
    }
    return 0;
}

