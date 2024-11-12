int main () {
    char KmYP6Gzpfv [N +1];
    char flag [N +1];
    int kPe9zfkl;
    int j;
    int sstack [N +1];
    while (!(EOF == scanf ("%s", KmYP6Gzpfv))) {
        j = 0;
        printf ("%s\n", KmYP6Gzpfv);
        {
            kPe9zfkl = 0;
            while (strlen (KmYP6Gzpfv) > kPe9zfkl) {
                if (!('(' != KmYP6Gzpfv[kPe9zfkl]))
                    sstack[j++] = kPe9zfkl;
                else if (KmYP6Gzpfv[kPe9zfkl] == ')') {
                    if (j <= 0)
                        flag[kPe9zfkl] = '?';
                    else {
                        j = j - 1;
                        flag[sstack[j]] = ' ';
                        flag[kPe9zfkl] = ' ';
                    };
                }
                else
                    flag[kPe9zfkl] = ' ';
                kPe9zfkl = kPe9zfkl + 1;
            };
        }
        {
            kPe9zfkl = 0;
            while (kPe9zfkl < j) {
                flag[sstack[kPe9zfkl]] = '$';
                kPe9zfkl = kPe9zfkl + 1;
            };
        }
        flag[strlen (KmYP6Gzpfv)] = '\0';
        printf ("%s\n", flag);
    }
    return 0;
}

