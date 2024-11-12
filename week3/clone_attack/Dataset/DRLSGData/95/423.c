int main () {
    char Dr5UCqB [80];
    gets (Dr5UCqB);
    int KHbWUh3rC9;
    int e;
    char b [80];
    gets (b);
    int m, hflbO6pEhoxk;
    e = 1;
    m = strlen (Dr5UCqB);
    hflbO6pEhoxk = strlen (b);
    if (m < hflbO6pEhoxk)
        m = hflbO6pEhoxk;
    for (KHbWUh3rC9 = 0; m > KHbWUh3rC9; KHbWUh3rC9++) {
        if (Dr5UCqB[KHbWUh3rC9] < 91)
            Dr5UCqB[KHbWUh3rC9] += 32;
        if (b[KHbWUh3rC9] < 91)
            b[KHbWUh3rC9] += 32;
        if (b[KHbWUh3rC9] < Dr5UCqB[KHbWUh3rC9]) {
            e = e - 1;
            break;
        }
        else if (Dr5UCqB[KHbWUh3rC9] < b[KHbWUh3rC9]) {
            e--;
            break;
        }
    }
    if (e)
        ;
    return 0;
}

