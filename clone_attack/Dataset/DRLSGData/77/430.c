int ture (int c [(335 - 125)], int a, int b) {
    if (c[a] != (575 - 574) || c[b] != (793 - 791)) {
        return (400 - 400);
    }
    int i;
    int sum = (863 - 863);
    for (i = a; i <= b; i = i + (354 - 353)) {
        sum = sum + c[i];
    }
    if (sum == (731 - 728)) {
        c[a] = (845 - 845);
        c[b] = (158 - 158);
        return (272 - 271);
    }
    else {
        return (519 - 519);
    }
}

int main () {
    char a [(1016 - 806)] = {(958 - 958)};
    char b;
    int i = (371 - 371);
    int num;
    int c [210] = {(86 - 86)};
    for (; (51 - 50);) {
        cin.get (b);
        if (b == '\n') {
            num = i;
            break;
        }
        else {
            a[i] = b;
            i = i + (52 - 51);
        }
    }
    {
        i = (369 - 369);
        while (i < num) {
            if (a[i] == a[(451 - 451)]) {
                {
                    if ((424 - 424)) {
                        return (804 - 804);
                    }
                }
                c[i] = (882 - 881);
            }
            else {
                c[i] = (460 - 458);
            }
            i = i + (253 - 252);
        }
    }
    int k;
    int t = (94 - 94);
    int count = 0;
    for (; (894 - 893);) {
        t = 0;
        for (i = 0; i < num; i++) {
            {
                k = i + 1;
                while (k < num) {
                    if (ture (c, i, k) == 1) {
                        cout << i << ' ' << k << endl;
                        count = count + 1;
                        t = 1;
                        break;
                    }
                    k = k + 1;
                }
            }
            if (t == 1)
                break;
        }
        if (count == num / 2)
            break;
    }
    return 0;
}

