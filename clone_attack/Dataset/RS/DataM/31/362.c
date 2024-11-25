struct   Not2Ok6w {
    struct   Not2Ok6w *back;
    char Not2Ok6w [(305 - 285)];
    char b [20];
    char c;
    char d [20];
    char tVMnhbse [20];
    char IwZ8f5IUqjY [20];
    struct   Not2Ok6w *next;
};
int main () {
    struct   Not2Ok6w *Y7knPqJmU0bh, *pEnd, *yhjakve5;
    struct   Not2Ok6w *p;
    Y7knPqJmU0bh = (struct   Not2Ok6w *) malloc (sizeof (struct   Not2Ok6w));
    Y7knPqJmU0bh->back = NULL;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    yhjakve5 = Y7knPqJmU0bh;
    for (;;) {
        p = (struct   Not2Ok6w *) malloc (sizeof (struct   Not2Ok6w));
        scanf ("%s", p->Not2Ok6w);
        if (p->Not2Ok6w[0] == 'e') {
            pEnd = p;
            p->back = yhjakve5;
            yhjakve5->next = p;
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
            p->next = NULL;
            break;
        }
        p->back = yhjakve5;
        yhjakve5->next = p;
        yhjakve5 = p;
        scanf ("%s %c %s %s %s", p->b, &p->c, p->d, p->tVMnhbse, p->IwZ8f5IUqjY);
    }
    printf ("%s %s %c %s %s %s\n", yhjakve5->Not2Ok6w, yhjakve5->b, yhjakve5->c, yhjakve5->d, yhjakve5->tVMnhbse, yhjakve5->IwZ8f5IUqjY);
    free (yhjakve5->next);
    for (;;) {
        printf ("%s %s %c %s %s %s\n", yhjakve5->back->Not2Ok6w, yhjakve5->back->b, yhjakve5->back->c, yhjakve5->back->d, yhjakve5->back->tVMnhbse, yhjakve5->back->IwZ8f5IUqjY);
        yhjakve5 = yhjakve5->back;
        free (yhjakve5->next);
        if (yhjakve5->back == NULL)
            break;
    };
}

