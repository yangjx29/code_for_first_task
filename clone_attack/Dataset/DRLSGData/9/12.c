struct   stu {
    char q4FUEs1Ht8 [20];
    int p8tkm3yKM;
    int order;
    struct   stu *I97IA2W;
};
int main () {
    struct   stu *v7IuMe, *CNYpd8P, *HTzIYr, *lq7GeL, *lth3RnjA4b;
    int x1gW06LOSRD, m9t8esMYgQ, j;
    lth3RnjA4b = (struct   stu *) malloc (l);
    scanf ("%d", &x1gW06LOSRD);
    CNYpd8P = lth3RnjA4b;
    {
        m9t8esMYgQ = 0;
        for (; m9t8esMYgQ < x1gW06LOSRD;) {
            v7IuMe = (struct   stu *) malloc (l);
            scanf ("%s %d", v7IuMe->q4FUEs1Ht8, &v7IuMe->p8tkm3yKM);
            v7IuMe->order = m9t8esMYgQ;
            CNYpd8P->I97IA2W = v7IuMe;
            m9t8esMYgQ = m9t8esMYgQ + 1;
            CNYpd8P = v7IuMe;
        }
    }
    CNYpd8P->I97IA2W = NULL;
    {
        m9t8esMYgQ = 0;
        for (; m9t8esMYgQ < x1gW06LOSRD - 1;) {
            {
                v7IuMe = lth3RnjA4b;
                j = 0;
                for (; j < x1gW06LOSRD - 1 - m9t8esMYgQ;) {
                    j = j + 1;
                    CNYpd8P = v7IuMe->I97IA2W;
                    HTzIYr = CNYpd8P->I97IA2W;
                    if ((!(HTzIYr->p8tkm3yKM != CNYpd8P->p8tkm3yKM) && CNYpd8P->order > HTzIYr->order) || (CNYpd8P->p8tkm3yKM < 60 && HTzIYr->p8tkm3yKM < CNYpd8P->p8tkm3yKM && CNYpd8P->order > HTzIYr->order) || (60 > HTzIYr->p8tkm3yKM && HTzIYr->p8tkm3yKM > CNYpd8P->p8tkm3yKM && CNYpd8P->order > HTzIYr->order) || (HTzIYr->p8tkm3yKM >= 60 && HTzIYr->p8tkm3yKM > CNYpd8P->p8tkm3yKM)) {
                        lq7GeL = HTzIYr->I97IA2W;
                        HTzIYr->I97IA2W = CNYpd8P;
                        v7IuMe->I97IA2W = HTzIYr;
                        CNYpd8P->I97IA2W = lq7GeL;
                    }
                    v7IuMe = v7IuMe->I97IA2W;
                }
            }
            m9t8esMYgQ = m9t8esMYgQ + 1;
        }
    }
    v7IuMe = lth3RnjA4b->I97IA2W;
    for (; v7IuMe != NULL;) {
        printf ("%s\n", v7IuMe->q4FUEs1Ht8);
        v7IuMe = v7IuMe->I97IA2W;
    }
}

