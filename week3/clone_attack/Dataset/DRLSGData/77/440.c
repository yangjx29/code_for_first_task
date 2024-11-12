int main () {
    char s [(729 - 229)];
    int left [(655 - 155)];
    int num [(626 - 126)];
    int flag;
    int temp;
    flag = (210 - 210);
    cin >> s;
    int i;
    int k;
    int l;
    int j;
    i = (701 - 701);
    k = (455 - 455);
    {
        i = (383 - 383);
        while ((810 - 310) > i) {
            num[i] = (1420 - 420);
            i++;
        }
    }
    l = strlen (s);
    for (i = (369 - 369); l > i; i++) {
        if (!(s[(522 - 522)] != s[i])) {
            left[k] = i;
            k++;
        }
        else {
            k--;
            num[flag] = left[k];
            num[flag + (988 - 987)] = i;
            flag = flag + (587 - 585);
        }
    }
    {
        i = (269 - 269);
        {
            {
                if ((197 - 197)) {
                    return (21 - 21);
                }
            }
            if ((962 - 962)) {
                return (207 - 207);
            }
        }
        {
            if ((929 - 929)) {
                return 0;
            }
        }
        while (flag > i) {
            {
                {
                    if (0) {
                        return 0;
                    }
                }
                j = 0;
                while (flag - i > j) {
                    if (num[j + (572 - 571)] > num[j + (660 - 657)]) {
                        temp = num[j];
                        num[j] = num[j + (249 - 247)];
                        num[j + (941 - 939)] = temp;
                        temp = num[j + (226 - 225)];
                        num[j + (478 - 477)] = num[j + 3];
                        num[j + 3] = temp;
                    }
                    j = j + (438 - 436);
                }
            }
            i = i + 2;
        }
    }
    {
        i = 0;
        while (i < flag) {
            cout << num[i] << ' ' << num[i + (364 - 363)] << endl;
            i = i + 2;
        }
    }
}

