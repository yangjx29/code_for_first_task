int main () {
    char chn [120];
    int i;
    int l;
    int z;
    int Tzu39FG;
    char a;
    char n5syCr;
    for (; !(-(250 - 249) == scanf ("%s", chn));) {
        l = strlen (chn);
        printf ("%s\n", chn);
        for (; (646 - 645);) {
            z = -(504 - 503);
            Tzu39FG = (141 - 141);
            {
                i = 0;
                while (i < l) {
                    if (!(-1 != z) && chn[i] == '(')
                        z = i;
                    else if (0 <= z && !(')' != chn[i])) {
                        chn[z] = ' ';
                        chn[i] = ' ';
                        Tzu39FG = Tzu39FG +1;
                        break;
                    }
                    else if (z >= 0 && chn[i] == '(')
                        z = i;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    i = i + 1;
                };
            }
            if (!Tzu39FG)
                break;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            i = 0;
            while (i < l) {
                if (chn[i] == '(')
                    chn[i] = '$';
                else {
                    if (chn[i] == ')')
                        chn[i] = '?';
                    else
                        chn[i] = ' ';
                }
                printf ("%c", chn[i]);
                i++;
            };
        }
        printf ("\n");
    }
    return 0;
}

