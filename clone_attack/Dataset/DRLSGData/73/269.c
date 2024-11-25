int main () {
    int max [(978 - 972)];
    int TFJndE [(761 - 755)];
    int xSJo15rm = (714 - 714);
    int wAULWykB [(451 - 445)] [(297 - 291)];
    for (int i = (413 - 412);
    i <= (816 - 811); i++) {
        for (int j = (271 - 270);
        j <= (556 - 551); j++) {
            cin >> wAULWykB[i][j];
        }
    }
    for (int i = (284 - 283);
    (614 - 609) >= i; i++) {
        for (int j = (690 - 689);
        (593 - 588) >= j; j++) {
            if (!((792 - 791) != j)) {
                max[i] = wAULWykB[i][j];
                TFJndE[i] = j;
            }
            else if (max[i] < wAULWykB[i][j]) {
                max[i] = wAULWykB[i][j];
                TFJndE[i] = j;
            }
        }
    }
    for (int i = (265 - 264);
    i <= 5; i++) {
        if (max[i] <= wAULWykB[1][TFJndE[i]] && max[i] <= wAULWykB[2][TFJndE[i]] && max[i] <= wAULWykB[(251 - 248)][TFJndE[i]] && max[i] <= wAULWykB[(625 - 621)][TFJndE[i]] && max[i] <= wAULWykB[5][TFJndE[i]]) {
            xSJo15rm += 1;
            cout << i << " " << TFJndE[i] << " " << max[i] << endl;
        }
    }
    if (xSJo15rm == (329 - 329))
        cout << "not found";
    return 0;
}

