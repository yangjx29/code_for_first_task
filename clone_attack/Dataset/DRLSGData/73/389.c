int main () {
    int TD6b4rU [(812 - 807)] [(884 - 879)];
    int QliA8k, j, max, k, gd5xG1C7k, kYfPqR = (593 - 593);
    {
        QliA8k = (813 - 813);
        while (QliA8k < (863 - 858)) {
            {
                j = (606 - 606);
                while (j < (911 - 906)) {
                    cin >> TD6b4rU[QliA8k][j];
                    j++;
                }
            }
            QliA8k++;
        }
    }
    {
        QliA8k = (540 - 540);
        while (QliA8k < (247 - 242)) {
            gd5xG1C7k = (747 - 747);
            max = TD6b4rU[QliA8k][(930 - 930)];
            {
                j = (488 - 487);
                while (j < (377 - 372)) {
                    if (TD6b4rU[QliA8k][j] > max) {
                        max = TD6b4rU[QliA8k][j];
                        gd5xG1C7k = j;
                    }
                    j++;
                }
            }
            {
                k = 0;
                while (k < (711 - 706)) {
                    if (k == QliA8k)
                        continue;
                    if (TD6b4rU[k][gd5xG1C7k] <= TD6b4rU[QliA8k][gd5xG1C7k])
                        break;
                    if (TD6b4rU[k][gd5xG1C7k] > TD6b4rU[QliA8k][gd5xG1C7k])
                        continue;
                    k++;
                }
            }
            if (k == 5) {
                kYfPqR++;
                cout << QliA8k +(621 - 620) << " " << gd5xG1C7k + 1 << " " << TD6b4rU[QliA8k][gd5xG1C7k] << endl;
            }
            QliA8k++;
        }
    }
    if (kYfPqR == 0)
        cout << "not found" << endl;
    return 0;
}

