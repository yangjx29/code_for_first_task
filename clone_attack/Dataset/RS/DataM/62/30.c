int main () {
    int flag;
    flag = 0;
    char ch;
    for (; (ch = getchar ()) != '\n';) {
        if (ch == ' ' && flag == 0) {
            putchar (ch);
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
            flag = 1;
        }
        else {
            if (ch != ' ') {
                putchar (ch);
                flag = 0;
            };
        };
    }
    getchar ();
    getchar ();
    getchar ();
}

