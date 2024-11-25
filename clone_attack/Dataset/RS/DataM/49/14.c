int main () {
    int len;
    int BYqve71D;
    char m [500];
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
    cin.getline (m, 500);
    len = strlen (m);
    {
        int i = 2;
        while (i <= len) {
            for (int hvDM5E7dHKgB = 0;
            hvDM5E7dHKgB <= len - i; hvDM5E7dHKgB = hvDM5E7dHKgB + 1) {
                int q = hvDM5E7dHKgB;
                while (q < i + hvDM5E7dHKgB) {
                    if (!(m[BYqve71D -q - (391 - 390)] == m[q]))
                        break;
                    BYqve71D = i + hvDM5E7dHKgB * 2;
                    if ((q + 1) >= (BYqve71D -q - 2)) {
                        for (int zuLIcB15ky = hvDM5E7dHKgB;
                        zuLIcB15ky < i + hvDM5E7dHKgB; zuLIcB15ky = zuLIcB15ky + 1) {
                            if (zuLIcB15ky == i + hvDM5E7dHKgB - 1)
                                cout << m[zuLIcB15ky] << endl;
                            else
                                cout << m[zuLIcB15ky];
                        }
                        break;
                    }
                    q++;
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
    return 0;
}

