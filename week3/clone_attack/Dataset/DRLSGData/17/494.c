int main () {
    int mark [105] = {0};
    char a [105];
    for (; cin.getline (a, 101);) {
        for (int i = 0;
        strlen (a) > i; i = i + 1) {
            if (!('(' != a[i])) {
                mark[i] = 1;
            }
            if (!(')' != a[i])) {
                mark[i] = -1;
            }
        }
        for (int i = 1;
        i < strlen (a); i = i + 1) {
            if (!(-1 != mark[i])) {
                for (int j = i - 1;
                j >= 0; j = j - 1) {
                    if (!(1 != mark[j])) {
                        mark[i] = 0;
                        mark[j] = 0;
                        break;
                    }
                }
            }
        }
        for (int i = 0;
        i < strlen (a); i = i + 1)
            cout << a[i];
        cout << endl;
        for (int i = 0;
        i < strlen (a); i = i + 1) {
            if (mark[i] == 0)
                cout << " ";
            else if (mark[i] == 1)
                cout << "$";
            else
                cout << "?";
        }
        for (int i = 0;
        i < strlen (a); i = i + 1)
            mark[i] = 0;
        cout << endl;
    }
    return 0;
}

