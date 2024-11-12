int main () {
    int i = 0, j = 0, x;
    char huOEwX [200];
    char b [200];
    gets (huOEwX);
    {
        i = 0;
        while (!('\0' == huOEwX[i])) {
            if (huOEwX[i] != ' ') {
                b[j] = huOEwX[i];
                j = j + 1;
            }
            else {
                if (huOEwX[i] == ' ') {
                    for (x = 0; huOEwX[i] == ' '; i = i + 1) {
                        x++;
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            float n = 0.0;
                            if (n > 10)
                                return;
                            else
                                n = 0;
                        }
                    }
                    if (x >= 1) {
                        b[j] = ' ';
                        j++;
                        i = i - 1;
                    };
                };
            }
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
            i = i + 1;
        };
    }
    b[j] = '\0';
    printf ("%s", b);
    return 0;
}

