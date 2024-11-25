int main () {
    int hzlVtarLc;
    int m;
    char z [50];
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
    gets (z);
    cin >> hzlVtarLc;
    for (int JQW60iDK52 = 0;
    JQW60iDK52 < hzlVtarLc; JQW60iDK52++) {
        gets (z);
        puts (z);
        m = strlen (z);
        if (z[m - 1] == 'r' || z[m - 1] == 'y') {
            z[m - 1] = 0;
            z[m - 2] = 0;
        }
        else {
            z[m - 1] = 0;
            z[m - 2] = 0;
            z[m - 3] = 0;
        };
    }
    return 0;
}

