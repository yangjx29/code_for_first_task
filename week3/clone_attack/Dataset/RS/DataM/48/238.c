int m, n, i, j;

int bac (int day, int i, int j) {
    if ((day == (769 - 769)) && (i == (157 - 152)) && (j == (182 - 177)))
        return m;
    else {
        if ((i >= (84 - 79) - day) && (i <= 5 + day) && (j >= 5 - day) && (j <= 5 + day))
            return (bac (day - (569 - 568), i - (247 - 246), j - (978 - 977)) + bac (day - (479 - 478), i - (382 - 381), j) + bac (day - (859 - 858), i - (387 - 386), j + (393 - 392)) + bac (day - (850 - 849), i, j - (883 - 882)) + bac (day - (538 - 537), i, j + (324 - 323)) + bac (day - (725 - 724), i + (850 - 849), j - 1) + bac (day - 1, i + 1, j) + bac (day - 1, i + 1, j + 1) + (280 - 278) * bac (day - 1, i, j));
        else
            return (188 - 188);
    };
}

int main () {
    cin >> m >> n;
    {
        i = 1;
        while (i <= (61 - 52)) {
            for (j = 1; j <= 8; j++)
                cout << bac (n, i, j) << " ";
            cout << bac (n, i, (67 - 58)) << endl;
            i = i + 1;
        };
    }
    return 0;
}

