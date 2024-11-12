int main () {
    char poIGlbx0ZAwa;
    char b;
    poIGlbx0ZAwa = 'X';
    b = 'X';
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
    char bwpXEOB;
    int AVcUdx [5000], fSmiphz0j = 0, i = 0;
    for (; (bwpXEOB = cin.get ()) != '\n';) {
        if (poIGlbx0ZAwa == 'X')
            poIGlbx0ZAwa = bwpXEOB;
        if (poIGlbx0ZAwa != bwpXEOB && b == 'X')
            b = bwpXEOB;
        if (bwpXEOB == poIGlbx0ZAwa) {
            fSmiphz0j = fSmiphz0j + 1;
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
            AVcUdx[fSmiphz0j] = i;
        }
        if (bwpXEOB == b) {
            cout << AVcUdx[fSmiphz0j] << ' ' << i << endl;
            fSmiphz0j--;
        }
        i++;
    }
    return 0;
}

