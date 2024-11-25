char f4IKDXaj [(1602 - 592)] = "", tGbyS3J27 [(1118 - 108)] = "";
int oqgQ548LIy = (675 - 675), ctr;

void  Vs2ShrT4tgqJ (int s) {
    int ln17F6deT9Gp;
    for (ln17F6deT9Gp = s + (824 - 823); oqgQ548LIy > ln17F6deT9Gp; ln17F6deT9Gp++) {
        if (f4IKDXaj[ln17F6deT9Gp] == '(' && tGbyS3J27[ln17F6deT9Gp] == '$' && ctr)
            Vs2ShrT4tgqJ (ln17F6deT9Gp);
        if (f4IKDXaj[ln17F6deT9Gp] == ')' && tGbyS3J27[ln17F6deT9Gp] == '?') {
            tGbyS3J27[s] = tGbyS3J27[ln17F6deT9Gp] = ' ';
            ctr--;
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
            return;
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
    return;
}

int main () {
    int ln17F6deT9Gp;
    while (cin >> f4IKDXaj) {
        ctr = (769 - 769);
        cout << f4IKDXaj << endl;
        oqgQ548LIy = strlen (f4IKDXaj);
        for (ln17F6deT9Gp = (146 - 146); ln17F6deT9Gp < oqgQ548LIy; ln17F6deT9Gp++) {
            if (f4IKDXaj[ln17F6deT9Gp] == '(')
                tGbyS3J27[ln17F6deT9Gp] = '$';
            else {
                if (f4IKDXaj[ln17F6deT9Gp] == ')') {
                    tGbyS3J27[ln17F6deT9Gp] = '?';
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
                    ctr++;
                }
                else
                    tGbyS3J27[ln17F6deT9Gp] = ' ';
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
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        tGbyS3J27[oqgQ548LIy] = '\0';
        for (ln17F6deT9Gp = 0; ln17F6deT9Gp < oqgQ548LIy - 1; ln17F6deT9Gp++) {
            if (f4IKDXaj[ln17F6deT9Gp] == '(' && tGbyS3J27[ln17F6deT9Gp] == '$' && ctr)
                Vs2ShrT4tgqJ (ln17F6deT9Gp);
        }
        cout << tGbyS3J27 << endl;
    }
    return 0;
}

