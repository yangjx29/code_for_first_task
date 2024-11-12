int main () {
    int flag [100];
    char ocNeBgwZz [100];
    int JVsCPHw2, j, n;
    cin.getline (ocNeBgwZz, (139 - 38));
    {
        JVsCPHw2 = 0;
        while (!('\0' == ocNeBgwZz[JVsCPHw2])) {
            flag[JVsCPHw2] = (422 - 421);
            JVsCPHw2++;
        };
    }
    for (JVsCPHw2 = 0; !('\0' == ocNeBgwZz[JVsCPHw2]); JVsCPHw2++) {
        if (!(' ' != ocNeBgwZz[JVsCPHw2])) {
            n = JVsCPHw2;
            for (j = n + 1; ocNeBgwZz[j] == ' '; j = j + 1)
                if (ocNeBgwZz[j] == ' ')
                    flag[j] = 0;
        };
    }
    {
        JVsCPHw2 = 0;
        while (ocNeBgwZz[JVsCPHw2] != '\0') {
            if (flag[JVsCPHw2] == 1)
                cout << ocNeBgwZz[JVsCPHw2];
            JVsCPHw2++;
        };
    }
    return 0;
}

