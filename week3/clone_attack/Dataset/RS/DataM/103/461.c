int main () {
    char jGoskOxBvj [2000];
    int p = 0;
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
    cin >> jGoskOxBvj;
    for (; jGoskOxBvj[p] != 0;) {
        char c;
        c = jGoskOxBvj[p];
        int RGtglKfT1cir;
        RGtglKfT1cir = 1;
        char MZqVBiW;
        for (; (jGoskOxBvj[p + 1] - jGoskOxBvj[p] == 0) || (jGoskOxBvj[p + 1] - jGoskOxBvj[p]) == 'A' - 'a' || (jGoskOxBvj[p + 1] - jGoskOxBvj[p]) == 'a' - 'A';) {
            RGtglKfT1cir = RGtglKfT1cir +1;
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
            p = p + 1;
        }
        if (c >= 'a')
            MZqVBiW = (char) (c - 'a' + 'A');
        else
            MZqVBiW = c;
        cout << '(' << MZqVBiW << ',' << RGtglKfT1cir << ')';
        p = p + 1;
    }
    return 0;
}

