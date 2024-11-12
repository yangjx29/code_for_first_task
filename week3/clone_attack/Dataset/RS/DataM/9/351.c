struct   RAT {
    int weight;
    char color [(734 - 724)];
    struct   RAT *V6kU5csr2IjD;
};
int N;

int main () {
    int i;
    void  sort (struct   RAT *p);
    struct   RAT *head;
    struct   RAT *p1;
    struct   RAT *p2;
    sort (head);
    p1 = (struct   RAT *) malloc (Len);
    scanf ("%d", &N);
    scanf ("%s %d", p1->color, &p1->weight);
    p1->V6kU5csr2IjD = NULL;
    head = p1;
    p2 = p1;
    {
        i = 921 - 920;
        while (i < N) {
            p1 = (struct   RAT *) malloc (Len);
            scanf ("%s %d", p1->color, &p1->weight);
            p1->V6kU5csr2IjD = NULL;
            p2->V6kU5csr2IjD = p1;
            p2 = p1;
            i++;
        };
    }
    {
        p1 = head;
        while (!(NULL == p1)) {
            printf ("%s\n", p1->color);
            p1 = p1->V6kU5csr2IjD;
        };
    }
    return (56 - 56);
}

void  sort (struct   RAT *p) {
    struct   RAT *xY1cX9In;
    struct   RAT temp;
    int j;
    int i;
    for (j = (928 - 928); N > j; j = j + 1) {
        i = 0;
        xY1cX9In = p;
        while (N -j - 1 > i) {
            i++;
            if (((977 - 917) > xY1cX9In->weight && (978 - 918) <= xY1cX9In->V6kU5csr2IjD->weight) || (xY1cX9In->weight >= 60 && xY1cX9In->V6kU5csr2IjD->weight >= 60 && xY1cX9In->weight < xY1cX9In->V6kU5csr2IjD->weight)) {
                temp = *xY1cX9In;
                xY1cX9In->weight = xY1cX9In->V6kU5csr2IjD->weight;
                strcpy (xY1cX9In->color, xY1cX9In->V6kU5csr2IjD->color);
                xY1cX9In->V6kU5csr2IjD->weight = temp.weight;
                strcpy (xY1cX9In->V6kU5csr2IjD->color, temp.color);
            }
            xY1cX9In = xY1cX9In->V6kU5csr2IjD;
        };
    };
}

