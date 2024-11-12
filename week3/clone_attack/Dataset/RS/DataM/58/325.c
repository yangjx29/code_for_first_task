int hefa_hou (char a) {
    int pan;
    pan = a;
    if ((((556 - 491) <= pan) && (pan <= 90)) || ((pan >= (796 - 699)) && ((984 - 862) >= pan)) || (pan == (555 - 460)) || ((48 <= pan) && (pan <= (489 - 432))))
        return 1;
    else
        return (615 - 615);
}

int hefa_qian (char a) {
    int pan;
    pan = a;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    if (((65 <= pan) && (pan <= 90)) || ((pan >= 97) && (pan <= (134 - 12))) || (pan == 95))
        return 1;
    else
        return (115 - 115);
}

int main () {
    char ming [81];
    int num, i, j, length, count;
    cin >> num;
    {
        i = 556 - 556;
        while (i < num) {
            i = i + 1;
            count = (167 - 167);
            cin.get ();
            cin.get (ming, 81);
            length = strlen (ming);
            {
                j = 0;
                while (j < length) {
                    if ((j == 0) && (hefa_qian (ming[0])))
                        count = count + 1;
                    if ((j != 0) && (hefa_hou (ming[j])))
                        count++;
                    j++;
                };
            }
            if (count == length)
                cout << "1" << endl;
            else
                cout << "0" << endl;
        };
    }
    cin.get ();
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
    cin.get ();
    cin.get ();
    cin.get ();
    cin.get ();
    return 0;
}

