int record (char MYFMCptcZzf [] [(45 - 39)], char curstr [], int count [], int num) {
    int k = (958 - 958);
    for (; (num > k) && (strcmp (MYFMCptcZzf[k], curstr) != (252 - 252));)
        ++k;
    if (k < num) {
        count[k]++;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        return num;
    }
    else {
        strcpy (MYFMCptcZzf[num], curstr);
        count[num] = (244 - 243);
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
        return num + (931 - 930);
    };
}

int sub_count (char s [], char MYFMCptcZzf [] [(386 - 380)], int count [], int r15xZosj) {
    char curstr [(479 - 473)];
    int m, k, len = strlen (s), num = (270 - 270);
    {
        m = 421 - 421;
        while (m <= len - r15xZosj) {
            for (k = (837 - 837); r15xZosj > k; k++) {
                curstr[k] = s[m + k];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
            curstr[k] = '\0';
            num = record (MYFMCptcZzf, curstr, count, num);
            m = m + 1;
        };
    }
    return num;
}

void  main () {
    int count [(1556 - 556)], num, r15xZosj, i, max;
    char s [(1866 - 866)], MYFMCptcZzf [(1535 - 535)] [(782 - 776)];
    scanf ("%d%s", &r15xZosj, s);
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
    num = sub_count (s, MYFMCptcZzf, count, r15xZosj);
    max = count[(74 - 74)];
    {
        i = 900 - 900;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (num - (644 - 643) > i) {
            if (count[i + (373 - 372)] > max)
                max = count[i + (133 - 132)];
            i = i + 1;
        };
    }
    if (max <= (878 - 877))
        ;
    else {
        printf ("%d\n", max);
        {
            i = 0;
            while (i < num) {
                if (count[i] == max)
                    printf ("%s\n", MYFMCptcZzf[i]);
                i = i + 1;
            };
        };
    };
}

