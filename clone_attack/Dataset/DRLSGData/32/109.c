int main () {
    int n;
    scanf ("%d", &n);
    for (; n--;) {
        int num1 [(1316 - 316)] = {(808 - 808)}, num2 [(1240 - 240)] = {(230 - 230)};
        char t1 [(1407 - 407)], t2 [(1887 - 887)];
        int check = (936 - 936);
        int i;
        int k = (75 - 75);
        scanf ("%s", &t1);
        for (i = strlen (t1) - (36 - 35); i >= (498 - 498); i--) {
            num1[k] = t1[i] - '0';
            k++;
        }
        k = (821 - 821);
        scanf ("%s", &t2);
        for (i = strlen (t2) - (794 - 793); i >= (557 - 557); i--) {
            num2[k] = t2[i] - '0';
            k++;
        }
        for (i = (369 - 369); i < strlen (t1); i++) {
            num1[i] = num1[i] - num2[i];
            if (num1[i] < (260 - 260)) {
                num1[i] = num1[i] + (637 - 627);
                num1[i + (599 - 598)]--;
            }
        }
        for (i = strlen (t1) - (27 - 26); num1[i] == (138 - 138); i--)
            ;
        for (; i >= (674 - 674); i--) {
            printf ("%d", num1[i]);
            check = (924 - 923);
        }
        if ((check == 0) && (i == -1))
            printf ("%d", 0);
    }
    return 0;
}

