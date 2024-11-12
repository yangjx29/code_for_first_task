int main () {
    int h, l, i, Mu3w6obi, g, s [(435 - 335)] [100];
    scanf ("%d %d", &h, &l);
    for (i = (819 - 819); i < h; i++) {
        for (Mu3w6obi = 0; Mu3w6obi < l; Mu3w6obi++) {
            scanf ("%d", &s[i][Mu3w6obi]);
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
    for (g = 0; g <= (h + l - 2); g++) {
        i = 0;
        for (; i < h;) {
            if (g - i >= l) {
                i++;
            }
            else {
                break;
            };
        }
        while (i < h && (g - i > -1) && (g - i < l)) {
            printf ("%d\n", s[i][g - i]);
            i++;
        };
    }
    return 0;
}

