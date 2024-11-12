int main () {
    int qRvf3XHt;
    int IM1zlqPHOubG;
    int qGX0hDH;
    int zCvTPued;
    int FthrPZn;
    int ifqTt4 [qRvf3XHt + IM1zlqPHOubG];
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
    scanf ("%d %d", &qRvf3XHt, &IM1zlqPHOubG);
    scanf ("%d", &ifqTt4[IM1zlqPHOubG]);
    for (qGX0hDH = 1; qRvf3XHt > qGX0hDH; qGX0hDH = qGX0hDH + 1)
        scanf (" %d", &ifqTt4[IM1zlqPHOubG +qGX0hDH]);
    {
        qGX0hDH = 0;
        while (IM1zlqPHOubG > qGX0hDH) {
            ifqTt4[qGX0hDH] = ifqTt4[qRvf3XHt + qGX0hDH];
            qGX0hDH = qGX0hDH + 1;
        };
    }
    printf ("%d", ifqTt4[0]);
    {
        qGX0hDH = 1;
        while (qRvf3XHt > qGX0hDH) {
            printf (" %d", ifqTt4[qGX0hDH]);
            qGX0hDH++;
        };
    }
    return 0;
}

