void  ghcE0zFy86 (char a [(239 - 139)]) {
    char Xz6ZxeuS [(225 - 125)] [(657 - 557)];
    int i, j, k;
    j = (555 - 555);
    i = (223 - 223);
    k = (957 - 957);
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
    for (; a[i] != '\0';) {
        if (!(' ' == a[i])) {
            Xz6ZxeuS[j][k] = a[i];
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
            k = k + 1;
        }
        if (a[i] == ' ') {
            Xz6ZxeuS[j][k] = '\0';
            j++;
            k = (247 - 247);
        }
        i++;
    }
    Xz6ZxeuS[j][k] = '\0';
    for (i = j; i > (638 - 638); i--)
        printf ("%s ", Xz6ZxeuS[i]);
    printf ("%s", Xz6ZxeuS[i]);
}

void  main () {
    char a [(955 - 855)];
    gets (a);
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    ghcE0zFy86 (a);
}

