int main () {
    char xFgQEkjAqB [100], iTB1P2nO [100], t8XIVeZ;
    int Pq9VNkS0i, ledT25A, fzHfFkB1mg = 0;
    for (; scanf ("%s%s", xFgQEkjAqB, iTB1P2nO) != EOF;) {
        Pq9VNkS0i = strlen (xFgQEkjAqB);
        t8XIVeZ = xFgQEkjAqB[0];
        for (ledT25A = 0; Pq9VNkS0i > ledT25A; ledT25A = ledT25A + 1) {
            if (xFgQEkjAqB[ledT25A] > t8XIVeZ) {
                t8XIVeZ = xFgQEkjAqB[ledT25A];
                fzHfFkB1mg = ledT25A;
            }
        }
        {
            ledT25A = 0;
            while (Pq9VNkS0i > ledT25A) {
                printf ("%c", xFgQEkjAqB[ledT25A]);
                if (ledT25A == fzHfFkB1mg)
                    printf ("%s", iTB1P2nO);
                ledT25A++;
            }
        }
    }
    return 0;
}

