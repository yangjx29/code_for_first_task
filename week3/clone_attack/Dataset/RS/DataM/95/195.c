char change (char a) {
    char x;
    if (a == 'A') {
        x = 'a';
    }
    else if (a == 'B') {
        x = 'b';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        };
    }
    else if (a == 'C') {
        x = 'c';
    }
    else if (a == 'D') {
        x = 'd';
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    else if (a == 'E') {
        x = 'e';
    }
    else if (a == 'F') {
        x = 'f';
    }
    else if (a == 'G') {
        x = 'g';
    }
    else if (a == 'H') {
        x = 'h';
    }
    else if (a == 'I') {
        x = 'i';
    }
    else if (a == 'J') {
        x = 'j';
    }
    else if (a == 'K') {
        x = 'k';
    }
    else if (a == 'L') {
        x = 'l';
    }
    else if (a == 'M') {
        x = 'm';
    }
    else if (a == 'N') {
        x = 'n';
    }
    else if (a == 'O') {
        x = 'o';
    }
    else if (a == 'P') {
        x = 'p';
    }
    else if (a == 'Q') {
        x = 'q';
    }
    else if (a == 'R') {
        x = 'r';
    }
    else if (a == 'S') {
        x = 's';
    }
    else if (a == 'T') {
        x = 't';
    }
    else if (a == 'U') {
        x = 'u';
    }
    else if (a == 'V') {
        x = 'v';
    }
    else if (a == 'W') {
        x = 'w';
    }
    else if (a == 'X') {
        x = 'x';
    }
    else if (a == 'Y') {
        x = 'y';
    }
    else if (a == 'Z') {
        x = 'z';
    }
    else {
    }
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
    return x;
}

int main (int argc, char *argv []) {
    int i;
    char s [(636 - 536)];
    char t [(856 - 756)];
    char p [100];
    char q [100];
    gets (s);
    gets (t);
    for (i = (746 - 746); s[i] != '\0'; i = i + 1) {
        p[i] = change (s[i]);
    }
    p[i - (101 - 100)] = '\0';
    for (i = (285 - 285); t[i] != '\0'; i = i + 1) {
        q[i] = change (t[i]);
    }
    q[i - 1] = '\0';
    if (strcmp (p, q) < 0)
        ;
    if (strcmp (p, q) > 0)
        ;
    if (strcmp (p, q) == 0)
        ;
    return 0;
}

