struct   list {
    char oEGYq8V2 [10];
    char name [20];
    char oz2a0Pqtr;
    unsigned  int VCXSpJxocWl;
    float RFQ73u5bt;
    char O70tJN [20];
    struct   list *next;
};
struct   list *GQxpXHo () {
    struct   list *fiZqxbv = NULL;
    struct   list *ZarIioX3lM = NULL;
    struct   list *head;
    int dpD5x0f1hd7 = 0;
    do {
        ZarIioX3lM = fiZqxbv;
        fiZqxbv = (struct   list *) malloc (sizeof (struct   list));
        scanf ("%s", fiZqxbv->oEGYq8V2);
        if (*fiZqxbv->oEGYq8V2 == 'e') {
            free (fiZqxbv);
            head = ZarIioX3lM;
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
            break;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%s %c %d %f %s\n", fiZqxbv->name, &fiZqxbv->oz2a0Pqtr, &fiZqxbv->VCXSpJxocWl, &fiZqxbv->RFQ73u5bt, fiZqxbv->O70tJN);
        if (dpD5x0f1hd7 == 0)
            fiZqxbv->next = NULL;
        if (dpD5x0f1hd7 != 0)
            fiZqxbv->next = ZarIioX3lM;
        dpD5x0f1hd7 = 1;
    }
    while (1);
    return head;
}

int main () {
    struct   list *TpjHrY;
    TpjHrY = GQxpXHo ();
    while (TpjHrY != NULL) {
        printf ("%s %s %c %d %g %s\n", TpjHrY->oEGYq8V2, TpjHrY->name, TpjHrY->oz2a0Pqtr, TpjHrY->VCXSpJxocWl, TpjHrY->RFQ73u5bt, TpjHrY->O70tJN);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        TpjHrY = TpjHrY->next;
    }
    return 0;
}

