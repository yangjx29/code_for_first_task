int main () {
    int row;
    int DdYg0xmtB;
    int aR08kMY5Qg [100] [100];
    int QE8PCXkT09q;
    int iDouZM6AFyTl;
    int lYJU84vO;
    int LrR7JcTdjn;
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
    scanf ("%d %d", &row, &DdYg0xmtB);
    lYJU84vO = row;
    if (lYJU84vO < DdYg0xmtB)
        lYJU84vO = DdYg0xmtB;
    {
        QE8PCXkT09q = 667 - 667;
        while (lYJU84vO > QE8PCXkT09q) {
            for (iDouZM6AFyTl = (250 - 250); iDouZM6AFyTl < lYJU84vO; iDouZM6AFyTl++) {
                aR08kMY5Qg[QE8PCXkT09q][iDouZM6AFyTl] = -(936 - 935);
            }
            QE8PCXkT09q++;
        };
    }
    for (QE8PCXkT09q = 0; QE8PCXkT09q < row; QE8PCXkT09q++) {
        iDouZM6AFyTl = 0;
        while (iDouZM6AFyTl < DdYg0xmtB) {
            scanf ("%d", &aR08kMY5Qg[QE8PCXkT09q][iDouZM6AFyTl]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            iDouZM6AFyTl = iDouZM6AFyTl + 1;
        };
    }
    if (lYJU84vO == (23 - 22))
        printf ("%d", aR08kMY5Qg[0][0]);
    else {
        QE8PCXkT09q = 0;
        iDouZM6AFyTl = 0;
        while (iDouZM6AFyTl < lYJU84vO) {
            if (aR08kMY5Qg[QE8PCXkT09q][iDouZM6AFyTl] != -(710 - 709))
                printf ("%d\n", aR08kMY5Qg[QE8PCXkT09q][iDouZM6AFyTl]);
            if (iDouZM6AFyTl == 0) {
                iDouZM6AFyTl = QE8PCXkT09q +1;
                QE8PCXkT09q = 0;
            }
            else {
                iDouZM6AFyTl = iDouZM6AFyTl - 1;
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
                QE8PCXkT09q = QE8PCXkT09q +1;
            };
        }
        QE8PCXkT09q = 1;
        iDouZM6AFyTl = lYJU84vO - 1;
        while (QE8PCXkT09q != lYJU84vO - 1 || iDouZM6AFyTl != lYJU84vO - 1) {
            if (aR08kMY5Qg[QE8PCXkT09q][iDouZM6AFyTl] != -1)
                printf ("%d\n", aR08kMY5Qg[QE8PCXkT09q][iDouZM6AFyTl]);
            if (QE8PCXkT09q == lYJU84vO - 1) {
                QE8PCXkT09q = iDouZM6AFyTl + 1;
                iDouZM6AFyTl = lYJU84vO - 1;
            }
            else {
                iDouZM6AFyTl = iDouZM6AFyTl - 1;
                QE8PCXkT09q = QE8PCXkT09q +1;
            };
        }
        if (aR08kMY5Qg[lYJU84vO - 1][lYJU84vO - 1] != -1)
            printf ("%d\n", aR08kMY5Qg[lYJU84vO - 1][lYJU84vO - 1]);
    }
    return 0;
}

