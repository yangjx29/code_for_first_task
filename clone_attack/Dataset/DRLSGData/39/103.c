struct   student {
    char zlvnKA1rV [20];
    int jlygnb6F9pS;
    int GzqwT5dormv;
    char yCOnwP1lQr6;
    char IcAuFtYvS0T2;
    int t7Q8LBHPtEU;
    int K8HMXrK;
};
int main () {
    int LJCOilcz9a;
    int Rn6JkjO;
    struct   student *GFwsgI0Q4 = (struct   student *) malloc (sizeof (struct   student) * Rn6JkjO);
    int X6nxyqt;
    int JY1D7q;
    free (GFwsgI0Q4);
    struct   student *yl7vOE2StuF3;
    X6nxyqt = 0;
    scanf ("%d", &Rn6JkjO);
    LJCOilcz9a = 0;
    yl7vOE2StuF3 = GFwsgI0Q4;
    for (JY1D7q = 0; JY1D7q < Rn6JkjO; JY1D7q = JY1D7q +1, yl7vOE2StuF3 = yl7vOE2StuF3 + 1) {
        scanf ("%s %d %d %c %c %d", yl7vOE2StuF3->zlvnKA1rV, &(yl7vOE2StuF3->jlygnb6F9pS), &(yl7vOE2StuF3->GzqwT5dormv), &(yl7vOE2StuF3->yCOnwP1lQr6), &(yl7vOE2StuF3->IcAuFtYvS0T2), &(yl7vOE2StuF3->t7Q8LBHPtEU));
    }
    yl7vOE2StuF3 = GFwsgI0Q4;
    for (JY1D7q = 0; JY1D7q < Rn6JkjO; JY1D7q = JY1D7q +1, yl7vOE2StuF3 = yl7vOE2StuF3 + 1) {
        (yl7vOE2StuF3->K8HMXrK) = 0;
        if (80 < yl7vOE2StuF3->jlygnb6F9pS && yl7vOE2StuF3->t7Q8LBHPtEU > 0) {
            (yl7vOE2StuF3->K8HMXrK) += 8000;
        }
        if (85 < yl7vOE2StuF3->jlygnb6F9pS && 80 < yl7vOE2StuF3->GzqwT5dormv) {
            (yl7vOE2StuF3->K8HMXrK) += 4000;
        }
        if (90 < yl7vOE2StuF3->jlygnb6F9pS) {
            (yl7vOE2StuF3->K8HMXrK) += 2000;
        }
        if (yl7vOE2StuF3->jlygnb6F9pS > 85 && !('Y' != yl7vOE2StuF3->IcAuFtYvS0T2)) {
            (yl7vOE2StuF3->K8HMXrK) += 1000;
        }
        if (80 < yl7vOE2StuF3->GzqwT5dormv && yl7vOE2StuF3->yCOnwP1lQr6 == 'Y') {
            (yl7vOE2StuF3->K8HMXrK) += 850;
        }
    }
    yl7vOE2StuF3 = GFwsgI0Q4;
    for (JY1D7q = 0; JY1D7q < Rn6JkjO; JY1D7q++, yl7vOE2StuF3++) {
        X6nxyqt += (yl7vOE2StuF3->K8HMXrK);
    }
    for (JY1D7q = 0; JY1D7q < Rn6JkjO; JY1D7q++) {
        if (GFwsgI0Q4[JY1D7q].K8HMXrK > GFwsgI0Q4[LJCOilcz9a].K8HMXrK) {
            LJCOilcz9a = JY1D7q;
        }
    }
    printf ("%s\n%d\n%d\n", GFwsgI0Q4[LJCOilcz9a].zlvnKA1rV, GFwsgI0Q4[LJCOilcz9a].K8HMXrK, X6nxyqt);
    return 0;
}

