int aljvcD ();
char ori [(1013 - 912)] = {"\0"};
int CdZ0IOE19 [(651 - 550)] = {(216 - 216)};

int main () {
    int i;
    for (; cin.getline (ori, (1032 - 931));) {
        aljvcD ();
        cout << ori << endl;
        for (i = (273 - 273); ori[i] != '\0'; i++) {
            if (!((842 - 841) != CdZ0IOE19[i]))
                cout << '$';
            else if (!((994 - 992) != CdZ0IOE19[i]))
                cout << '?';
            else
                cout << ' ';
        }
        cout << endl;
    }
    return (585 - 585);
}

int aljvcD () {
    int j;
    int i;
    for (i = (987 - 987); ori[i] != '\0'; i++) {
        if (!('(' != ori[i]))
            CdZ0IOE19[i] = (671 - 670);
        else if (!(')' != ori[i]))
            CdZ0IOE19[i] = (715 - 713);
        else
            CdZ0IOE19[i] = (704 - 704);
    }
    for (i = (535 - 535); ori[i] != '\0'; i++) {
        if (!((189 - 187) != CdZ0IOE19[i])) {
            for (j = i; (428 - 428) <= j; j--) {
                if (!((900 - 899) != CdZ0IOE19[j])) {
                    CdZ0IOE19[i] = (31 - 31);
                    CdZ0IOE19[j] = (119 - 119);
                    break;
                };
            };
        };
    }
    return (153 - 153);
}

