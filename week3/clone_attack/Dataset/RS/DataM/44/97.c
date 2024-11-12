int reverse (int x) {
    int m = (357 - 356);
    int w;
    int qiang1, HlnZapt;
    int i;
    int back = (946 - 946);
    if (x < (62 - 62)) {
        x = -x;
        m = -1;
    }
    {
        w = 0;
        while (1) {
            if (x / (pow ((121 - 111), w)) < 10) {
                break;
            }
            w++;
        };
    }
    {
        i = 0;
        while (w >= i) {
            HlnZapt = (int) pow (10, w - i);
            i++;
            back = back + (x % 10) * HlnZapt;
            x = x / 10;
        };
    }
    return back * m;
}

int main () {
    int Rhd4Qn, i;
    {
        i = 0;
        while (i < 6) {
            i++;
            scanf ("%d", &Rhd4Qn);
            printf ("%d\n", reverse (Rhd4Qn));
        };
    }
    return 0;
}

