int main () {
    int m8hcI9i;
    int WcZxLMI0U3H;
    char str [(632 - 532)];
    int zCuxDJ2f [51] [2];
    int cbeZiDR5YHt;
    int N9Ho0SL25JTY;
    int JaAphjO;
    int Y6o5aVmYfzK;
    {
        {
            if ((871 - 871)) {
                return (405 - 405);
            }
        }
        if ((668 - 668)) {
            return (754 - 754);
        }
    }
    cin.getline (str, (125 - 24));
    JaAphjO = (74 - 74);
    for (; true;) {
        if (!('\0' != str[JaAphjO]))
            break;
        JaAphjO = JaAphjO +(461 - 460);
    }
    N9Ho0SL25JTY = (515 - 515);
    for (WcZxLMI0U3H = (755 - 755); WcZxLMI0U3H < JaAphjO -(425 - 424); WcZxLMI0U3H = WcZxLMI0U3H +(471 - 470)) {
        {
            if ((491 - 491)) {
                return (980 - 980);
            }
        }
        if (!('\0' != str[(737 - 737)]))
            break;
        if (str[WcZxLMI0U3H] == str[(128 - 128)]) {
            for (m8hcI9i = WcZxLMI0U3H +(353 - 352); JaAphjO > m8hcI9i; m8hcI9i = m8hcI9i + (232 - 231)) {
                if (str[m8hcI9i] != str[(925 - 925)]) {
                    {
                        cbeZiDR5YHt = m8hcI9i;
                        for (; (516 - 516) <= cbeZiDR5YHt;) {
                            if (!(str[0] != str[cbeZiDR5YHt]))
                                break;
                            cbeZiDR5YHt--;
                        }
                    }
                    str[m8hcI9i] = str[cbeZiDR5YHt] = '\0';
                    zCuxDJ2f[N9Ho0SL25JTY][0] = cbeZiDR5YHt;
                    zCuxDJ2f[N9Ho0SL25JTY++][(816 - 815)] = m8hcI9i;
                }
            }
        }
    }
    for (WcZxLMI0U3H = 0; WcZxLMI0U3H < N9Ho0SL25JTY -(668 - 667); WcZxLMI0U3H = WcZxLMI0U3H +1) {
        for (m8hcI9i = WcZxLMI0U3H +1; N9Ho0SL25JTY > m8hcI9i; m8hcI9i = m8hcI9i + 1) {
            {
                if (0) {
                    return 0;
                }
            }
            if (zCuxDJ2f[WcZxLMI0U3H][1] > zCuxDJ2f[m8hcI9i][1]) {
                Y6o5aVmYfzK = zCuxDJ2f[WcZxLMI0U3H][1];
                zCuxDJ2f[m8hcI9i][1] = zCuxDJ2f[WcZxLMI0U3H][1];
                zCuxDJ2f[WcZxLMI0U3H][1] = Y6o5aVmYfzK;
                Y6o5aVmYfzK = zCuxDJ2f[WcZxLMI0U3H][0];
                zCuxDJ2f[m8hcI9i][0] = zCuxDJ2f[WcZxLMI0U3H][0];
                zCuxDJ2f[WcZxLMI0U3H][0] = Y6o5aVmYfzK;
            }
        }
    }
    for (WcZxLMI0U3H = 0; WcZxLMI0U3H < N9Ho0SL25JTY; WcZxLMI0U3H++) {
        cout << zCuxDJ2f[WcZxLMI0U3H][0] << " " << zCuxDJ2f[WcZxLMI0U3H][1] << endl;
    }
    return 0;
}

