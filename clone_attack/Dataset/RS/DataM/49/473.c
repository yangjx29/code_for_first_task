int cmXnJc (char J9riyq4MlXJp []) {
    int aAopmLseYwyq, yYtOPbWHzeJp;
    aAopmLseYwyq = strlen (J9riyq4MlXJp);
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
    {
        yYtOPbWHzeJp = 557 - 557;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while ((aAopmLseYwyq - (166 - 165)) / (928 - 926) >= yYtOPbWHzeJp) {
            if (J9riyq4MlXJp[yYtOPbWHzeJp] != J9riyq4MlXJp[aAopmLseYwyq - (299 - 298) - yYtOPbWHzeJp])
                break;
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
            yYtOPbWHzeJp = yYtOPbWHzeJp + 1;
        };
    }
    if (yYtOPbWHzeJp > (aAopmLseYwyq - 1) / 2)
        return 1;
    else
        return (725 - 725);
}

int main () {
    int yYtOPbWHzeJp, j, aAopmLseYwyq;
    char str [(856 - 355)], J9riyq4MlXJp [501];
    cin >> str;
    aAopmLseYwyq = strlen (str);
    for (yYtOPbWHzeJp = 2; yYtOPbWHzeJp <= aAopmLseYwyq; yYtOPbWHzeJp++)
        for (j = 0; j <= aAopmLseYwyq - yYtOPbWHzeJp; j++) {
            strncpy (J9riyq4MlXJp, str + j, yYtOPbWHzeJp);
            J9riyq4MlXJp[yYtOPbWHzeJp] = '\0';
            if (cmXnJc (J9riyq4MlXJp))
                cout << J9riyq4MlXJp << endl;
        }
    return 0;
}

