struct   student {
    char wEe5ud27FC [(546 - 496)];
    struct   student *qK23CkQVAu;
    struct   student *CM0QSU;
};
void  main () {
    struct   student *eR9oF5Yfj;
    struct   student *Ekyon0;
    struct   student *JhLHq5RxobB;
    struct   student *gqe8mxIRwYNC;
    JhLHq5RxobB = gqe8mxIRwYNC = (struct   student *) malloc (LEN);
    gets (JhLHq5RxobB->wEe5ud27FC);
    JhLHq5RxobB->qK23CkQVAu = NULL;
    JhLHq5RxobB->CM0QSU = NULL;
    eR9oF5Yfj = JhLHq5RxobB;
    for (; strcmp (JhLHq5RxobB->wEe5ud27FC, "end");) {
        gqe8mxIRwYNC = JhLHq5RxobB;
        JhLHq5RxobB = (struct   student *) malloc (LEN);
        gets (JhLHq5RxobB->wEe5ud27FC);
        JhLHq5RxobB->qK23CkQVAu = NULL;
        JhLHq5RxobB->CM0QSU = gqe8mxIRwYNC;
        gqe8mxIRwYNC->qK23CkQVAu = JhLHq5RxobB;
    }
    gqe8mxIRwYNC->qK23CkQVAu = NULL;
    do {
        puts (gqe8mxIRwYNC->wEe5ud27FC);
        gqe8mxIRwYNC = gqe8mxIRwYNC->CM0QSU;
    }
    while (gqe8mxIRwYNC != NULL);
}

