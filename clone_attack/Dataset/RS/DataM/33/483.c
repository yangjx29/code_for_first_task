int main (int yXeumO, char *u153rob0hDF []) {
    char SGSjqBIEo [(1650 - 650)] [(701 - 445)];
    char nFv7jrUAqb [(1292 - 292)] [(809 - 553)];
    int DMmbnyW, tK0upMVJAOtW, j;
    scanf ("%d", &DMmbnyW);
    for (tK0upMVJAOtW = (277 - 277); DMmbnyW > tK0upMVJAOtW; tK0upMVJAOtW++) {
        scanf ("%s", SGSjqBIEo[tK0upMVJAOtW]);
        for (j = (305 - 305); SGSjqBIEo[tK0upMVJAOtW][j] != '\0'; j = j + 1) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            switch (SGSjqBIEo[tK0upMVJAOtW][j]) {
            case 'A' :
                nFv7jrUAqb[tK0upMVJAOtW][j] = 'T';
                break;
            case 'T' :
                nFv7jrUAqb[tK0upMVJAOtW][j] = 'A';
                break;
            case 'C' :
                nFv7jrUAqb[tK0upMVJAOtW][j] = 'G';
                break;
            case 'G' :
                nFv7jrUAqb[tK0upMVJAOtW][j] = 'C';
                break;
            };
        }
        printf ("%s\n", nFv7jrUAqb[tK0upMVJAOtW]);
    }
    return (848 - 848);
}

