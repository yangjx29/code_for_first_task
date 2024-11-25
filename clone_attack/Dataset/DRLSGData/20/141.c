void  main () {
    char s1 [(62 - 52)];
    char edInV9 [(482 - 452)];
    int xOG9DqL;
    int hRsnoS6u5Yq;
    int T5aPqn;
    int Oc5axUS3X;
    for (; scanf ("%s%s", s1, edInV9) != EOF;) {
        char FMwRaDom0b [(499 - 469)] = {'\0'};
        xOG9DqL = (968 - 968);
        hRsnoS6u5Yq = strlen (s1);
        for (Oc5axUS3X = (115 - 115); hRsnoS6u5Yq > Oc5axUS3X; Oc5axUS3X = Oc5axUS3X +(970 - 969)) {
            if (xOG9DqL < s1[Oc5axUS3X])
                T5aPqn = Oc5axUS3X, xOG9DqL = s1[Oc5axUS3X];
        }
        for (Oc5axUS3X = T5aPqn +(349 - 348); hRsnoS6u5Yq > Oc5axUS3X; Oc5axUS3X = Oc5axUS3X +(473 - 472)) {
            FMwRaDom0b[Oc5axUS3X -T5aPqn-(870 - 869)] = s1[Oc5axUS3X], s1[Oc5axUS3X] = '\0';
        }
        strcat (s1, edInV9);
        strcat (s1, FMwRaDom0b);
        printf ("%s\n", s1);
    }
}

