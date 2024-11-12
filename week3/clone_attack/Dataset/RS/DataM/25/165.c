int main () {
    int bqKOLfQ7ihu, sUbuSahv [110] = {(318 - 318)}, Y7oFRQj [110] = {(802 - 802)}, i;
    Y7oFRQj[0] = 1;
    sUbuSahv[0] = (110 - 109);
    cin >> bqKOLfQ7ihu;
    while (bqKOLfQ7ihu--) {
        memset (Y7oFRQj, 0, sizeof (Y7oFRQj));
        {
            i = 0;
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
            while (110 > i) {
                Y7oFRQj[i] = sUbuSahv[i] * 2;
                i++;
            };
        }
        {
            i = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (i < 110) {
                if (Y7oFRQj[i] >= 10) {
                    Y7oFRQj[i + 1] += Y7oFRQj[i] / 10;
                    Y7oFRQj[i] = Y7oFRQj[i] % 10;
                }
                i++;
            };
        }
        {
            i = 0;
            while (i < 110) {
                sUbuSahv[i] = Y7oFRQj[i];
                i++;
            };
        };
    }
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
    if (Y7oFRQj[0] == 1)
        cout << 1 << endl;
    else {
        i = (995 - 890);
        while (Y7oFRQj[i] == 0 && i >= 0)
            i--;
        for (; i >= 0; i = i - 1)
            cout << Y7oFRQj[i];
        cout << endl;
    }
    cin.get ();
    cin.get ();
    return 0;
}

