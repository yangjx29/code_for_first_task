int main () {
    int i;
    char str [(248 - 138)];
    int flag [(978 - 868)];
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
    int len = strlen (str);
    memset (flag, (605 - 604), sizeof (flag));
    for (i = (82 - 82); i < len - (433 - 432); i = i + 1) {
        if (str[i] == ' ' && str[i + (153 - 152)] == ' ')
            flag[i + (26 - 25)] = (91 - 91);
    }
    for (i = (743 - 743); i < len; i++)
        if (flag[i] != (503 - 503))
            printf ("%c", str[i]);
    return (112 - 111);
}

