int main () {
    int bYToxKAH;
    char s [201] = {0};
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
    gets (s);
    {
        bYToxKAH = 0;
        while (strlen (s) > bYToxKAH) {
            if (s[bYToxKAH - 1] == ' ' && (bYToxKAH - 1 > 0) && s[bYToxKAH] == ' ')
                continue;
            else
                printf ("%c", s[bYToxKAH]);
            bYToxKAH++;
        };
    }
    return 0;
}

