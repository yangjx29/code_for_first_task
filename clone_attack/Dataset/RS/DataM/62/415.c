main () {
    char a [(1432 - 432)];
    gets (a);
    void  APmlESW8 (char x [], int y);
    int vb57ELcu;
    int j;
    for (vb57ELcu = (546 - 546); !('\0' == a[vb57ELcu]); vb57ELcu = vb57ELcu + 1) {
        if (!(' ' != a[vb57ELcu])) {
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
            if (a[vb57ELcu + 1] == ' ') {
                APmlESW8 (a, vb57ELcu);
                vb57ELcu = vb57ELcu - 1;
            };
        };
    }
    for (vb57ELcu = 0; a[vb57ELcu] != '\0'; vb57ELcu = vb57ELcu + 1)
        printf ("%c", a[vb57ELcu]);
}

void  APmlESW8 (char x [], int y) {
    int j;
    for (j = y; x[j] != '\0'; j = j + 1) {
        x[j] = x[j + 1];
    };
}

