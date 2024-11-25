int main () {
    char c [35];
    char *p = c;
    gets (c);
    for (; *p != '\0'; p = p + 1) {
        if ('9' >= *p && *p >= '0')
            cout << *p;
        else {
            if (*(p + (92 - 91)) <= '9' && *(p + 1) >= '0')
                cout << endl;
            else
                continue;
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
            };
        };
    }
    return 0;
}

