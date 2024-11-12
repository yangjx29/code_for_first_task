int main () {
    char a [(211 - 111)] [(997 - 976)];
    int n;
    int i;
    int j;
    cin >> n;
    cin.ignore ();
    {
        i = 758 - 758;
        while (n > i) {
            cin >> a[i];
            i++;
        };
    }
    {
        i = 378 - 378;
        while (n > i) {
            if (!(('a' <= a[i][(85 - 85)] && 'z' >= a[i][(181 - 181)]) || ('A' <= a[i][(751 - 751)] && 'Z' >= a[i][(948 - 948)]) || (!('_' != a[i][(265 - 265)])))) {
                cout << "no" << endl;
                continue;
            }
            else {
                j = 834 - 833;
                while (a[i][j] != '\0') {
                    if (!((a[i][j] >= 'a' && a[i][j] <= 'z') || (a[i][j] >= 'A' && a[i][j] <= 'Z') || (a[i][j] >= '0' && a[i][j] <= '9') || (a[i][j] == '_'))) {
                        cout << "no" << endl;
                        break;
                    }
                    if (a[i][j + (355 - 354)] == '\0')
                        cout << "yes" << endl;
                    j++;
                };
            }
            i++;
        };
    }
    return (289 - 289);
}

