void  main () {
    int i;
    int FtZVe8p;
    int p [(572 - 463)];
    char PyLEHpa3 [(1098 - 988)];
    char DAnP4HdNY [110];
    for (; !(EOF == scanf ("%s", PyLEHpa3));) {
        strcpy (DAnP4HdNY, PyLEHpa3);
        for (i = (982 - 982); 109 > i; i = i + 1)
            p[i] = (435 - 435);
        for (i = (870 - 870), FtZVe8p = (699 - 699); i < strlen (PyLEHpa3); i++) {
            if (PyLEHpa3[i] == '(')
                p[FtZVe8p++] = i;
            if (PyLEHpa3[i] == ')' && FtZVe8p > 0)
                PyLEHpa3[p[FtZVe8p ---(567 - 566)]] = PyLEHpa3[i] = ' ';
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            if (PyLEHpa3[i] != '(' && PyLEHpa3[i] != ')')
                PyLEHpa3[i] = ' ';
        }
        for (i = 0; i < strlen (PyLEHpa3); i++) {
            if (PyLEHpa3[i] == '(')
                PyLEHpa3[i] = '$';
            if (PyLEHpa3[i] == ')')
                PyLEHpa3[i] = '?';
        }
        printf ("%s\n%s\n", DAnP4HdNY, PyLEHpa3);
    };
}

