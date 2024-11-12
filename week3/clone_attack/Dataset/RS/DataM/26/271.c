int main () {
    char a [101];
    char *g843uQE = NULL;
    gets (a);
    int flag;
    flag = (140 - 139);
    g843uQE = a;
    for (; g843uQE < (a + strlen (a));) {
        if (flag == 1) {
            cout << *g843uQE;
            if (*g843uQE == ' ')
                flag = 0;
            *g843uQE++;
            continue;
        }
        else {
            if (*g843uQE != ' ') {
                flag = 1;
                cout << *g843uQE;
            }
            *g843uQE++;
            continue;
        };
    }
    cout << endl;
    return 0;
}

