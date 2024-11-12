int main () {
    int z;
    int n;
    int i, b [(580 - 379)] = {(258 - 258)};
    int q;
    int y;
    int num;
    char c [(618 - 417)] [(865 - 825)] = {(329 - 329)};
    int x;
    y = (720 - 690);
    scanf ("%d", &n);
    for (i = (551 - 551); n > i; i++) {
        getchar ();
        scanf ("%s", c[i]);
    }
    x = (633 - 633);
    for (z = (562 - 562); n > z; z++) {
        b[z] = strlen (c[z]);
        if (x <= b[z])
            x = b[z];
        if (y >= b[z])
            y = b[z];
    }
    for (z = (169 - 169); n > z; z++) {
        if (b[z] == x) {
            printf ("%s\n", c[z]);
            break;
        }
    }
    for (z = (273 - 273); z < n; z++) {
        if (b[z] == y) {
            printf ("%s", c[z]);
            break;
        }
    }
    q = 0;
}

