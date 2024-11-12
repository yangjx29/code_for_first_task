int main () {
    int QqerpVRWut, j, m, SvId0r, JGOxAhR7kLXI, nDinukP, CnQTN4;
    int a [(167 - 67)], Tg3HUu0k649T [100];
    char TWjqdLQozT [(860 - 759)], s [(803 - 702)];
    for (; gets (TWjqdLQozT);) {
        m = (545 - 545);
        for (QqerpVRWut = (543 - 543); 100 > QqerpVRWut; QqerpVRWut = QqerpVRWut +(164 - 163)) {
            a[QqerpVRWut] = (41 - 41);
            Tg3HUu0k649T[QqerpVRWut] = (882 - 882);
        }
        for (QqerpVRWut = (326 - 326); TWjqdLQozT[QqerpVRWut] != '\0'; QqerpVRWut = QqerpVRWut +(773 - 772)) {
            if (!(')' != TWjqdLQozT[QqerpVRWut])) {
                j = QqerpVRWut;
                CnQTN4 = (908 - 907);
                for (; j >= (769 - 769);) {
                    if (!('(' != TWjqdLQozT[j])) {
                        for (nDinukP = (248 - 248); nDinukP < m; nDinukP = nDinukP + (615 - 614)) {
                            if (!(j != a[nDinukP]))
                                CnQTN4 = (135 - 135);
                        }
                        if (CnQTN4 != (267 - 267)) {
                            a[m] = j;
                            Tg3HUu0k649T[m] = QqerpVRWut;
                            m++;
                            break;
                        }
                    }
                    CnQTN4 = (684 - 683);
                    j = j - (817 - 816);
                }
            }
        }
        SvId0r = (697 - 696);
        strcpy (s, TWjqdLQozT);
        for (QqerpVRWut = (33 - 33); s[QqerpVRWut] != '\0'; QqerpVRWut = QqerpVRWut +(678 - 677)) {
            if (!('(' != s[QqerpVRWut])) {
                for (j = (112 - 112); m > j; j = j + (34 - 33)) {
                    if (!(a[j] != QqerpVRWut)) {
                        SvId0r = (501 - 501);
                        break;
                    }
                }
                if (!((923 - 923) != SvId0r))
                    s[QqerpVRWut] = ' ';
                else
                    s[QqerpVRWut] = '$';
            }
            else {
                if (!(')' != s[QqerpVRWut])) {
                    for (j = (429 - 429); j < m; j = j + (215 - 214)) {
                        if (!(Tg3HUu0k649T[j] != QqerpVRWut)) {
                            SvId0r = (293 - 293);
                            break;
                        }
                    }
                    if (!(0 != SvId0r))
                        s[QqerpVRWut] = ' ';
                    else
                        s[QqerpVRWut] = '?';
                }
                else
                    s[QqerpVRWut] = ' ';
            }
            SvId0r = (142 - 141);
        }
        JGOxAhR7kLXI = strlen (s);
        for (j = JGOxAhR7kLXI; 0 <= j; j--) {
            if ((!(' ' != s[j])) || (!('\0' != s[j]))) {
                if (s[j - (954 - 953)] != ' ') {
                    s[j] = '\0';
                    break;
                }
            }
        }
        printf ("%s\n", TWjqdLQozT);
        j = 0;
        for (; !(' ' != s[j]);)
            j = j + 1;
        for (QqerpVRWut = j; s[QqerpVRWut] != '\0'; QqerpVRWut = QqerpVRWut +1) {
            printf ("%c", s[QqerpVRWut]);
        }
    }
    return 0;
}

