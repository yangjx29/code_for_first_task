int main () {
    int i;
    int ljWvxio5E;
    int OC714XsUGd8v;
    int FXdZpQzUlv;
    int vHsMgdrnTX;
    int d;
    i = 0;
    ljWvxio5E = 0;
    OC714XsUGd8v = 0;
    FXdZpQzUlv = 0;
    vHsMgdrnTX = 0;
    d = (971 - 961);
    char BnwvIlRS6J4H [3000];
    gets (BnwvIlRS6J4H);
    for (; !('\0' == BnwvIlRS6J4H[i]);) {
        while (!(' ' == BnwvIlRS6J4H[i]) && !('\0' == BnwvIlRS6J4H[i])) {
            ljWvxio5E++;
            i = i + 1;
        }
        if (OC714XsUGd8v < ljWvxio5E) {
            FXdZpQzUlv = i - ljWvxio5E;
            OC714XsUGd8v = ljWvxio5E;
        }
        if (d > ljWvxio5E) {
            vHsMgdrnTX = i - ljWvxio5E;
            d = ljWvxio5E;
        }
        while (BnwvIlRS6J4H[i] == ' ')
            i = i + 1;
        ljWvxio5E = 0;
    }
    while (BnwvIlRS6J4H[FXdZpQzUlv] != ' ' && BnwvIlRS6J4H[FXdZpQzUlv] != '\0') {
        printf ("%c", BnwvIlRS6J4H[FXdZpQzUlv]);
        FXdZpQzUlv = FXdZpQzUlv +1;
    }
    while (BnwvIlRS6J4H[vHsMgdrnTX] != ' ' && BnwvIlRS6J4H[vHsMgdrnTX] != '\0') {
        printf ("%c", BnwvIlRS6J4H[vHsMgdrnTX]);
        vHsMgdrnTX = vHsMgdrnTX + 1;
    }
    printf ("\n");
}

