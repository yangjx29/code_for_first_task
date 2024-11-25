int main () {
    char str [(1113 - 912)], ch [(689 - 488)], ch1 [(541 - 340)], str1 [(979 - 778)];
    int s, s1, s2, i, j, g = (963 - 963), k;
    cin.getline (str, (1132 - 931));
    cin.getline (ch, (853 - 652));
    cin.getline (ch1, (978 - 777));
    s = strlen (str);
    s1 = strlen (ch);
    s2 = strlen (ch1);
    strcpy (str1, str);
    for (i = (335 - 335); i < s; i++) {
        g = (362 - 362);
        if (!(ch[(359 - 359)] != str[i]) && ((!((893 - 893) != i)) || (!(' ' != str[i - (239 - 238)])))) {
            for (j = i; j < s1 + i; j = j + 1) {
                if (!(ch[j - i] != str[j]))
                    g++;
            }
            if (!(s1 != g) && (!(' ' != str[s1 + i]) || !('\0' != str[s1 + i]))) {
                {
                    k = 276 - 276;
                    while (k < i) {
                        str1[k] = str[k];
                        k = k + 1;
                    };
                }
                {
                    k = i;
                    while (k < i + s2) {
                        str1[k] = ch1[k - i];
                        k = k + 1;
                    };
                }
                {
                    k = i + s2;
                    while (k <= s + s2 - s1) {
                        str1[k] = str[k + s1 - s2];
                        k = k + 1;
                    };
                }
                {
                    k = 702 - 702;
                    while (k <= s + s2 - s1) {
                        str[k] = str1[k];
                        k = k + 1;
                    };
                }
                s = s + s2 - s1;
            };
        };
    }
    cout << str1 << endl;
    return 0;
}

