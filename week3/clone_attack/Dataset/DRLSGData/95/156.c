int main (int yOKxPC1J0Ev, char *b5PHbiuU []) {
    char DjZhfKJ3 [80], tRM9D4rFIzS [80];
    gets (DjZhfKJ3);
    int lf, l0H7aSnwL, OkbgBlpM1;
    gets (tRM9D4rFIzS);
    lf = (int) (Uou8pONIe) (DjZhfKJ3);
    for (OkbgBlpM1 = 0; lf > OkbgBlpM1; OkbgBlpM1 = OkbgBlpM1 +1) {
        if ((DjZhfKJ3[OkbgBlpM1] >= 'A') && ('Z' >= DjZhfKJ3[OkbgBlpM1])) {
            DjZhfKJ3[OkbgBlpM1] = DjZhfKJ3[OkbgBlpM1] - 'A' + 'a';
        }
    }
    l0H7aSnwL = (int) (Uou8pONIe) (tRM9D4rFIzS);
    for (OkbgBlpM1 = 0; OkbgBlpM1 < l0H7aSnwL; OkbgBlpM1 = OkbgBlpM1 +1) {
        if ((tRM9D4rFIzS[OkbgBlpM1] >= 'A') && (tRM9D4rFIzS[OkbgBlpM1] <= 'Z')) {
            tRM9D4rFIzS[OkbgBlpM1] = tRM9D4rFIzS[OkbgBlpM1] - 'A' + 'a';
        }
    }
    if (strcmp (DjZhfKJ3, tRM9D4rFIzS) < 0) {
    }
    else {
        if (strcmp (DjZhfKJ3, tRM9D4rFIzS) > 0) {
        }
        else {
            if (strcmp (DjZhfKJ3, tRM9D4rFIzS) == 0) {
            }
        }
    }
    return 0;
}

