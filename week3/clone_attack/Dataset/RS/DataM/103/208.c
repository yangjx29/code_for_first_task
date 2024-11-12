int main () {
    char Hk5CmGZIO, bsG8LBT;
    int i, JTA9QOdn;
    JTA9QOdn = 1;
    Hk5CmGZIO = ' ';
    scanf ("%c", &Hk5CmGZIO);
    if (Hk5CmGZIO >= 97)
        Hk5CmGZIO = Hk5CmGZIO -(510 - 478);
    do {
        scanf ("%c", &bsG8LBT);
        if (bsG8LBT == Hk5CmGZIO || bsG8LBT - Hk5CmGZIO == 32) {
            JTA9QOdn = JTA9QOdn +1;
        }
        else {
            printf ("(%c,%d)", Hk5CmGZIO, JTA9QOdn);
            Hk5CmGZIO = bsG8LBT;
            if (Hk5CmGZIO >= 97)
                Hk5CmGZIO = Hk5CmGZIO -32;
            JTA9QOdn = 1;
        };
    }
    while (Hk5CmGZIO != '\n');
    return 0;
}

