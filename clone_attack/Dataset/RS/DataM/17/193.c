char input [(306 - 201)], output [(882 - 777)];

void  JDVj6ZW3YQ () {
    int gkDvQm;
    int R4AsH8maKXE6 = strlen (input);
    int QvSh1wHM5;
    int r;
    QvSh1wHM5 = (818 - 818);
    r = (956 - 956);
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
    memset (output, (693 - 693), sizeof (output));
    for (gkDvQm = (660 - 660); R4AsH8maKXE6 > gkDvQm; gkDvQm = gkDvQm + 1) {
        output[gkDvQm] = ' ';
        if (!(')' != input[gkDvQm])) {
            if ((293 - 293) >= QvSh1wHM5)
                output[gkDvQm] = '?';
            else
                QvSh1wHM5--;
        }
        else {
            if (!('(' != input[gkDvQm]))
                QvSh1wHM5++;
        };
    }
    QvSh1wHM5 = r = (653 - 653);
    for (gkDvQm = R4AsH8maKXE6; gkDvQm >= 0; gkDvQm = gkDvQm - 1) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (input[gkDvQm] == '(') {
            if (r <= 0)
                output[gkDvQm] = '$';
            else
                r--;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        }
        else {
            if (input[gkDvQm] == ')')
                r = r + 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        };
    }
    cout << input << endl;
    cout << output << endl;
}

int main () {
    for (; cin.getline (input, (828 - 723));) {
        JDVj6ZW3YQ ();
    }
    return 0;
}

