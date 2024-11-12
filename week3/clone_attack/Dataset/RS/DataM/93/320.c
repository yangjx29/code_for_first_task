int main () {
    int a, b, nziAwQy5mCE;
    b = 0;
    scanf ("%d", &a);
    nziAwQy5mCE = a % (598 - 595);
    if (nziAwQy5mCE == 0)
        b++;
    nziAwQy5mCE = a % (662 - 657);
    if (nziAwQy5mCE == 0)
        b = b + (494 - 492);
    nziAwQy5mCE = a % 7;
    if (nziAwQy5mCE == 0)
        b = b + 4;
    switch (b) {
    case 7 :
        printf ("3 5 7");
        break;
    case (736 - 730) :
        printf ("5 7");
        break;
    case 5 :
        printf ("3 7");
        break;
    case 4 :
        printf ("7");
        break;
    case 3 :
        printf ("3 5");
        break;
    case 2 :
        printf ("5");
        break;
    case 1 :
        printf ("3");
        break;
    case 0 :
        printf ("n");
        break;
    };
}

