int main () {
    int d41Km5G0W;
    float standard [(193 - 191)], LYuEkg;
    float a [(461 - 361)] [2], bqu7j5z2;
    cin >> d41Km5G0W;
    cin >> standard[(728 - 728)] >> standard[(337 - 336)];
    LYuEkg = standard[(617 - 616)] / standard[0];
    for (int n9I2qO4 = 0;
    n9I2qO4 < d41Km5G0W - 1; n9I2qO4 = n9I2qO4 + 1) {
        cin >> a[n9I2qO4][0] >> a[n9I2qO4][1];
        bqu7j5z2 = a[n9I2qO4][1] / a[n9I2qO4][0];
        if (bqu7j5z2 - LYuEkg > 0.05)
            cout << "better" << endl;
        else {
            if (LYuEkg -bqu7j5z2 > 0.05)
                cout << "worse" << endl;
            else
                cout << "same" << endl;
        };
    }
    return 0;
}

