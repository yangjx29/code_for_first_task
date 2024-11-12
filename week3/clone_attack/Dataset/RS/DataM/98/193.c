int main () {
    int Dy4LRnJMv, dgc5eiA, BwEyYLmOzGVd;
    char UlfeNUM41uA [300] [(531 - 491)];
    BwEyYLmOzGVd = 0;
    cin >> dgc5eiA;
    {
        Dy4LRnJMv = 0;
        while (Dy4LRnJMv < dgc5eiA - 1) {
            scanf ("%s", UlfeNUM41uA[Dy4LRnJMv]);
            Dy4LRnJMv = Dy4LRnJMv +1;
        };
    }
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
    Dy4LRnJMv = 0;
    scanf ("%s", UlfeNUM41uA[dgc5eiA - 1]);
    do {
        cout << UlfeNUM41uA[Dy4LRnJMv];
        BwEyYLmOzGVd = BwEyYLmOzGVd +strlen (UlfeNUM41uA[Dy4LRnJMv]);
        Dy4LRnJMv = Dy4LRnJMv +1;
        while (80 >= BwEyYLmOzGVd +strlen (UlfeNUM41uA[Dy4LRnJMv]) + 1) {
            cout << ' ' << UlfeNUM41uA[Dy4LRnJMv];
            BwEyYLmOzGVd = BwEyYLmOzGVd +strlen (UlfeNUM41uA[Dy4LRnJMv]) + 1;
            Dy4LRnJMv++;
            if (Dy4LRnJMv == dgc5eiA) {
                break;
            };
        }
        BwEyYLmOzGVd = 0;
        cout << endl;
    }
    while (Dy4LRnJMv < dgc5eiA);
    return 0;
}

