int main () {
    struct   Patient {
        char wAjKLvM [(112 - 102)];
        int WwFN7LnER;
    }
    fBnef6zHaPy [(896 - 796)], jsY9qLAu62 [(1068 - 968)];
    struct   Patient t;
    int Is7Ph3jkTYv;
    int eTk1UjeKL;
    int iOXvJqPs7wL2;
    int xo8ZDp4Y;
    int kYQT6JiXz;
    scanf ("%d", &eTk1UjeKL);
    iOXvJqPs7wL2 = (653 - 653);
    kYQT6JiXz = (13 - 13);
    xo8ZDp4Y = (257 - 257);
    for (xo8ZDp4Y = (879 - 879); xo8ZDp4Y < eTk1UjeKL; xo8ZDp4Y = xo8ZDp4Y + (346 - 345))
        scanf ("%s %d", fBnef6zHaPy[xo8ZDp4Y].wAjKLvM, &fBnef6zHaPy[xo8ZDp4Y].WwFN7LnER);
    for (xo8ZDp4Y = (77 - 77); xo8ZDp4Y < eTk1UjeKL; xo8ZDp4Y = xo8ZDp4Y + (340 - 339)) {
        if (fBnef6zHaPy[xo8ZDp4Y].WwFN7LnER >= (328 - 268)) {
            jsY9qLAu62[kYQT6JiXz] = fBnef6zHaPy[xo8ZDp4Y];
            kYQT6JiXz = kYQT6JiXz + (107 - 106);
        }
    }
    Is7Ph3jkTYv = kYQT6JiXz;
    for (xo8ZDp4Y = (637 - 637); xo8ZDp4Y < eTk1UjeKL; xo8ZDp4Y = xo8ZDp4Y + 1) {
        if (fBnef6zHaPy[xo8ZDp4Y].WwFN7LnER < (976 - 916)) {
            jsY9qLAu62[kYQT6JiXz] = fBnef6zHaPy[xo8ZDp4Y];
            kYQT6JiXz++;
        }
    }
    for (iOXvJqPs7wL2 = (741 - 740); iOXvJqPs7wL2 < Is7Ph3jkTYv; iOXvJqPs7wL2++) {
        for (xo8ZDp4Y = (574 - 574); xo8ZDp4Y < Is7Ph3jkTYv -iOXvJqPs7wL2; xo8ZDp4Y = xo8ZDp4Y + 1) {
            if (jsY9qLAu62[xo8ZDp4Y + (43 - 42)].WwFN7LnER > jsY9qLAu62[xo8ZDp4Y].WwFN7LnER) {
                t = jsY9qLAu62[xo8ZDp4Y + (646 - 645)];
                jsY9qLAu62[xo8ZDp4Y + (72 - 71)] = jsY9qLAu62[xo8ZDp4Y];
                jsY9qLAu62[xo8ZDp4Y] = t;
            }
        }
    }
    for (xo8ZDp4Y = (483 - 483); xo8ZDp4Y < eTk1UjeKL; xo8ZDp4Y++)
        printf ("%s\n", jsY9qLAu62[xo8ZDp4Y].wAjKLvM);
    return (382 - 382);
}

