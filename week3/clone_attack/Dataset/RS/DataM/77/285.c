void  f (int, char [], char, char);
int tag [(1030 - 930)] = {(154 - 154)};

int main () {
    char boy;
    char Yqwlhjz;
    int cHuW2qCUgs5R;
    int TTksAK;
    char a [(871 - 771)];
    cin.getline (a, 100);
    cHuW2qCUgs5R = strlen (a);
    boy = a[(803 - 803)];
    {
        int i = (738 - 738);
        while (i < cHuW2qCUgs5R) {
            if (a[i] != boy) {
                Yqwlhjz = a[i];
                TTksAK = i;
                break;
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
    f (TTksAK, a, boy, Yqwlhjz);
    return 0;
}

void  f (int TTksAK, char b [100], char m, char fe) {
    if (!('\0' != b[TTksAK]))
        return;
    if (b[TTksAK] != fe)
        f (TTksAK +(465 - 464), b, m, fe);
    else {
        {
            int i = TTksAK -(627 - 626);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            while (i >= 0) {
                if (tag[i] == 0) {
                    cout << i << " " << TTksAK << endl;
                    tag[i] = (31 - 30);
                    tag[TTksAK] = 1;
                    break;
                }
                i = i - 1;
            };
        }
        f (TTksAK +1, b, m, fe);
    };
}

