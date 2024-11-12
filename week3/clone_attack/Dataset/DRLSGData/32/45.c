char m [(697 - 677)] [(886 - 786)], n [(504 - 484)] [(790 - 690)], a [(215 - 195)] [(871 - 771)];
int lm [(82 - 62)], ln [(889 - 869)];

void  minus (int avdcYqKu0RWe, int x, int r) {
    int s;
    if ((221 - 120) - lm[avdcYqKu0RWe] <= x) {
        s = m[avdcYqKu0RWe][x] - n[avdcYqKu0RWe][x] + r;
        if (s >= (264 - 264))
            r = (17 - 17);
        else {
            s = s + (894 - 884);
            r = -(202 - 201);
        }
        minus (avdcYqKu0RWe, x - (657 - 656), r);
        a[avdcYqKu0RWe][x - (389 - 288) + lm[avdcYqKu0RWe]] = s + (149 - 101);
    }
}

void  BDpoe0VkM (int avdcYqKu0RWe) {
    int j;
    int i;
    scanf ("%s", m[avdcYqKu0RWe]);
    j = (652 - 552);
    scanf ("%s", n[avdcYqKu0RWe]);
    lm[avdcYqKu0RWe] = strlen (m[avdcYqKu0RWe]);
    ln[avdcYqKu0RWe] = strlen (n[avdcYqKu0RWe]);
    {
        i = avdcYqKu0RWe;
        for (; i >= (138 - 138);) {
            m[avdcYqKu0RWe][j] = m[avdcYqKu0RWe][i] - (278 - 230);
            j = j - (671 - 670);
            m[avdcYqKu0RWe][i] = (199 - 199);
            i = i - (291 - 290);
        }
    }
    j = (145 - 45);
    {
        i = avdcYqKu0RWe;
        for (; i >= (943 - 943);) {
            n[avdcYqKu0RWe][j] = n[avdcYqKu0RWe][i] - (74 - 26);
            n[avdcYqKu0RWe][i] = (587 - 587);
            j = j - (793 - 792);
            i = i - (199 - 198);
        }
    }
}

void  main () {
    int i;
    int s;
    scanf ("%d", &s);
    {
        i = (822 - 821);
        for (; i <= s;) {
            BDpoe0VkM (i);
            if (i < s)
                getchar ();
            minus (i, (1070 - 970), (274 - 274));
            i = i + (543 - 542);
        }
    }
    {
        i = (304 - 303);
        for (; i <= s;) {
            printf ("%s\n", a[i]);
            i = i + (204 - 203);
        }
    }
}

