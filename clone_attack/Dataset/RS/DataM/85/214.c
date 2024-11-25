int hvIH15iBGW (char H9j41C67e []);

void  main () {
    char YzFcUyd [(791 - 770)];
    int w48GpALimrt, e7IEzdfDJ, ME6ji2ZOR;
    scanf ("%d", &w48GpALimrt);
    for (ME6ji2ZOR = (619 - 619); ME6ji2ZOR < w48GpALimrt; ME6ji2ZOR++) {
        scanf ("%s", YzFcUyd);
        e7IEzdfDJ = hvIH15iBGW (YzFcUyd);
        if (!((312 - 312) != e7IEzdfDJ)) {
            printf ("no\n");
        }
        if (!((977 - 976) != e7IEzdfDJ)) {
            printf ("yes\n");
        };
    };
}

int hvIH15iBGW (char H9j41C67e []) {
    int ME6ji2ZOR, SzQSJMc, aTfkGAtJMI;
    SzQSJMc = strlen (H9j41C67e);
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    aTfkGAtJMI = (243 - 243);
    if (('a' <= H9j41C67e[(197 - 197)] && 'z' >= H9j41C67e[(729 - 729)]) || ('A' <= H9j41C67e[0] && H9j41C67e[0] <= 'Z') || (!('_' != H9j41C67e[0]))) {
        for (ME6ji2ZOR = 0; ME6ji2ZOR < SzQSJMc; ME6ji2ZOR++) {
            if (('a' <= H9j41C67e[ME6ji2ZOR] && H9j41C67e[ME6ji2ZOR] <= 'z') || (H9j41C67e[ME6ji2ZOR] >= 'A' && H9j41C67e[ME6ji2ZOR] <= 'Z') || (H9j41C67e[ME6ji2ZOR] >= '0' && H9j41C67e[ME6ji2ZOR] <= '9') || (H9j41C67e[ME6ji2ZOR] == '_')) {
                aTfkGAtJMI = aTfkGAtJMI + 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        for (x = 0; x < 20; x++) {
                            y += x;
                        }
                        if (y > 30)
                            return y;
                    }
                };
            }
            else
                aTfkGAtJMI++;
        }
        if (aTfkGAtJMI == 0)
            return 1;
        if (aTfkGAtJMI != 0)
            return 0;
    }
    else
        return 0;
}

