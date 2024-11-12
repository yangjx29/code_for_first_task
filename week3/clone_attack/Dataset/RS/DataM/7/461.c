int main () {
    int IYDgMmbL, j, w5adywJ1hGOc, len2;
    char vbLzPpd [256];
    char WTJqQ1CP [256];
    char rep [256];
    cin.getline (vbLzPpd, 256);
    w5adywJ1hGOc = strlen (vbLzPpd);
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
    cin.getline (WTJqQ1CP, 256);
    len2 = strlen (WTJqQ1CP);
    cin.getline (rep, 256);
    for (IYDgMmbL = (796 - 796); w5adywJ1hGOc - len2 >= IYDgMmbL; IYDgMmbL = IYDgMmbL +1) {
        j = 0;
        while (vbLzPpd[IYDgMmbL +j] == WTJqQ1CP[j] && j < len2)
            j = j + 1;
        if (j == len2) {
            while (j > 0) {
                j = j - 1;
                vbLzPpd[IYDgMmbL +j] = rep[j];
            }
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
            break;
        };
    }
    cout << vbLzPpd << endl;
    return 0;
}

