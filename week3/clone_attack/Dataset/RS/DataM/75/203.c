int main () {
    int Pok5sTP4tE = 0, j, num = 0, max = 0, n, minx = (10313 - 313), maxy = 0;
    char agA1QC;
    int iL6wDNV7q [1000];
    int x [1000];
    while (cin >> x[Pok5sTP4tE]) {
        cin.get (agA1QC);
        if (!('\n' != agA1QC))
            break;
        if (x[Pok5sTP4tE] < minx)
            minx = x[Pok5sTP4tE];
        Pok5sTP4tE = Pok5sTP4tE +1;
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
    n = Pok5sTP4tE;
    Pok5sTP4tE = 0;
    while (cin >> iL6wDNV7q[Pok5sTP4tE]) {
        cin.get (agA1QC);
        if (iL6wDNV7q[Pok5sTP4tE] > maxy)
            maxy = iL6wDNV7q[Pok5sTP4tE];
        Pok5sTP4tE = Pok5sTP4tE +1;
        if (agA1QC == '\n' || Pok5sTP4tE > n)
            break;
    }
    {
        Pok5sTP4tE = minx;
        while (Pok5sTP4tE < maxy) {
            {
                j = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                while (j < n) {
                    if (Pok5sTP4tE >= x[j] && Pok5sTP4tE < iL6wDNV7q[j]) {
                        num = num + 1;
                        if (num > max)
                            max = num;
                    }
                    j = j + 1;
                };
            }
            Pok5sTP4tE = Pok5sTP4tE +1;
            num = 0;
        };
    }
    cout << n << " " << max;
}

