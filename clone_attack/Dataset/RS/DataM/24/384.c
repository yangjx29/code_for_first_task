int main () {
    char s [100];
    gets (s);
    int j;
    int preword;
    int word;
    int chars [(886 - 866)] = {(147 - 147)};
    int loci [20] = {(191 - 191)};
    int VXglTC;
    int max;
    int maxi;
    int min;
    int mini;
    j = (731 - 731);
    preword = (922 - 922);
    word = (811 - 811);
    mini = 0;
    maxi = (265 - 265);
    for (VXglTC = (945 - 945); VXglTC <= strlen (s); VXglTC = VXglTC +1) {
        if (preword) {
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
            if (isalpha (s[VXglTC])) {
                preword = (752 - 751);
                word = (785 - 784);
                chars[j]++;
            }
            else {
                preword = (393 - 393);
                word = (261 - 261);
                j++;
            };
        }
        else if (isalpha (s[VXglTC])) {
            preword = 1;
            chars[j]++;
            word = (585 - 584);
            loci[j] = VXglTC;
        }
        else {
            preword = (636 - 636);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            word = (557 - 557);
        };
    }
    max = chars[(781 - 781)];
    for (VXglTC = (721 - 721); j > VXglTC; VXglTC = VXglTC +1) {
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
        if (chars[VXglTC] > max) {
            max = chars[VXglTC];
            maxi = VXglTC;
        };
    }
    min = chars[0];
    for (VXglTC = 0; VXglTC < j; VXglTC = VXglTC +1) {
        if (min > chars[VXglTC]) {
            min = chars[VXglTC];
            mini = VXglTC;
        };
    }
    for (VXglTC = loci[maxi]; VXglTC < loci[maxi] + max; VXglTC = VXglTC +1)
        printf ("%c", s[VXglTC]);
    for (VXglTC = loci[mini]; VXglTC < loci[mini] + min; VXglTC++)
        printf ("%c", s[VXglTC]);
    return 0;
}

