int main () {
    int sr = (766 - 766);
    int num [300];
    int eMpZzP0aFT;
    int y;
    int iNQy2YB9J1p;
    char c;
    while ((478 - 477)) {
        scanf ("%d", &num[sr++]);
        scanf ("%c", &c);
        if (!('\n' != c))
            break;
    }
    if (sr == 1) {
        return 0;
    }
    y = num[0];
    iNQy2YB9J1p = num[0];
    for (eMpZzP0aFT = 0; sr > eMpZzP0aFT; eMpZzP0aFT = eMpZzP0aFT + 1) {
        if (y < num[eMpZzP0aFT]) {
            iNQy2YB9J1p = y;
            y = num[eMpZzP0aFT];
        }
        else {
            if (y > num[eMpZzP0aFT])
                iNQy2YB9J1p = num[eMpZzP0aFT];
        };
    }
    for (eMpZzP0aFT = 0; sr > eMpZzP0aFT; eMpZzP0aFT++) {
        if (num[eMpZzP0aFT] < y && num[eMpZzP0aFT] > iNQy2YB9J1p)
            iNQy2YB9J1p = num[eMpZzP0aFT];
    }
    if (y == iNQy2YB9J1p) {
    }
    else
        printf ("%d", iNQy2YB9J1p);
    return 0;
}

