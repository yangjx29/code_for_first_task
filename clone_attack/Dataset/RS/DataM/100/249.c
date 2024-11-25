int main (int argc, char *HuXQeYvMBbrV []) {
    char CXAcrJl3 [301];
    int i, b [(840 - 814)], PG9ciC, vlenxAmZ = (837 - 837);
    gets (CXAcrJl3);
    for (i = 0; i < 26; i = i + 1)
        b[i] = 0;
    PG9ciC = strlen (CXAcrJl3);
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
    for (i = 0; i < PG9ciC; i++)
        if (CXAcrJl3[i] <= 'z' && CXAcrJl3[i] >= 'a')
            b[(CXAcrJl3[i] - 'a')]++;
    for (i = 0; i < 26; i++)
        vlenxAmZ = vlenxAmZ + b[i];
    if (vlenxAmZ == 0)
        ;
    else
        for (i = 0; i < 26; i++)
            if (b[i] != 0)
                printf ("%c=%d\n", i + 'a', b[i]);
    return 0;
}

