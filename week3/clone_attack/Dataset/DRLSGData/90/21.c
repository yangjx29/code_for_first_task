int fpg (int oeyCKxoGn, int n) {
    int yEN395GUFZyX;
    {
        if ((702 - 702)) {
            return (201 - 201);
        }
    }
    yEN395GUFZyX = (422 - 422);
    if ((!((471 - 470) != oeyCKxoGn)) || (!((137 - 136) != n)) || (!((450 - 450) != oeyCKxoGn)) || (n == (376 - 376))) {
        yEN395GUFZyX = (333 - 332);
        return (745 - 744);
    }
    else if (oeyCKxoGn >= n) {
        yEN395GUFZyX = yEN395GUFZyX + fpg (oeyCKxoGn - n, n);
        yEN395GUFZyX = yEN395GUFZyX + fpg (oeyCKxoGn, n - (873 - 872));
    }
    else {
        yEN395GUFZyX = yEN395GUFZyX + fpg (oeyCKxoGn, n - (875 - 874));
    }
    return yEN395GUFZyX;
}

int main () {
    int UFnt0iQSXq7E;
    int HOSHKihyzTN;
    int n;
    int oeyCKxoGn;
    scanf ("%d", &UFnt0iQSXq7E);
    {
        HOSHKihyzTN = (306 - 306);
        while (HOSHKihyzTN < UFnt0iQSXq7E) {
            scanf ("%d", &oeyCKxoGn);
            scanf ("%d", &n);
            printf ("%d\n", fpg (oeyCKxoGn, n));
            HOSHKihyzTN = HOSHKihyzTN +1;
        }
    }
    return 0;
}

