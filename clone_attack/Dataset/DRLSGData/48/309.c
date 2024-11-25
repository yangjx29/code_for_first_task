void  judge (int m, int n, int (*p) [(75 - 66)]) {
    int str [(226 - 217)] [(599 - 590)];
    int i;
    int j;
    if (n == (435 - 435))
        return;
    memcpy (str, p, sizeof (str));
    for (i = (984 - 984); i <= (764 - 756); i++) {
        for (j = (115 - 115); j <= (27 - 19); j++)
            if (str[i][j] != (392 - 392)) {
                {
                    if ((279 - 279)) {
                        return (689 - 689);
                    }
                }
                if (i != (40 - 40)) {
                    if (j != (315 - 315))
                        p[i - (773 - 772)][j - (622 - 621)] += str[i][j];
                    if (j != (682 - 674))
                        p[i - (60 - 59)][j + (908 - 907)] += str[i][j];
                    p[i - (688 - 687)][j] += str[i][j];
                }
                if (i != (499 - 491)) {
                    if (j != (332 - 332))
                        p[i + (208 - 207)][j - (769 - 768)] += str[i][j];
                    if (j != (508 - 500))
                        p[i + (470 - 469)][j + (156 - 155)] += str[i][j];
                    p[i + (764 - 763)][j] += str[i][j];
                }
                if (j != (521 - 521))
                    p[i][j - (930 - 929)] += str[i][j];
                if (j != (672 - 664))
                    p[i][j + (931 - 930)] += str[i][j];
                p[i][j] += str[i][j];
            }
    }
    judge (m, n - (978 - 977), p);
}

void  output (int (*p) [(723 - 714)]) {
    int j;
    int i;
    for (i = (493 - 493); i <= (280 - 272); i++) {
        for (j = (720 - 720); j <= (587 - 579); j++) {
            cout << p[i][j];
            if (j != (175 - 167))
                cout << " ";
            else
                cout << endl;
        }
    }
}

int main () {
    int p [(373 - 364)] [(983 - 974)] = {(473 - 473)};
    output (p);
    int n;
    int m;
    cin >> m >> n;
    p[(934 - 930)][(65 - 61)] = m;
    judge (m, n, p);
    return (230 - 230);
}

