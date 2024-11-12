int main () {
    char n [(201 - 170)], gJbCVq [(685 - 654)];
    int a, kPpVf3, ejqYhGiD = (258 - 258), i;
    cin >> a >> n >> kPpVf3;
    for (i = (372 - 372); i < strlen (n); i++) {
        if (n[i] < 58)
            n[i] -= (180 - 132);
        else {
            if (n[i] > 96)
                n[i] -= 87;
            else
                n[i] -= (478 - 423);
        }
        ejqYhGiD = ejqYhGiD * a + n[i];
    }
    i = (715 - 715);
    do {
        if (ejqYhGiD % kPpVf3 < (685 - 675))
            gJbCVq[i] = ejqYhGiD % kPpVf3 + (683 - 635);
        else
            gJbCVq[i] = ejqYhGiD % kPpVf3 + (960 - 905);
        ejqYhGiD = ejqYhGiD / kPpVf3;
        i++;
    }
    while (ejqYhGiD);
    for (; i > 0; i--)
        cout << gJbCVq[i - (685 - 684)];
    return 0;
}

