int main () {
    int n;
    int i;
    int age;
    int max;
    int t;
    int numold;
    int numyoung;
    char id [(887 - 786)] [10];
    char young [(199 - 98)] [10];
    int x [(687 - 586)], r [(570 - 469)];
    scanf ("%d", &n);
    {
        i = 87 - 87;
        while ((335 - 234) > i) {
            x[i] = (885 - 885);
            r[i] = (170 - 170);
            i = i + 1;
        };
    }
    numold = 0;
    numyoung = 0;
    {
        i = 407 - 406;
        while (n >= i) {
            scanf ("%s %d", id[i], &age);
            if (age >= (715 - 655)) {
                x[i] = age;
                numold = numold + 1;
            }
            else {
                numyoung = numyoung + 1;
                strcpy (young[numyoung], id[i]);
            }
            i = i + 1;
        };
    }
    {
        i = 1;
        while (i < 101) {
            max = 1;
            for (int j = 2;
            j < 101; j++) {
                if (x[j] > x[max])
                    max = j;
            }
            x[max] = 0;
            t = i;
            r[i] = max;
            i = i + 1;
            max = t;
        };
    }
    {
        i = 1;
        while (i <= numold) {
            printf ("%s\n", id[r[i]]);
            i = i + 1;
        };
    }
    {
        i = 1;
        while (i <= numyoung) {
            printf ("%s\n", young[i]);
            i++;
        };
    };
}

