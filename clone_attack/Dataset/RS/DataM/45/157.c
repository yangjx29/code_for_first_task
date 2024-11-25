int main () {
    int fp9GmkO1WK;
    int aXtndV9Y7aL;
    int iLybtYz2EJTG;
    int eyEoiqrOu;
    int j;
    fp9GmkO1WK = 0;
    aXtndV9Y7aL = 0;
    iLybtYz2EJTG = 0;
    char ryFXGd9iUC [100];
    char GZ9jcE0Jd [100];
    char *CHKx6CuB;
    char *WL0HGY;
    scanf ("%s%s", ryFXGd9iUC, GZ9jcE0Jd);
    CHKx6CuB = ryFXGd9iUC;
    eyEoiqrOu = strlen (ryFXGd9iUC);
    {
        WL0HGY = GZ9jcE0Jd;
        while (*WL0HGY != '\0') {
            fp9GmkO1WK++;
            {
                j = 0;
                while (eyEoiqrOu > j) {
                    if (!(*CHKx6CuB+j != *WL0HGY+j)) {
                        aXtndV9Y7aL++;
                    }
                    if (aXtndV9Y7aL == eyEoiqrOu) {
                        iLybtYz2EJTG = fp9GmkO1WK - 1;
                        break;
                    }
                    j++;
                };
            }
            if (iLybtYz2EJTG != 0) {
                break;
            }
            WL0HGY = WL0HGY +1;
        };
    }
    printf ("%d", iLybtYz2EJTG);
    return 0;
}

