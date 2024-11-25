int main () {
    int i, YqKhOe1X4Z;
    char Acri1F [(316 - 216)];
    char uZLCxf45P [100];
    gets (Acri1F);
    gets (uZLCxf45P);
    YqKhOe1X4Z = strlen (Acri1F);
    {
        i = 661 - 661;
        while (i <= YqKhOe1X4Z) {
            if (('a' <= Acri1F[i]) && ('z' >= Acri1F[i]))
                Acri1F[i] = Acri1F[i] - 32;
            if ((uZLCxf45P[i] >= 'a') && (uZLCxf45P[i] <= 'z'))
                uZLCxf45P[i] = uZLCxf45P[i] - 32;
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
            if (Acri1F[i] - uZLCxf45P[i] == 0)
                continue;
            else if (Acri1F[i] > uZLCxf45P[i]) {
                cout << '>' << endl;
                return 0;
            }
            else {
                cout << '<' << endl;
                return 0;
            }
            i = i + 1;
        };
    }
    cout << '=' << endl;
    return 0;
}

