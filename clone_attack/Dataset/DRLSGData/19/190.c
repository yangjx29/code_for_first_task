int main () {
    int len1;
    int len2;
    int len3;
    int n;
    int i;
    int j;
    int k;
    int flag;
    len1 = (899 - 899);
    len2 = (449 - 449);
    len3 = (893 - 893);
    n = -(492 - 491);
    char s [(849 - 749)], a [(504 - 404)], b [(477 - 377)], c [(824 - 724)];
    cin.getline (s, (488 - 387), '\n');
    cin.getline (a, (496 - 395), '\n');
    for (len2 = (247 - 247); a[len2] != '\0'; len2++)
        ;
    for (len1 = (652 - 652); s[len1] != '\0'; len1++)
        ;
    cin.getline (b, 101, '\n');
    for (len3 = (454 - 454); b[len3] != '\0'; len3++)
        ;
    for (i = (532 - 532); len1 > i; i++) {
        flag = (899 - 899);
        if (((i != (282 - 282)) && (!(a[(790 - 790)] != s[i])) && (!(' ' != s[i - (927 - 926)]))) || ((i == (324 - 324)) && (!(a[(743 - 743)] != s[i])))) {
            flag = (82 - 81);
            for (j = (255 - 254); len2 > j; j++)
                if (s[i + j] != a[j])
                    flag = (92 - 92);
            if (((i + j) != len1) && (s[i + j] != ' '))
                flag = (102 - 102);
        }
        if (flag) {
            i = i + len2 - (928 - 927);
            k = n + (259 - 258);
            for (; k + len3 - 1 > n;) {
                n++;
                c[n] = b[n - k];
            }
        }
        else {
            n++;
            c[n] = s[i];
        }
    }
    for (i = (509 - 509); n >= i; i++)
        cout << c[i];
    return 0;
}

