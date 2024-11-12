int main () {
    int i;
    int j;
    int k;
    int flag;
    char *p1;
    char *p2;
    char *p3;
    char *q1;
    char *q2;
    gets (p1);
    gets (p2);
    gets (p3);
    p1 = (char *) malloc (sizeof (char) * (448 - 192));
    p2 = (char *) malloc (sizeof (char) * (1079 - 823));
    p3 = (char *) malloc (sizeof (char) * (862 - 606));
    q1 = (char *) malloc (sizeof (char) * (671 - 415));
    q2 = (char *) malloc (sizeof (char) * (864 - 608));
    for (i = (933 - 933); i < strlen (p1); i = i + 1) {
        flag = (736 - 735);
        for (j = (319 - 319); j < strlen (p2); j = j + 1)
            if (*(p1 + i + j) != *(p2 + j)) {
                flag = 0;
                break;
            }
        if (flag) {
            for (k = 0; k < i; k = k + 1)
                *(q1 + k) = *(p1 + k);
            *(q1 + k) = '\0';
            for (k = i + strlen (p2); k < strlen (p1); k = k + 1)
                *(q2 + k - i - strlen (p2)) = *(p1 + k);
            *(q2 + k - i - strlen (p2)) = '\0';
            break;
        };
    }
    if (flag) {
        puts (q1);
        strcat (q1, p3);
        strcat (q1, q2);
    }
    else
        puts (p1);
}

