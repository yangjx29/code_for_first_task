int kCkSAj5x;
double  X [21003], oS3FoO [20113], gQmA9LlOu = (975 - 975);

double  Max (double  X, double  oS3FoO) {
    return oS3FoO < X ? X : oS3FoO;
}

int main () {
    int K = (366 - 365);
    cin >> kCkSAj5x;
    for (int eT5iOuE = (796 - 795);
    kCkSAj5x >= eT5iOuE; eT5iOuE = eT5iOuE + 1)
        cin >> X[eT5iOuE] >> oS3FoO[eT5iOuE];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (int eT5iOuE = 1;
    eT5iOuE <= kCkSAj5x; eT5iOuE = eT5iOuE + 1)
        for (int amZheNpdW8RQ = eT5iOuE + 1;
        amZheNpdW8RQ <= kCkSAj5x; amZheNpdW8RQ = amZheNpdW8RQ + 1)
            gQmA9LlOu = Max (gQmA9LlOu, (X[eT5iOuE] - X[amZheNpdW8RQ]) * (X[eT5iOuE] - X[amZheNpdW8RQ]) + (oS3FoO[eT5iOuE] - oS3FoO[amZheNpdW8RQ]) * (oS3FoO[eT5iOuE] - oS3FoO[amZheNpdW8RQ]));
    printf ("%.4f\n", sqrt (gQmA9LlOu));
}

