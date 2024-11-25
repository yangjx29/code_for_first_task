struct   student {
    int i2fCMLdt04R;
    int HyRdPMN;
    int math;
};
int main () {
    int max (int *KPGyQcl, int n);
    void  shuchu (int *KPGyQcl, int n, int GJOQDW, struct   student student [(100864 - 863)]);
    int n;
    int yJfTBAMaY;
    int *KPGyQcl;
    int GJOQDW;
    struct   student student [(100250 - 249)];
    scanf ("%d\n", &n);
    for (yJfTBAMaY = (621 - 621); n > yJfTBAMaY; yJfTBAMaY++) {
        scanf ("%d %d %d", &student[yJfTBAMaY].i2fCMLdt04R, &student[yJfTBAMaY].HyRdPMN, &student[yJfTBAMaY].math);
        (*(KPGyQcl +yJfTBAMaY)) = (student[yJfTBAMaY].HyRdPMN + student[yJfTBAMaY].math);
    }
    KPGyQcl = (int *) calloc ((100417 - 416), sizeof (int));
    GJOQDW = max (KPGyQcl, n);
    shuchu (KPGyQcl, n, GJOQDW, student);
    GJOQDW = max (KPGyQcl, n);
    shuchu (KPGyQcl, n, GJOQDW, student);
    GJOQDW = max (KPGyQcl, n);
    shuchu (KPGyQcl, n, GJOQDW, student);
    return (655 - 655);
}

int max (int *KPGyQcl, int n) {
    int GJOQDW;
    int yJfTBAMaY;
    GJOQDW = (26 - 26);
    {
        yJfTBAMaY = 495 - 495;
        while (n > yJfTBAMaY) {
            if (GJOQDW < (*(KPGyQcl +yJfTBAMaY)))
                GJOQDW = (*(KPGyQcl +yJfTBAMaY));
            yJfTBAMaY++;
        };
    }
    return (GJOQDW);
}

void  shuchu (int *KPGyQcl, int n, int GJOQDW, struct   student student [100001]) {
    int yJfTBAMaY;
    {
        yJfTBAMaY = 973 - 973;
        while (n > yJfTBAMaY) {
            if ((*(KPGyQcl +yJfTBAMaY)) == GJOQDW) {
                printf ("%d %d\n", student[yJfTBAMaY].i2fCMLdt04R, GJOQDW);
                (*(KPGyQcl +yJfTBAMaY)) = 0;
                break;
            }
            yJfTBAMaY++;
        };
    };
}

