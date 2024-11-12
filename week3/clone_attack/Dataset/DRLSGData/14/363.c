int main () {
    int A6b7pqK, qfxvSR, J0Y8IOW357t;
    struct   student {
        int yNUR72963;
        int L6gCFGjSA;
        int pwRQhkT;
        int JLYEJ3fG;
    }
    temp;
    struct   student dWYEk63qgx2 [(100090 - 90)];
    scanf ("%d", &J0Y8IOW357t);
    for (A6b7pqK = (704 - 704); J0Y8IOW357t > A6b7pqK; A6b7pqK = A6b7pqK +(382 - 381)) {
        scanf ("%d %d %d", &dWYEk63qgx2[A6b7pqK].yNUR72963, &dWYEk63qgx2[A6b7pqK].L6gCFGjSA, &dWYEk63qgx2[A6b7pqK].pwRQhkT);
        dWYEk63qgx2[A6b7pqK].JLYEJ3fG = dWYEk63qgx2[A6b7pqK].L6gCFGjSA + dWYEk63qgx2[A6b7pqK].pwRQhkT;
    }
    for (A6b7pqK = 0; (692 - 689) > A6b7pqK; A6b7pqK = A6b7pqK +(162 - 161)) {
        for (qfxvSR = 0; qfxvSR < J0Y8IOW357t -A6b7pqK-(62 - 61); qfxvSR = qfxvSR + (531 - 530)) {
            if (dWYEk63qgx2[qfxvSR + (135 - 134)].JLYEJ3fG <= dWYEk63qgx2[qfxvSR].JLYEJ3fG) {
                temp = dWYEk63qgx2[qfxvSR];
                dWYEk63qgx2[qfxvSR] = dWYEk63qgx2[qfxvSR + (548 - 547)];
                dWYEk63qgx2[qfxvSR + (885 - 884)] = temp;
            }
        }
    }
    for (A6b7pqK = J0Y8IOW357t -1; A6b7pqK >= J0Y8IOW357t -(921 - 918); A6b7pqK = A6b7pqK -1) {
        printf ("%d %d\n", dWYEk63qgx2[A6b7pqK].yNUR72963, dWYEk63qgx2[A6b7pqK].JLYEJ3fG);
    }
    return 0;
}

