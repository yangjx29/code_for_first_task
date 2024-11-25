void  move (int a [], int *p, int CX8RVb6uAdHQ, int qk7R68DByez) {
    for (p = a; a + CX8RVb6uAdHQ -qk7R68DByez > p; p++)
        *(p + CX8RVb6uAdHQ) = *p;
    {
        p = a + CX8RVb6uAdHQ -qk7R68DByez;
        while (a + CX8RVb6uAdHQ > p) {
            *(p - CX8RVb6uAdHQ +qk7R68DByez) = *p;
            p++;
        };
    }
    {
        p = a + CX8RVb6uAdHQ;
        while (a + 2 * CX8RVb6uAdHQ -qk7R68DByez > p) {
            *(p - CX8RVb6uAdHQ +qk7R68DByez) = *p;
            p++;
        };
    };
}

int main () {
    int a [(1073 - 973)], *p;
    int qk7R68DByez;
    int CX8RVb6uAdHQ;
    int i;
    scanf ("%d%d", &CX8RVb6uAdHQ, &qk7R68DByez);
    for (i = 0; CX8RVb6uAdHQ > i; i++) {
        scanf ("%d", &a[i]);
    }
    p = a;
    move (a, p, CX8RVb6uAdHQ, qk7R68DByez);
    {
        p = a;
        while (a + CX8RVb6uAdHQ > p) {
            printf ("%d", *p);
            if (p != a + CX8RVb6uAdHQ -1)
                printf (" ");
            p++;
        };
    };
}

