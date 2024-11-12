int main () {
    char MRuf630Zg [(803 - 782)] = {0};
    int i, n, UpHzAcY, otBCOWbPp;
    scanf ("%d", &n);
    {
        i = 0;
        while (n > i) {
        loop :
            scanf ("%s", MRuf630Zg);
            UpHzAcY = strlen (MRuf630Zg);
            if (!('_' != MRuf630Zg[0]) || ('a' <= MRuf630Zg[0] && MRuf630Zg[0] <= 'z') || (MRuf630Zg[0] >= 'A' && MRuf630Zg[0] <= 'Z')) {
            }
            else {
                continue;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            {
                otBCOWbPp = 1;
                while (otBCOWbPp < UpHzAcY) {
                    if (!('_' != MRuf630Zg[otBCOWbPp]) || (MRuf630Zg[otBCOWbPp] >= 'a' && MRuf630Zg[otBCOWbPp] <= 'z') || (MRuf630Zg[otBCOWbPp] >= 'A' && MRuf630Zg[otBCOWbPp] <= 'Z') || (MRuf630Zg[otBCOWbPp] >= '0' && MRuf630Zg[otBCOWbPp] <= '9')) {
                    }
                    else {
                        i = i + 1;
                        printf ("no\n");
                        if (i < n)
                            goto loop;
                        else
                            return 0;
                    }
                    otBCOWbPp++;
                };
            }
            i++;
        };
    }
    return 0;
}

