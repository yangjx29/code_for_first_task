int main () {
    int count = 0, Dz65pZGCjUOc = 1;
    char aEwW3QiTn4 [41], *p = NULL;
    int o3GgZK;
    int i;
    cin >> o3GgZK;
    for (i = 1; i <= o3GgZK; i++) {
        cin >> aEwW3QiTn4;
        p = aEwW3QiTn4;
        if (Dz65pZGCjUOc == 1) {
            Dz65pZGCjUOc = 0;
            cout << p;
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
            count = strlen (p);
        }
        else if (count + strlen (p) + 1 <= 80) {
            cout << " " << p;
            count = count + strlen (p) + 1;
        }
        else {
            cout << endl << p;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            count = strlen (p);
        };
    }
    return 0;
}

