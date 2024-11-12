int main () {
    int QmveAb1Z5, jDGQAS3ku;
    char LD2tqMaY [QmveAb1Z5] [10000];
    cin >> QmveAb1Z5;
    for (jDGQAS3ku = 0; jDGQAS3ku <= QmveAb1Z5 -1; jDGQAS3ku = jDGQAS3ku + 1) {
        int EK3XY2, in83qy7, PJoyk4ij16X = 0;
        int i9T7RKVx;
        cin >> LD2tqMaY[jDGQAS3ku];
        i9T7RKVx = strlen (LD2tqMaY[jDGQAS3ku]);
        for (EK3XY2 = 0; i9T7RKVx - 1 >= EK3XY2; EK3XY2++) {
            for (in83qy7 = EK3XY2 +1; in83qy7 <= i9T7RKVx - 1; in83qy7++) {
                if (LD2tqMaY[jDGQAS3ku][EK3XY2] == LD2tqMaY[jDGQAS3ku][in83qy7]) {
                    LD2tqMaY[jDGQAS3ku][EK3XY2] = '\0';
                    LD2tqMaY[jDGQAS3ku][in83qy7] = '\0';
                }
            }
            for (in83qy7 = EK3XY2 -1; in83qy7 >= 0; in83qy7--) {
                if (LD2tqMaY[jDGQAS3ku][EK3XY2] == LD2tqMaY[jDGQAS3ku][in83qy7]) {
                    LD2tqMaY[jDGQAS3ku][EK3XY2] = '\0';
                    LD2tqMaY[jDGQAS3ku][in83qy7] = '\0';
                }
            }
        }
        for (EK3XY2 = 0; EK3XY2 <= i9T7RKVx - 1; EK3XY2++) {
            if (LD2tqMaY[jDGQAS3ku][EK3XY2] != '\0') {
                cout << LD2tqMaY[jDGQAS3ku][EK3XY2] << endl;
                break;
            }
        }
        if (EK3XY2 == i9T7RKVx) {
            cout << "no" << endl;
        }
    }
    return 0;
}

