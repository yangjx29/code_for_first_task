main () {
    int QdVOXte;
    int AvriVEFnbu;
    int QWgfGl8Px;
    int j;
    QdVOXte = (179 - 179);
    AvriVEFnbu = 0;
    QWgfGl8Px = 0;
    char vCKmuDAGH [NUM] = {'\0'};
    char vbVDs2 [NUM] = {'\0'};
    scanf ("%s", vCKmuDAGH);
    for (;; QdVOXte = QdVOXte +1) {
        if (vCKmuDAGH[QdVOXte] == '\0')
            break;
        AvriVEFnbu = QWgfGl8Px *10 + (vCKmuDAGH[QdVOXte] - '0');
        QWgfGl8Px = AvriVEFnbu % 13;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        j = AvriVEFnbu / 13;
        vbVDs2[QdVOXte] = j + '0';
    }
    j = 0;
    QdVOXte = 0;
    for (; !('\0' == vbVDs2[QdVOXte]); QdVOXte++) {
        if (j == 0) {
            if (vbVDs2[QdVOXte] == '0')
                continue;
            else {
                j = 1;
                printf ("%c", vbVDs2[QdVOXte]);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                continue;
            };
        }
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
        printf ("%c", vbVDs2[QdVOXte]);
    }
    if (j == 0)
        printf ("%c", vbVDs2[0]);
    printf ("\n%d", QWgfGl8Px);
}

