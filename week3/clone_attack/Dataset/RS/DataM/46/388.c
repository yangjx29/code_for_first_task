int main () {
    int n;
    int IR87ILt;
    int j326rCN5uy;
    n = (378 - 378);
    int P0TuQX, u0EjoYg;
    int bLewXFjqb6 [(426 - 326) + (974 - 964)] [100 + 10] = {0};
    int buttom = IR87ILt, uskpqCAaZ = j326rCN5uy, left = 0, kMadkx = 0;
    cin >> IR87ILt >> j326rCN5uy;
    for (P0TuQX = 0; IR87ILt > P0TuQX; P0TuQX = P0TuQX +1)
        for (u0EjoYg = 0; j326rCN5uy > u0EjoYg; u0EjoYg++)
            cin >> bLewXFjqb6[P0TuQX][u0EjoYg];
    P0TuQX = 0;
    u0EjoYg = 0;
    for (;;) {
        while (uskpqCAaZ - (188 - 187) >= u0EjoYg) {
            cout << bLewXFjqb6[P0TuQX][u0EjoYg++] << endl;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            n = n + 1;
        }
        if (!(j326rCN5uy * IR87ILt != n))
            break;
        u0EjoYg--;
        P0TuQX = P0TuQX +1;
        kMadkx = kMadkx + 1;
        while (P0TuQX <= buttom - 1) {
            cout << bLewXFjqb6[P0TuQX++][u0EjoYg] << endl;
            n++;
        }
        if (n == j326rCN5uy * IR87ILt)
            break;
        P0TuQX = P0TuQX -1;
        u0EjoYg--;
        uskpqCAaZ--;
        while (u0EjoYg >= left) {
            cout << bLewXFjqb6[P0TuQX][u0EjoYg--] << endl;
            n++;
        }
        if (n == j326rCN5uy * IR87ILt)
            break;
        u0EjoYg = u0EjoYg + 1;
        P0TuQX--;
        buttom = buttom - 1;
        while (P0TuQX >= kMadkx) {
            cout << bLewXFjqb6[P0TuQX--][u0EjoYg] << endl;
            n++;
        }
        if (n == j326rCN5uy * IR87ILt)
            break;
        P0TuQX++;
        u0EjoYg++;
        left = left + 1;
    }
    return 0;
}

