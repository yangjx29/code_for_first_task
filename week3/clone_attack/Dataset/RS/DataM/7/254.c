int main () {
    char str [(507 - 251)];
    char sub [(902 - 646)];
    char rep [256];
    char Z5SxlALk [256];
    char *vjXmrcl27U;
    gets (str);
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
    gets (sub);
    gets (rep);
    vjXmrcl27U = strstr (str, sub);
    if (vjXmrcl27U != NULL) {
        *vjXmrcl27U = 0;
        strcpy (Z5SxlALk, str);
        strcat (Z5SxlALk, rep);
        strcat (Z5SxlALk, vjXmrcl27U + strlen (sub));
        strcpy (str, Z5SxlALk);
    }
    printf ("%s\n", str);
    return 0;
}

