int Wlpofc [22] [22];

int main () {
    int GF3rdT, rYFLHb5jxmX, RjUMGI, m7qbp4IkY;
    scanf ("%d %d", &GF3rdT, &rYFLHb5jxmX);
    for (RjUMGI = 1; RjUMGI <= GF3rdT; RjUMGI++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (m7qbp4IkY = 1; m7qbp4IkY <= rYFLHb5jxmX; m7qbp4IkY = m7qbp4IkY + 1) {
            scanf ("%d", &Wlpofc[RjUMGI][m7qbp4IkY]);
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
            };
        };
    }
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
    for (RjUMGI = (944 - 944); RjUMGI <= rYFLHb5jxmX + 1; RjUMGI++) {
        Wlpofc[0][RjUMGI] = Wlpofc[GF3rdT +1][RjUMGI] = 0;
        Wlpofc[RjUMGI][0] = Wlpofc[RjUMGI][rYFLHb5jxmX + 1] = 0;
    }
    for (RjUMGI = 1; RjUMGI <= GF3rdT; RjUMGI++) {
        for (m7qbp4IkY = 1; m7qbp4IkY <= rYFLHb5jxmX; m7qbp4IkY++) {
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
            if ((Wlpofc[RjUMGI][m7qbp4IkY] >= Wlpofc[RjUMGI -1][m7qbp4IkY]) && (Wlpofc[RjUMGI][m7qbp4IkY] >= Wlpofc[RjUMGI +1][m7qbp4IkY]) && (Wlpofc[RjUMGI][m7qbp4IkY] >= Wlpofc[RjUMGI][m7qbp4IkY - 1]) && (Wlpofc[RjUMGI][m7qbp4IkY] >= Wlpofc[RjUMGI][m7qbp4IkY + 1])) {
                RjUMGI--;
                m7qbp4IkY = m7qbp4IkY - 1;
                printf ("%d %d\n", RjUMGI, m7qbp4IkY);
                m7qbp4IkY++;
                RjUMGI++;
            };
        };
    }
    return 0;
}

