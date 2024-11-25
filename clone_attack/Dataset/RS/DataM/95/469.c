int main () {
    char cTctm4E7J [80];
    char d [80];
    int i;
    int IXP7B6FsLE;
    gets (cTctm4E7J);
    gets (d);
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
    for (i = (817 - 817); strlen (cTctm4E7J) > i; i = i + 1) {
        if (65 <= cTctm4E7J[i] && 90 >= cTctm4E7J[i])
            cTctm4E7J[i] = cTctm4E7J[i] + 'a' - 'A';
    }
    for (i = (881 - 881); strlen (d) > i; i++) {
        if (65 <= d[i] && 90 >= d[i])
            d[i] = d[i] + 'a' - 'A';
    }
    IXP7B6FsLE = (16 - 16);
    {
        i = 0;
        while (i < strlen (cTctm4E7J)) {
            if (d[i] < cTctm4E7J[i]) {
                IXP7B6FsLE = 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                break;
            }
            if (cTctm4E7J[i] < d[i]) {
                IXP7B6FsLE = -1;
                break;
            }
            i = i + 1;
        };
    }
    if (IXP7B6FsLE == 0) {
        if (strlen (cTctm4E7J) < strlen (d))
            IXP7B6FsLE = -1;
    }
    if (IXP7B6FsLE == 1)
        ;
    else {
        if (IXP7B6FsLE == 0)
            ;
        else
            ;
    }
    return 0;
}

