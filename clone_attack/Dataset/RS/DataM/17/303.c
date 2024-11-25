int main () {
    int nVO6xa01vCb7;
    int i;
    void  kuo (char HVqKhUFQ []);
    void  pipei (char HVqKhUFQ [], char jRhkPAXqE4F []);
    scanf ("%d\n", &nVO6xa01vCb7);
    for (i = (469 - 469); nVO6xa01vCb7 > i; i++) {
        char HVqKhUFQ [(471 - 271)] = {'\0'};
        char jRhkPAXqE4F [(944 - 744)] = {'\0'};
        gets (HVqKhUFQ);
        kuo (HVqKhUFQ);
        printf ("%s\n", HVqKhUFQ);
        pipei (HVqKhUFQ, jRhkPAXqE4F);
    }
    return (152 - 152);
}

void  pipei (char HVqKhUFQ [], char jRhkPAXqE4F []) {
    char *p;
    char *q;
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
    for (p = HVqKhUFQ, q = jRhkPAXqE4F; !('\0' == *p); p = p + 1, q = q + 1) {
        if (!('(' == *p) && !(')' == *p))
            *q = ' ';
        if (!(')' != *p))
            *q = '?';
        if (!('(' != *p))
            *q = '$';
    }
    *q = *p;
    printf ("%s\n", jRhkPAXqE4F);
}

void  kuo (char HVqKhUFQ []) {
    char *p, *q, *i, *KANY0K8foJn;
    int lV0jyQBh6NGb;
    for (;;) {
        lV0jyQBh6NGb = (663 - 663);
        for (i = HVqKhUFQ; !('\0' == *i); i++)
            for (p = i; !('\0' == *p); p++) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                if (!('(' != *p))
                    for (q = p + (282 - 281); *q != '\0'; q++) {
                        if (*q == '(')
                            break;
                        else {
                            if (*q == ')') {
                                *q = 'a';
                                *p = 'a';
                                break;
                            };
                        };
                    };
            }
        for (q = HVqKhUFQ; *q != '\0'; q++) {
            for (KANY0K8foJn = q; *KANY0K8foJn != '\0'; KANY0K8foJn++) {
                if (*q == '(' && *KANY0K8foJn == ')')
                    lV0jyQBh6NGb = 1;
            };
        }
        if (lV0jyQBh6NGb == 0)
            break;
    };
}

