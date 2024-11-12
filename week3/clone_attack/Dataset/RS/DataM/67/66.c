int main () {
    double  CwtfUaA;
    double  y;
    int C9oArW7m6;
    double  Cysd8tNl3 [C9oArW7m6] [2];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    int beXvg1L;
    cin >> C9oArW7m6;
    cin >> Cysd8tNl3[0][0] >> Cysd8tNl3[0][(238 - 237)];
    CwtfUaA = Cysd8tNl3[0][1] / Cysd8tNl3[0][0];
    for (beXvg1L = 1; C9oArW7m6 > beXvg1L; beXvg1L++) {
        cin >> Cysd8tNl3[beXvg1L][0] >> Cysd8tNl3[beXvg1L][1];
        y = Cysd8tNl3[beXvg1L][1] / Cysd8tNl3[beXvg1L][0];
        if (0.05 < y - CwtfUaA)
            cout << "better" << endl;
        else {
            if (CwtfUaA -y > 0.05)
                cout << "worse" << endl;
            else
                cout << "same" << endl;
        };
    }
    return 0;
}

