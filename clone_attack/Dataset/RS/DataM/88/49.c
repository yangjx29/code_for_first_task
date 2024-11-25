int main () {
    char *BDy04xpsXmkR;
    char s [(863 - 832)];
    gets (s);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    BDy04xpsXmkR = s;
    for (; !('\0' == (*BDy04xpsXmkR));) {
        for (; '0' <= (*BDy04xpsXmkR) && (*BDy04xpsXmkR) <= '9'; BDy04xpsXmkR = BDy04xpsXmkR +1) {
            printf ("%c", *BDy04xpsXmkR);
        }
        if ((*BDy04xpsXmkR) != '\0')
            BDy04xpsXmkR++;
        printf ("\n");
    }
    return 0;
}

