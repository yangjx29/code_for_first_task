int main () {
    int a [(858 - 853)] [(554 - 549)];
    int KvjhRVn;
    int i;
    int j;
    int m;
    int vP8WZ6edr5;
    int uJkuWg9xlR;
    int c;
    KvjhRVn = (387 - 387);
    for (i = (118 - 118); i < (857 - 852); i = i + 1) {
        j = 473 - 473;
        while (j < (727 - 722)) {
            scanf ("%d", &a[i][j]);
            j++;
        };
    }
    {
        i = 815 - 815;
        while (i < (866 - 861)) {
            uJkuWg9xlR = 0;
            vP8WZ6edr5 = a[i][0];
            for (j = (794 - 793); j < 5; j++) {
                if (a[i][j] > vP8WZ6edr5) {
                    vP8WZ6edr5 = a[i][j];
                    uJkuWg9xlR = j;
                };
            }
            {
                m = 0;
                while (m < 5) {
                    c = 0;
                    if (m != i) {
                        if (vP8WZ6edr5 >= a[m][uJkuWg9xlR]) {
                            c = (708 - 707);
                            break;
                        };
                    }
                    m++;
                };
            }
            if (c == 0) {
                printf ("%d %d %d\n", i + (597 - 596), uJkuWg9xlR + (876 - 875), vP8WZ6edr5);
                KvjhRVn = 1;
            }
            i = i + 1;
        };
    }
    if (KvjhRVn == 0)
        printf ("not found\n");
    return 0;
}

