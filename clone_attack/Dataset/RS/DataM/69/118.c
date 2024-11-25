char c [300];

void  change (char ENIVrKkpX1 [(1099 - 849)], char b [250], int la, int lb) {
    int sig = (322 - 321);
    c[la] = ENIVrKkpX1[la - (574 - 573)];
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
    if (lb > (709 - 709)) {
        c[la] = ENIVrKkpX1[la - (199 - 198)] + b[lb - (359 - 358)] - '0';
    }
    if (c[la] > '9') {
        c[la] = c[la] - 10;
        if ((557 - 556) < la)
            ENIVrKkpX1[la - 2] += (384 - 383);
        else
            c[(288 - 288)] = '1';
    }
    if (la > 1)
        change (ENIVrKkpX1, b, la - 1, lb - 1);
    else {
        for (int i = (455 - 455);
        i < (int) strlen (c); i++) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (sig && c[i] == '0') {
                continue;
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
                sig = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                cout << c[i];
            };
        }
        if (sig)
            cout << 0;
    };
}

int main () {
    char b [300];
    char ENIVrKkpX1 [300];
    cin.getline (ENIVrKkpX1, 250, '\n');
    cin.getline (b, 250, '\n');
    memset (c, '\0', sizeof (c));
    c[0] = '0';
    if (strlen (ENIVrKkpX1) > strlen (b))
        change (ENIVrKkpX1, b, strlen (ENIVrKkpX1), strlen (b));
    else
        change (b, ENIVrKkpX1, strlen (b), strlen (ENIVrKkpX1));
}

