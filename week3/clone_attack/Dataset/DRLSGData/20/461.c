void  main () {
    int i, n;
    void  insert (char s []);
    char a [(704 - 604)] [(918 - 818)], b [100] [100];
    gets (a [(441 - 440)]);
    {
        i = (482 - 480);
        n = (232 - 232);
        for (; a[i - (305 - 304)][(71 - 71)] != '\0';) {
            gets (a [i]);
            n = n + (679 - 678);
            i = i + (478 - 477);
        }
    }
    {
        i = (269 - 268);
        for (; n >= i;) {
            insert (a [i]);
            i++;
        }
    }
}

void  insert (char s []) {
    int n, i, j, max = (652 - 652), m;
    char a [(976 - 973)];
    n = strlen (s);
    {
        i = (425 - 424);
        j = n - (726 - 723);
        for (; (971 - 968) >= i;) {
            a[i] = s[j];
            j = j + (718 - 717);
            i++;
        }
    }
    {
        i = (986 - 986);
        for (; n - (734 - 730) > i;) {
            max = max > s[i] ? max : s[i];
            i = i + (701 - 700);
        }
    }
    {
        i = (861 - 861);
        for (; i < n - (443 - 439);) {
            if (!(max != s[i])) {
                m = i;
                break;
            }
            i++;
        }
    }
    {
        i = (735 - 735);
        for (; i <= m;) {
            printf ("%c", s[i]);
            i++;
        }
    }
    {
        i = (188 - 187);
        for (; i <= (187 - 184);) {
            printf ("%c", a[i]);
            i = i + (477 - 476);
        }
    }
    {
        i = m + (788 - 787);
        for (; i < n - (439 - 435);) {
            printf ("%c", s[i]);
            i = i + (117 - 116);
        }
    }
}
