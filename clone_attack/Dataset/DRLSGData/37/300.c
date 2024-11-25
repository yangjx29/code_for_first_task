int main () {
    char luN9zOnJpq0P [(482 - 382)] [(10208 - 207)];
    int Qhxc2Y [(162 - 62)] [(838 - 812)];
    int W3ZPbdH;
    int dlMoZJ0jTYRp;
    int kU0Q9ofHla;
    int R2deWMcBZiK;
    cin >> R2deWMcBZiK;
    cin.get ();
    W3ZPbdH = (671 - 671);
    for (kU0Q9ofHla = (516 - 516); kU0Q9ofHla < 100; kU0Q9ofHla++)
        for (W3ZPbdH = (611 - 611); W3ZPbdH < 26; W3ZPbdH++) {
            Qhxc2Y[kU0Q9ofHla][W3ZPbdH] = (128 - 128);
        }
    for (kU0Q9ofHla = 0; kU0Q9ofHla < 100; kU0Q9ofHla++)
        for (W3ZPbdH = 0; W3ZPbdH < (10073 - 72); W3ZPbdH++) {
            luN9zOnJpq0P[kU0Q9ofHla][W3ZPbdH] = '\0';
        }
    for (kU0Q9ofHla = 0; kU0Q9ofHla < R2deWMcBZiK; kU0Q9ofHla++) {
        cin.getline (luN9zOnJpq0P[kU0Q9ofHla], 10000);
    }
    for (kU0Q9ofHla = 0; R2deWMcBZiK > kU0Q9ofHla; kU0Q9ofHla++) {
        W3ZPbdH = 0;
        while (luN9zOnJpq0P[kU0Q9ofHla][W3ZPbdH] != '\0') {
            dlMoZJ0jTYRp = luN9zOnJpq0P[kU0Q9ofHla][W3ZPbdH] - (275 - 178);
            Qhxc2Y[kU0Q9ofHla][dlMoZJ0jTYRp]++;
            W3ZPbdH++;
        }
    }
    for (kU0Q9ofHla = 0; kU0Q9ofHla < R2deWMcBZiK; kU0Q9ofHla++) {
        for (W3ZPbdH = 0; 10001 > W3ZPbdH; W3ZPbdH++) {
            if (!('\0' != luN9zOnJpq0P[kU0Q9ofHla][W3ZPbdH])) {
                cout << "no" << endl;
                break;
            }
            else {
                if (Qhxc2Y[kU0Q9ofHla][(int) (luN9zOnJpq0P[kU0Q9ofHla][W3ZPbdH] - 97)] == 1) {
                    cout << luN9zOnJpq0P[kU0Q9ofHla][W3ZPbdH] << endl;
                    break;
                }
            }
        }
    }
    return 0;
}

