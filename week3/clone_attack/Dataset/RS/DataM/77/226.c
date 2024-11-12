int main () {
    char str [(925 - 425)];
    char s1;
    gets (str);
    int UwsgBb8odi, j, t, boy [(524 - 24)], O1FdWKhzwi2 [500], J6lhiZSngdJ = 0, zrUicwhHo = 0, list [500];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    s1 = str[0];
    {
        UwsgBb8odi = 0;
        while (strlen (str) > UwsgBb8odi) {
            if (!(s1 != str[UwsgBb8odi])) {
                J6lhiZSngdJ++;
                list[J6lhiZSngdJ] = UwsgBb8odi;
            }
            else {
                zrUicwhHo++;
                O1FdWKhzwi2[zrUicwhHo] = UwsgBb8odi;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                boy[zrUicwhHo] = list[J6lhiZSngdJ];
                J6lhiZSngdJ = J6lhiZSngdJ -1;
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
            UwsgBb8odi = UwsgBb8odi +1;
        };
    }
    for (UwsgBb8odi = (674 - 673); zrUicwhHo >= UwsgBb8odi; UwsgBb8odi++) {
        j = 729 - 728;
        while (UwsgBb8odi > j) {
            if (O1FdWKhzwi2[UwsgBb8odi] < O1FdWKhzwi2[j]) {
                t = O1FdWKhzwi2[UwsgBb8odi];
                O1FdWKhzwi2[UwsgBb8odi] = O1FdWKhzwi2[j];
                O1FdWKhzwi2[j] = t;
                t = boy[UwsgBb8odi];
                boy[UwsgBb8odi] = boy[j];
                boy[j] = t;
            }
            j = j + 1;
        };
    }
    {
        UwsgBb8odi = 1;
        while (UwsgBb8odi <= zrUicwhHo) {
            cout << boy[UwsgBb8odi] << " " << O1FdWKhzwi2[UwsgBb8odi];
            if (UwsgBb8odi != zrUicwhHo)
                cout << endl;
            UwsgBb8odi = UwsgBb8odi +1;
        };
    }
    return 0;
}

