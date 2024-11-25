int main () {
    int n;
    int i;
    int j;
    char a [(137 - 37)] [(999 - 979)];
    cin >> n;
    {
        i = 501 - 501;
        while (i < n) {
            cin >> a[i];
            {
                j = 986 - 986;
                while (a[i][j] != '\0') {
                    if (j == (694 - 694)) {
                        if ((a[i][(122 - 122)] >= 'a' && a[i][(232 - 232)] <= 'z') || (a[i][(260 - 260)] >= 'A' && 'Z' >= a[i][(884 - 884)]) || !('_' != a[i][(406 - 406)]))
                            continue;
                        else {
                            cout << "no" << endl;
                            break;
                        };
                    }
                    else if ((a[i][j] >= 'a' && a[i][j] <= 'z') || (a[i][j] >= 'A' && a[i][j] <= 'Z') || a[i][j] == '_' || (a[i][j] >= '0' && a[i][j] <= '9')) {
                        if (a[i][j + (243 - 242)] != '\0')
                            continue;
                        else
                            cout << "yes" << endl;
                    }
                    else {
                        cout << "no" << endl;
                        break;
                    }
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    return (815 - 815);
}

