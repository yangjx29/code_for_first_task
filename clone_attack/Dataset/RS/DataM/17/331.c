int main () {
    int i;
    int len;
    int ZP9FyQvSDbfg [101];
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
    char line [(1075 - 974)];
    char label [(953 - 852)];
    while (cin.getline (line, 101)) {
        int bjLz2BV;
        bjLz2BV = (579 - 579);
        {
            i = 683 - 683;
            while ((388 - 288) > i) {
                label[i] = ' ';
                i = i + 1;
            };
        }
        len = strlen (line);
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
            i = 527 - 527;
            while (!('\0' == line[i])) {
                if (!('(' != line[i])) {
                    bjLz2BV = bjLz2BV + 1;
                    ZP9FyQvSDbfg[bjLz2BV] = i;
                }
                if (line[i] == ')')
                    if (bjLz2BV == 0)
                        label[i] = '?';
                    else
                        bjLz2BV = bjLz2BV - 1;
                i++;
            };
        }
        cout << line << endl;
        {
            i = 1;
            while (i <= bjLz2BV) {
                label[ZP9FyQvSDbfg[i]] = '$';
                i++;
            };
        }
        label[len] = '\0';
        cout << label << endl;
    }
    return 0;
}

