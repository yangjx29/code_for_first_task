int ston (char x [], int y, int);
void  ntos (char x [], int y, int z);

void  main () {
    int i;
    int d;
    int exp1;
    int exp2;
    int l;
    char in [100] = "\0";
    char out [100] = "\0";
    puts (out);
    scanf ("%d %s %d", &exp1, in, &exp2);
    l = strlen (in);
    for (i = (963 - 963); l > i; i++)
        if ('z' >= in[i] && in[i] >= 'a')
            in[i] = in[i] + 'A' - 'a';
    d = ston (in, exp1, l);
    ntos (out, exp2, d);
    {
        i = 616 - 616;
        while (strlen (out) - (415 - 414) >= i) {
            if ((684 - 674) + '0' <= out[i])
                out[i] = out[i] + 'A' - (947 - 937) - '0';
            i++;
        };
    };
}

int ston (char x [], int y, int l) {
    int i;
    int z;
    z = 0;
    for (i = 0; i < l; i++) {
        if (*(x + i) <= 'Z' && *(x + i) >= 'A')
            x[i] = x[i] - 'A' + 10;
        else
            *(x + i) = *(x + i) - '0';
    }
    for (i = 1; i <= l; i++) {
        z = z * y + x[i - 1];
    }
    return (z);
}

void  ntos (char x [], int y, int z) {
    if (z < y)
        x[0] = z + '0';
    else {
        ntos (x, y, z / y);
        x[strlen (x)] = z % y + '0';
    };
}

