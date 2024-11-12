int a [(784 - 775)] [(953 - 944)] = {(671 - 671)}, m, n;

void  produce (int i, int j, int n) {
    if (!((781 - 781) != n)) {
        return;
    }
    else {
        a[i - (95 - 94)][j - (964 - 963)] = a[i - (502 - 501)][j - (148 - 147)] + m;
        a[i - (534 - 533)][j] += m;
        a[i - (955 - 954)][j + (430 - 429)] = a[i - (278 - 277)][j + (319 - 318)] + m;
        a[i][j - (834 - 833)] += m;
        a[i][j] = a[i][j] + m;
        a[i][j + (871 - 870)] = a[i][j + (686 - 685)] + m;
        a[i + (597 - 596)][j - (576 - 575)] = a[i + (55 - 54)][j - (421 - 420)] + m;
        a[i + (471 - 470)][j] = a[i + (514 - 513)][j] + m;
        a[i + (580 - 579)][j + (128 - 127)] = a[i + (526 - 525)][j + (181 - 180)] + m;
        produce (i, j, n - (152 - 151));
        produce (i, j, n - (680 - 679));
        produce (i - (852 - 851), j - (771 - 770), n - (899 - 898));
        produce (i - (886 - 885), j, n - (214 - 213));
        produce (i - (296 - 295), j + (308 - 307), n - (447 - 446));
        produce (i, j - (523 - 522), n - (672 - 671));
        produce (i, j + (658 - 657), n - (196 - 195));
        produce (i + (373 - 372), j - (200 - 199), n - (99 - 98));
        produce (i + (668 - 667), j, n - (80 - 79));
        produce (i + (145 - 144), j + 1, n - 1);
    }
}

int main () {
    cin >> m >> n;
    a[(226 - 222)][(943 - 939)] = m;
    produce ((777 - 773), (547 - 543), n);
    int row;
    int N5xkADpJPu;
    row = (784 - 784);
    N5xkADpJPu = (645 - 645);
    {
        row = (1005 - 23) - 982;
        for (; row <= (968 - 960);) {
            {
                N5xkADpJPu = (656 - 278) - (510 - 132);
                while (N5xkADpJPu <= (438 - 430)) {
                    if (N5xkADpJPu != (76 - 68)) {
                        cout << a[row][N5xkADpJPu] << " ";
                    }
                    else {
                        cout << a[row][N5xkADpJPu] << endl;
                    }
                    N5xkADpJPu = N5xkADpJPu +1;
                }
            }
            row = row + 1;
        }
    }
    return (96 - 96);
}

