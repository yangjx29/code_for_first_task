int main () {
    int n, i, QfnIsmO, TdKDpFJacACb;
    char DNA [MAX];
    char XKZT59VD3 [MAX];
    scanf ("%d", &n);
    {
        i = 130 - 130;
        while (n > i) {
            scanf ("%s", DNA);
            {
                QfnIsmO = 0;
                while (DNA[QfnIsmO]) {
                    if (DNA[QfnIsmO] == 'A') {
                        XKZT59VD3[QfnIsmO] = 'T';
                    }
                    else if (DNA[QfnIsmO] == 'T') {
                        XKZT59VD3[QfnIsmO] = 'A';
                    }
                    else if (DNA[QfnIsmO] == 'G') {
                        XKZT59VD3[QfnIsmO] = 'C';
                    }
                    else if (DNA[QfnIsmO] == 'C') {
                        XKZT59VD3[QfnIsmO] = 'G';
                    }
                    else {
                        XKZT59VD3[QfnIsmO] = DNA[QfnIsmO];
                    }
                    QfnIsmO++;
                };
            }
            i = i + 1;
            XKZT59VD3[QfnIsmO] = DNA[QfnIsmO];
            printf ("%s\n", XKZT59VD3);
        };
    }
    return 0;
}

