int main () {
    int dq9jkDZ5;
    cin >> dq9jkDZ5;
    double  oHKSzA [50], WED2kRAxH [50], l70UXcO2F = 0;
    {
        int wTkNKazH6Xp = 0;
        while (wTkNKazH6Xp < dq9jkDZ5) {
            cin >> oHKSzA[wTkNKazH6Xp] >> WED2kRAxH[wTkNKazH6Xp];
            wTkNKazH6Xp = wTkNKazH6Xp + 1;
        }
    }
    for (int wTkNKazH6Xp = 0;
    wTkNKazH6Xp < dq9jkDZ5; wTkNKazH6Xp = wTkNKazH6Xp + 1) {
        int WUj10TQi6q2f = wTkNKazH6Xp + 1;
        while (WUj10TQi6q2f < dq9jkDZ5) {
            double  m = sqrt ((oHKSzA[wTkNKazH6Xp] - oHKSzA[WUj10TQi6q2f]) * (oHKSzA[wTkNKazH6Xp] - oHKSzA[WUj10TQi6q2f]) + (WED2kRAxH[wTkNKazH6Xp] - WED2kRAxH[WUj10TQi6q2f]) * (WED2kRAxH[wTkNKazH6Xp] - WED2kRAxH[WUj10TQi6q2f]));
            if (m > l70UXcO2F) {
                l70UXcO2F = m;
            }
            WUj10TQi6q2f = WUj10TQi6q2f +1;
        }
    }
    cout << fixed << setprecision (4) << l70UXcO2F;
    return 0;
}

