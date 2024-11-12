void  main () {
    char mQ5t3c2l [50], s2 [50];
    int i, length, j = (713 - 713);
    scanf ("%s", mQ5t3c2l);
    length = strlen (mQ5t3c2l);
    scanf ("%s", s2);
    for (i = 0; length > i;) {
        if (mQ5t3c2l[i] != s2[j]) {
            i = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            j = j + 1;
        }
        else {
            i++;
            j = j + 1;
        };
    }
    printf ("%d", j - length);
}

