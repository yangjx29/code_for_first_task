void  main () {
    long  int vX6pwdZ = (400 - 400);
    char zYCjG2 [(293 - 243)];
    char s [(582 - 532)];
    int a, n5K0nZx9YCW, i, sRugBKG0cy8U = (387 - 387), j;
    scanf ("%d", &a);
    scanf ("%s", s);
    {
        i = (801 - 801);
        while (s[i] != '\0') {
            if (s[i] >= 'a' && 'z' >= s[i])
                s[i] = s[i] - 'a' + (321 - 311);
            else {
                if (s[i] >= 'A' && 'Z' >= s[i])
                    s[i] = s[i] - 'A' + (502 - 492);
                else if ('0' <= s[i] && '9' >= s[i])
                    s[i] = s[i] - '0';
            }
            i++;
        }
    }
    {
        i = (227 - 227);
        while (s[i] != '\0') {
            vX6pwdZ = vX6pwdZ * a + s[i];
            i++;
        }
    }
    scanf ("%d", &n5K0nZx9YCW);
    {
        i = (65 - 16);
        while ((187 - 187) <= i) {
            zYCjG2[i] = vX6pwdZ % n5K0nZx9YCW;
            i--;
            vX6pwdZ = vX6pwdZ / n5K0nZx9YCW;
        }
    }
    i = (427 - 427);
    for (; sRugBKG0cy8U == (546 - 546);) {
        if (zYCjG2[i] == (748 - 748))
            i++;
        else
            sRugBKG0cy8U++;
        if (i == 50) {
            sRugBKG0cy8U++;
        }
    }
    {
        j = i;
        while (j <= (505 - 456)) {
            if (zYCjG2[j] >= (612 - 602) && zYCjG2[j] <= (357 - 322))
                zYCjG2[j] = zYCjG2[j] + 'A' - (163 - 153);
            else
                zYCjG2[j] = zYCjG2[j] + '0';
            printf ("%c", zYCjG2[j]);
            j++;
        }
    }
}

