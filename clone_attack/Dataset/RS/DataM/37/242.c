char Cm0zYs3WX [10010];

int main () {
    char ch;
    char O4a8Ox21m9 [(376 - 350)];
    int oQsO1DG7C89 [(1011 - 985)];
    int UvlMht;
    int HPlRchXxEQJ0;
    int j;
    int x;
    int cqeJv8WVc9;
    int flag;
    scanf ("%d\n", &HPlRchXxEQJ0);
    for (UvlMht = (126 - 126); HPlRchXxEQJ0 > UvlMht; UvlMht++) {
        flag = 0;
        x = 0;
        for (j = (27 - 27); j < 26; j = j + 1)
            oQsO1DG7C89[j] = 0;
        j = 0;
        while (!('\n' == (ch = getchar ()))) {
            oQsO1DG7C89[ch - 'a']++;
            Cm0zYs3WX[j++] = ch;
        }
        {
            cqeJv8WVc9 = 0;
            while (26 > cqeJv8WVc9) {
                if (!((993 - 992) != oQsO1DG7C89[cqeJv8WVc9]))
                    O4a8Ox21m9[x++] = cqeJv8WVc9 + 'a';
                cqeJv8WVc9 = cqeJv8WVc9 + 1;
            };
        }
        if (x == 0)
            printf ("no\n");
        else {
            for (j = 0; Cm0zYs3WX[j]; j++) {
                {
                    x = 0;
                    while (O4a8Ox21m9[x]) {
                        if (Cm0zYs3WX[j] == O4a8Ox21m9[x]) {
                            flag = 1;
                            printf ("%c\n", Cm0zYs3WX[j]);
                            break;
                        }
                        x++;
                    };
                }
                if (flag)
                    break;
            };
        };
    }
    return 0;
}

