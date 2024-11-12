int main () {
    int eTnKaOQp, j, flag, QtzEa3ACV, l;
    char c9yBeYjLwr [(934 - 834) + (563 - 562)];
    gets (c9yBeYjLwr);
    flag = (645 - 645);
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
    QtzEa3ACV = strlen (c9yBeYjLwr);
    for (eTnKaOQp = 0; eTnKaOQp <= QtzEa3ACV -1; eTnKaOQp++) {
        if (!(' ' != c9yBeYjLwr[eTnKaOQp])) {
            if (flag == 1) {
                for (j = eTnKaOQp; j <= QtzEa3ACV -1; j = j + 1)
                    c9yBeYjLwr[j - 1] = c9yBeYjLwr[j];
                eTnKaOQp = eTnKaOQp - 1;
                QtzEa3ACV--;
            }
            else
                flag = 1;
        }
        else
            flag = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    {
        eTnKaOQp = 0;
        while (eTnKaOQp <= QtzEa3ACV -1) {
            printf ("%c", c9yBeYjLwr[eTnKaOQp]);
            eTnKaOQp++;
        };
    }
    return 0;
}

