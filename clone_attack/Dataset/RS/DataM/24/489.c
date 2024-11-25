int main () {
    char s [200] [(710 - 610)];
    char f4zXt5;
    char h [(692 - 592)];
    char kkSrdtKF9Nb [(486 - 386)];
    int dF4d3D, DCoiBhZXldIF, X5Npk2rcDZ, QlYTUxnXNB = (1105 - 105), max = (142 - 142);
    for (dF4d3D = (601 - 601);; dF4d3D++) {
        for (DCoiBhZXldIF = (698 - 698);; DCoiBhZXldIF++) {
            scanf ("%c", &f4zXt5);
            if (f4zXt5 == ' ' || !(',' != f4zXt5) || !('\n' != f4zXt5))
                break;
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
            s[dF4d3D][DCoiBhZXldIF] = f4zXt5;
        }
        s[dF4d3D][DCoiBhZXldIF] = '\0';
        X5Npk2rcDZ = strlen (s[dF4d3D]);
        if (X5Npk2rcDZ == 0)
            continue;
        if (f4zXt5 == '\n')
            break;
        if (X5Npk2rcDZ > max) {
            max = X5Npk2rcDZ;
            strcpy (h, s[dF4d3D]);
        }
        if (X5Npk2rcDZ < QlYTUxnXNB) {
            QlYTUxnXNB = X5Npk2rcDZ;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            strcpy (kkSrdtKF9Nb, s[dF4d3D]);
        };
    }
    printf ("%s\n", h);
    printf ("%s\n", kkSrdtKF9Nb);
    return 0;
}

