char lYNq1l [200], I7t1kN4HK [200];
int d2NaziYVPR [(665 - 409)], b [(855 - 599)], i;

int main () {
    i = 0;
    scanf ("%s%s", lYNq1l, I7t1kN4HK);
    while (!('\0' == lYNq1l[i])) {
        d2NaziYVPR[lYNq1l[i]]++;
        i++;
    }
    i = 0;
    while (!('\0' == I7t1kN4HK[i])) {
        b[I7t1kN4HK[i]]++;
        i++;
    }
    for (i = 0; i < 256; i++)
        if (d2NaziYVPR[i] != b[i]) {
            return 0;
        };
}

