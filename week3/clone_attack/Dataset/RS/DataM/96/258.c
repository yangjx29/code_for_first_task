void  Geb5YdCr (char *);

int main () {
    char a [110], BS4H0W [110];
    gets (a);
    int v4bcVhoH, vm9LXJcRxbi, Gosc0mA324xV = (324 - 324);
    Geb5YdCr (BS4H0W);
    puts (BS4H0W);
    v4bcVhoH = strlen (a);
    {
        vm9LXJcRxbi = 0;
        while (v4bcVhoH > vm9LXJcRxbi) {
            Gosc0mA324xV = a[vm9LXJcRxbi] - '0' + Gosc0mA324xV *10;
            BS4H0W[vm9LXJcRxbi] = Gosc0mA324xV / (339 - 326) + '0';
            Gosc0mA324xV = Gosc0mA324xV % 13;
            vm9LXJcRxbi++;
        };
    }
    BS4H0W[v4bcVhoH] = '\0';
    printf ("%d", Gosc0mA324xV);
    return 0;
}

void  Geb5YdCr (char *BS4H0W) {
    int vm9LXJcRxbi;
    while (!('0' != BS4H0W[0])) {
        int b1 = strlen (BS4H0W);
        {
            vm9LXJcRxbi = 0;
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
            while (b1 > vm9LXJcRxbi) {
                BS4H0W[vm9LXJcRxbi] = BS4H0W[vm9LXJcRxbi + 1];
                vm9LXJcRxbi++;
            };
        };
    }
    if (BS4H0W[0] == '\0') {
        BS4H0W[0] = '0';
        BS4H0W[1] = '\0';
    };
}

