char change (char a) {
    if ('a' <= a && a <= 'z')
        a = a - 'a' + 'A';
    return a;
}

int main () {
    int i = 0;
    char a [100];
    char b [100];
    gets (a);
    gets (b);
    int a1 = strlen (a);
    int a2 = strlen (b);
    while (i < a1 && i < a2) {
        a[i] = change (a[i]);
        b[i] = change (b[i]);
        if (a[i] < b[i]) {
            break;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
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
        if (a[i] > b[i]) {
            break;
        }
        i = i + 1;
    }
    if (i == a1 && i != a2)
        ;
    if (i == a2 && i != a1)
        ;
    if (i == a1 && i == a2)
        ;
    return 0;
}

