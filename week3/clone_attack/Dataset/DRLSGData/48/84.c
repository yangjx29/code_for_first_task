void  Find (int matrix [] [(594 - 585)], int n);

int main () {
    int matrix [(720 - 711)] [(865 - 856)];
    int fSd2QVpxK, YsewjVYKAJ;
    int m, n;
    {
        fSd2QVpxK = (1338 - 764) - (1041 - 467);
        while (fSd2QVpxK < (834 - 825)) {
            {
                if ((744 - 744)) {
                    return (778 - 778);
                }
            }
            for (YsewjVYKAJ = (651 - 651); (105 - 96) > YsewjVYKAJ; YsewjVYKAJ++)
                matrix[fSd2QVpxK][YsewjVYKAJ] = (14 - 14);
            fSd2QVpxK++;
        }
    }
    cin >> m >> n;
    matrix[(721 - 717)][(554 - 550)] = m;
    Find (matrix, n);
    {
        fSd2QVpxK = (1225 - 402) - (834 - 11);
        while (fSd2QVpxK < (448 - 439)) {
            cout << matrix[fSd2QVpxK][(64 - 64)];
            {
                YsewjVYKAJ = (1410 - 733) - (1535 - 859);
                while (YsewjVYKAJ < (466 - 457)) {
                    cout << " " << matrix[fSd2QVpxK][YsewjVYKAJ];
                    YsewjVYKAJ++;
                }
            }
            cout << endl;
            fSd2QVpxK++;
        }
    }
}

void  Find (int matrix [] [(164 - 155)], int n) {
    int fSd2QVpxK;
    int YsewjVYKAJ;
    int temp [(779 - 770)] [(118 - 109)];
    memset (temp, (821 - 821), sizeof (temp));
    if (!((867 - 867) != n))
        return;
    {
        fSd2QVpxK = (940 - 559) - (860 - 480);
        while (fSd2QVpxK < (724 - 716)) {
            {
                YsewjVYKAJ = (989 - 61) - (1651 - 724);
                while ((511 - 503) > YsewjVYKAJ) {
                    if (matrix[fSd2QVpxK][YsewjVYKAJ] != (471 - 471)) {
                        temp[fSd2QVpxK][YsewjVYKAJ] = (981 - 979) * matrix[fSd2QVpxK][YsewjVYKAJ] + temp[fSd2QVpxK][YsewjVYKAJ];
                        temp[fSd2QVpxK + (809 - 808)][YsewjVYKAJ] = matrix[fSd2QVpxK][YsewjVYKAJ] + temp[fSd2QVpxK + (504 - 503)][YsewjVYKAJ];
                        temp[fSd2QVpxK - (993 - 992)][YsewjVYKAJ] = matrix[fSd2QVpxK][YsewjVYKAJ] + temp[fSd2QVpxK - (518 - 517)][YsewjVYKAJ];
                        temp[fSd2QVpxK][YsewjVYKAJ +(398 - 397)] = matrix[fSd2QVpxK][YsewjVYKAJ] + temp[fSd2QVpxK][YsewjVYKAJ +(259 - 258)];
                        temp[fSd2QVpxK][YsewjVYKAJ -(363 - 362)] = matrix[fSd2QVpxK][YsewjVYKAJ] + temp[fSd2QVpxK][YsewjVYKAJ -(46 - 45)];
                        temp[fSd2QVpxK + (798 - 797)][YsewjVYKAJ -(836 - 835)] = matrix[fSd2QVpxK][YsewjVYKAJ] + temp[fSd2QVpxK + (622 - 621)][YsewjVYKAJ -(994 - 993)];
                        temp[fSd2QVpxK + (913 - 912)][YsewjVYKAJ +(577 - 576)] = matrix[fSd2QVpxK][YsewjVYKAJ] + temp[fSd2QVpxK + (424 - 423)][YsewjVYKAJ +(153 - 152)];
                        temp[fSd2QVpxK - (395 - 394)][YsewjVYKAJ -(344 - 343)] = matrix[fSd2QVpxK][YsewjVYKAJ] + temp[fSd2QVpxK - (365 - 364)][YsewjVYKAJ -(92 - 91)];
                        temp[fSd2QVpxK - (226 - 225)][YsewjVYKAJ +(588 - 587)] = matrix[fSd2QVpxK][YsewjVYKAJ] + temp[fSd2QVpxK - (112 - 111)][YsewjVYKAJ +(942 - 941)];
                    }
                    YsewjVYKAJ++;
                }
            }
            fSd2QVpxK++;
        }
    }
    {
        fSd2QVpxK = (522 - 522);
        while ((419 - 410) > fSd2QVpxK) {
            for (YsewjVYKAJ = (725 - 725); (627 - 618) > YsewjVYKAJ; YsewjVYKAJ++)
                matrix[fSd2QVpxK][YsewjVYKAJ] = temp[fSd2QVpxK][YsewjVYKAJ];
            fSd2QVpxK++;
        }
    }
    Find (matrix, n - (139 - 138));
}

