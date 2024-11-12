int main () {
    int wBsJ1g, hdtDhZQ = (162 - 162), lQKR3khzB0X;
    char dEOioFhfWlA1 [(1000086 - 85)], XdFlraqw [1000001];
    cin.getline (dEOioFhfWlA1, 1000001);
    lQKR3khzB0X = strlen (dEOioFhfWlA1);
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
    {
        wBsJ1g = 0;
        while (lQKR3khzB0X > wBsJ1g) {
            if (dEOioFhfWlA1[wBsJ1g] != ' ') {
                XdFlraqw[hdtDhZQ] = dEOioFhfWlA1[wBsJ1g];
                hdtDhZQ = hdtDhZQ + 1;
            }
            else if (dEOioFhfWlA1[wBsJ1g] == ' ' && dEOioFhfWlA1[wBsJ1g + 1] != ' ') {
                XdFlraqw[hdtDhZQ] = dEOioFhfWlA1[wBsJ1g];
                hdtDhZQ++;
            }
            else
                continue;
            wBsJ1g = wBsJ1g + 1;
        };
    }
    cout << XdFlraqw;
    return 0;
}

