int main () {
    int m [(100737 - 737)];
    int lolH6rFdy;
    int c;
    char c2RCzl [(100709 - 709)], b [(100058 - 58)];
    gets (c2RCzl);
    int jo3NOKgZ9S;
    lolH6rFdy = strlen (c2RCzl);
    b[0] = c2RCzl[0];
    c = 1;
    jo3NOKgZ9S = (341 - 341);
    m[0] = 1;
    for (jo3NOKgZ9S = 1; jo3NOKgZ9S < lolH6rFdy; jo3NOKgZ9S = jo3NOKgZ9S + 1) {
        m[jo3NOKgZ9S] = isalpha (c2RCzl[jo3NOKgZ9S]);
        if ((m[jo3NOKgZ9S] != 0) || ((!(' ' != c2RCzl[jo3NOKgZ9S])) && (m[jo3NOKgZ9S - 1] != 0))) {
            b[c] = c2RCzl[jo3NOKgZ9S];
            c = c + 1;
        }
    }
    b[c] = '\0';
    printf ("%s", b);
    return 0;
}

