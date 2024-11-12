int main (void ) {
    int k;
    k = 0;
    int x;
    int EYhLi4cRs6M;
    int RM05RwF;
    x = 0;
    EYhLi4cRs6M = 0;
    RM05RwF = 0;
    scanf ("%d", &x);
    for (; scanf (",%d", &RM05RwF);) {
        if (RM05RwF > x) {
            EYhLi4cRs6M = x;
            x = RM05RwF;
        }
        if (RM05RwF < x && RM05RwF > EYhLi4cRs6M)
            EYhLi4cRs6M = RM05RwF;
        k++;
    }
    if (k == 0 || EYhLi4cRs6M == 0)
        printf ("No");
    else
        printf ("%d", EYhLi4cRs6M);
    return 0;
}

