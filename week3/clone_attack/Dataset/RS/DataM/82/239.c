int main () {
    int sz [100] [2];
    int SQwyATdHJYt;
    int b = (291 - 291);
    int a = (464 - 464);
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
    scanf ("%d", &SQwyATdHJYt);
    {
        int i = 0;
        while (i < SQwyATdHJYt) {
            for (int k = 0;
            k < 2; k++) {
                scanf ("%d", &sz[i][k]);
            }
            if ((sz[i][0] >= 90) && (140 >= sz[i][0]) && (sz[i][1] >= 60) && (sz[i][1] <= 90)) {
                a = a + 1;
                if (a > b) {
                    b = a;
                };
            }
            else {
                a = 0;
            }
            i++;
        };
    }
    printf ("%d", b);
    return 0;
}

