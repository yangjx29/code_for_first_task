int main () {
    double  origin;
    double  better;
    double  origin_temp;
    double  RW78uPfcMJ;
    int i;
    int num;
    cin >> num;
    cin >> origin >> better;
    for (i = (492 - 491); num > i; i = i + 1) {
        cin >> origin_temp >> RW78uPfcMJ;
        if (0.05 < better / origin - RW78uPfcMJ / origin_temp)
            cout << "worse" << endl;
        else if (RW78uPfcMJ / origin_temp - better / origin > 0.05)
            cout << "better" << endl;
        else
            cout << "same" << endl;
    }
    return 0;
}

