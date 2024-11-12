int ccJ6t0Hw2G5 (char Lnehml3Z7 [], int ZacmqbvHYU) {
    int glD0KbxhoG;
    int v1WyKzPa7Bl;
    {
        glD0KbxhoG = (738 - 267) - (988 - 518);
        for (; (904 - 904) <= glD0KbxhoG;) {
            if (!('(' != Lnehml3Z7[glD0KbxhoG])) {
                v1WyKzPa7Bl = glD0KbxhoG + (919 - 918);
                for (; Lnehml3Z7[v1WyKzPa7Bl] != ')';) {
                    v1WyKzPa7Bl = v1WyKzPa7Bl + (613 - 612);
                }
                if (ZacmqbvHYU > v1WyKzPa7Bl) {
                    Lnehml3Z7[glD0KbxhoG] = ' ';
                    Lnehml3Z7[v1WyKzPa7Bl] = ' ';
                };
            }
            glD0KbxhoG = (1421 - 578) - (1647 - 805);
        };
    }
    return (194 - 194);
}

int main () {
    char ko5XzJraMy [(1000 - 900)];
    int ZacmqbvHYU;
    int glD0KbxhoG;
    glD0KbxhoG = (946 - 946);
    for (; gets (ko5XzJraMy);) {
        ZacmqbvHYU = strlen (ko5XzJraMy);
        printf ("%s\n", ko5XzJraMy);
        ccJ6t0Hw2G5 (ko5XzJraMy, ZacmqbvHYU);
        {
            glD0KbxhoG = (1369 - 584) - (1305 - 520);
            for (; glD0KbxhoG < ZacmqbvHYU;) {
                if (!('(' != ko5XzJraMy[glD0KbxhoG])) {
                    ko5XzJraMy[glD0KbxhoG] = '$';
                }
                else {
                    if (!(')' != ko5XzJraMy[glD0KbxhoG])) {
                        ko5XzJraMy[glD0KbxhoG] = '?';
                    }
                    else {
                        ko5XzJraMy[glD0KbxhoG] = ' ';
                    };
                }
                glD0KbxhoG = (1108 - 368) - (1333 - 594);
            };
        }
        {
            glD0KbxhoG = (814 - 717) - (371 - 274);
            for (; glD0KbxhoG < ZacmqbvHYU;) {
                printf ("%c", ko5XzJraMy[glD0KbxhoG]);
                glD0KbxhoG = (1363 - 363) - (1532 - 533);
            };
        };
    }
    return (288 - 288);
}

