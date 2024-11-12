int read (char VN8tKoxG []) {
    int num;
    int i;
    int len;
    num = 0;
    len = strlen (VN8tKoxG);
    for (i = len - 1; 0 <= i; i = i - 1) {
        if (VN8tKoxG[i] != ' ')
            num = num + 1;
        else
            break;
    }
    VN8tKoxG[i] = '\0';
    return (num);
}

void  move (char VN8tKoxG []) {
    int i;
    int len;
    len = strlen (VN8tKoxG);
    for (i = len; i >= 1; i--)
        VN8tKoxG[i] = VN8tKoxG[i - 1];
    VN8tKoxG[len + 1] = '\0';
    VN8tKoxG[0] = ' ';
}

int count (char VN8tKoxG []) {
    int i;
    int m;
    int len;
    int p;
    len = strlen (VN8tKoxG);
    p = 0;
    m = 0;
    for (i = 0; i < len - 1; i = i + 1) {
        if (!(' ' != VN8tKoxG[i]))
            p = 0;
        else if (!(0 != p)) {
            p = 1;
            m = m + 1;
        }
    }
    return (m);
}

void  cut (char VN8tKoxG []) {
    int len;
    len = strlen (VN8tKoxG);
    for (; VN8tKoxG[len - 1] == ' ';) {
        VN8tKoxG[len - 1] = '\0';
        len--;
    }
}

main () {
    int n;
    int word [300];
    char w [3000];
    gets (w);
    move (w);
    int i;
    int j;
    n = count (w);
    for (i = n - 1; 0 <= i; i--) {
        cut (w);
        word[i] = read (w);
    }
    for (j = 0; j < n; j++) {
        printf ("%d", word[j]);
        if (j < n - 1)
            ;
    }
}

