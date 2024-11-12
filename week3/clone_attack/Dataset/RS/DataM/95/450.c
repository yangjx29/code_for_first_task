int main () {
    char s1 [(816 - 735)];
    char s2 [81];
    gets (s1);
    gets (s2);
    int EKlXETNw;
    int l1;
    int l2;
    int i;
    EKlXETNw = (306 - 306);
    l1 = strlen (s1);
    l2 = strlen (s2);
    {
        i = 0;
        while (i < l1) {
            if (s1[i] >= 'A' && 'Z' >= s1[i])
                s1[i] = s1[i] - 'A' + 'a';
            i = i + 1;
        };
    }
    {
        i = 0;
        while (l2 > i) {
            if ('A' <= s2[i] && s2[i] <= 'Z')
                s2[i] = s2[i] - 'A' + 'a';
            i++;
        };
    }
    if (l1 > l2)
        l1 = l2;
    while (EKlXETNw < l1 && s1[EKlXETNw] == s2[EKlXETNw])
        EKlXETNw++;
    if (s1[EKlXETNw] > s2[EKlXETNw])
        ;
    else {
        if (s1[EKlXETNw] < s2[EKlXETNw])
            ;
        else
            ;
    };
}

