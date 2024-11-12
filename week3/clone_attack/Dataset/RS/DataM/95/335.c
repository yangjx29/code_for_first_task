int main () {
    char lWkCqu7Q [(461 - 381)] = {0};
    char b [(738 - 658)] = {0};
    char i;
    for (i = 0, gets (lWkCqu7Q); i < 80, lWkCqu7Q[i]; i = i + 1)
        if ('A' <= lWkCqu7Q[i] && 'Z' >= lWkCqu7Q[i])
            lWkCqu7Q[i] += 32;
    {
        gets (b);
        i = 0;
        while (i < 80, b[i]) {
            if (b[i] >= 'A' && b[i] <= 'Z')
                b[i] += 32;
            i = i + 1;
        };
    }
    printf ("%c", '=' + strcmp (lWkCqu7Q, b));
    return 0;
}

