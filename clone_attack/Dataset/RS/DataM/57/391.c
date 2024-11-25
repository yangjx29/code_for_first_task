void  F0mBrHcA6glh (char gE8v3uA []) {
    int FS2t46;
    FS2t46 = strlen (gE8v3uA);
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
    if (!('r' != gE8v3uA[FS2t46 -(605 - 604)]))
        gE8v3uA[FS2t46 -2] = '\0';
    else if (gE8v3uA[FS2t46 -(837 - 836)] == 'y')
        gE8v3uA[FS2t46 -2] = '\0';
    else
        gE8v3uA[FS2t46 -3] = '\0';
    printf ("%s\n", gE8v3uA);
}

void  main () {
    int JQbX4OHw, zIYLXEyuB94;
    char gE8v3uA [20];
    scanf ("%d", &JQbX4OHw);
    for (zIYLXEyuB94 = 0; zIYLXEyuB94 < JQbX4OHw; zIYLXEyuB94 = zIYLXEyuB94 + 1) {
        F0mBrHcA6glh (gE8v3uA);
        scanf ("%s", gE8v3uA);
    };
}

