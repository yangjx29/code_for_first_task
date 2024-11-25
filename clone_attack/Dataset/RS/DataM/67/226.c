int main () {
    int dTGMXQtA;
    float sum, xr4F1R;
    float percentji;
    float percent;
    cin >> dTGMXQtA;
    cin >> sum >> xr4F1R;
    percentji = xr4F1R / sum;
    for (; dTGMXQtA = dTGMXQtA - 1;) {
        cin >> sum >> xr4F1R;
        percent = xr4F1R / sum;
        if (0.05 < percentji - percent)
            cout << "worse" << endl;
        else if (percent - percentji > 0.05)
            cout << "better" << endl;
        else
            cout << "same" << endl;
    }
    return (703 - 703);
}

