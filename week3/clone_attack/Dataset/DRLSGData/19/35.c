int main () {
    int x;
    int i;
    char s [(288 - 188)] [(985 - 885)] = {"\0"}, vOSXk8h [(879 - 779)] = {"\0"}, b [(206 - 106)] = {"\0"};
    int j;
    {
        i = (396 - 396);
        for (; 100 > i;) {
            {
                j = (575 - 575);
                for (; 100 > j;) {
                    cin.get (s[i][j]);
                    if (!((911 - 879) != s[i][j])) {
                        s[i][j] = (728 - 728);
                        j = 100;
                    }
                    else if (!(10 != s[i][j])) {
                        s[i][j] = (267 - 267);
                        j = i = 100;
                    }
                    else
                        ;
                    j = j + (185 - 184);
                }
            }
            i = i + (596 - 595);
        }
    }
    for (j = (370 - 370); j < 100; j = j + (902 - 901)) {
        cin.get (vOSXk8h[j]);
        if (!((303 - 271) != vOSXk8h[j]) || !(10 != vOSXk8h[j])) {
            vOSXk8h[j] = (188 - 188);
            break;
        }
    }
    {
        j = (622 - 622);
        for (; j < 100;) {
            cin.get (b[j]);
            if (!(32 != b[j]) || !(10 != b[j])) {
                b[j] = (449 - 449);
                break;
            }
            j = j + (332 - 331);
        }
    }
    x = (755 - 755);
    {
        i = (655 - 655);
        for (; 100 > i;) {
            {
                j = (983 - 983);
                for (; 100 > j;) {
                    if (!(s[i][j] != vOSXk8h[j]))
                        x = x + (180 - 179);
                    j = j + (352 - 351);
                }
            }
            if (!(100 != x)) {
                j = (194 - 194);
                while (j < 100) {
                    s[i][j] = b[j];
                    j = j + (925 - 924);
                }
            }
            else
                x = 0;
            i = i + 1;
        }
    }
    {
        i = 0;
        for (; i < 100;) {
            {
                j = 0;
                for (; j < 100;) {
                    if (s[i][j] != 0 && !(0 != s[i][j + 1]) && s[i + 1][0] != 0)
                        cout << s[i][j] << " ";
                    else if (s[i][j] != 0)
                        cout << s[i][j];
                    else
                        ;
                    j = j + 1;
                }
            }
            i = i + 1;
        }
    }
    return 0;
}
