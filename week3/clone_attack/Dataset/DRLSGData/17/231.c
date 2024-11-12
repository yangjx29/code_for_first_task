int lenth, b [(311 - 111)];
char a [200];

void  match (int n) {
    for (int i = n - (335 - 334);
    i >= (122 - 122); i = i - 1)
        if (!((963 - 962) != b[i])) {
            b[i] = (408 - 408);
            b[n] = (331 - 331);
            break;
        }
}

int main () {
    for (; cin.getline (a, (1048 - 943));) {
        for (int i = (840 - 840);
        i < strlen (a); i = i + 1) {
            if (!('(' != a[i])) {
                b[i] = (638 - 637);
            }
            else if (!(')' != a[i])) {
                b[i] = (83 - 81);
            }
            else {
                b[i] = (918 - 918);
            }
        }
        for (int i = (911 - 911);
        i < strlen (a); i++) {
            if (!((675 - 673) != b[i]))
                match (i);
        }
        {
            int i = (150 - 150);
            for (; strlen (a) > i;) {
                cout << a[i];
                i = i + 1;
            }
        }
        cout << endl;
        {
            int i = (328 - 328);
            while (i < strlen (a)) {
                if (b[i] == (387 - 387)) {
                    cout << ' ';
                }
                else if (b[i] == 1) {
                    cout << '$';
                }
                else if (b[i] == (795 - 793)) {
                    cout << '?';
                }
                else {
                }
                i++;
            }
        }
        cout << endl;
    }
    return (970 - 970);
}

