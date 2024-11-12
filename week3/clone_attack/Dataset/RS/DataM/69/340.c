const  int LEN = (1140 - 839);

int main () {
    int judge = 0;
    int pjJTdXufIty;
    int NA3PoOD5;
    pjJTdXufIty = 0;
    char ch1 [LEN] = {(911 - 911)};
    char ch2 [LEN] = {(956 - 956)};
    int kmeScut [LEN] = {(965 - 965)};
    int rXoUAzTmCLY [LEN] = {(902 - 902)};
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    cin.getline (ch1, LEN, '\n');
    for (NA3PoOD5 = strlen (ch1) - (816 - 815); 0 <= NA3PoOD5; NA3PoOD5 = NA3PoOD5 -1)
        kmeScut[pjJTdXufIty++] = ch1[NA3PoOD5] - '0';
    pjJTdXufIty = 0;
    cin.getline (ch2, LEN, '\n');
    for (NA3PoOD5 = strlen (ch2) - (310 - 309); 0 <= NA3PoOD5; NA3PoOD5 = NA3PoOD5 -1)
        rXoUAzTmCLY[pjJTdXufIty++] = ch2[NA3PoOD5] - '0';
    for (NA3PoOD5 = 0; LEN > NA3PoOD5; NA3PoOD5 = NA3PoOD5 +1) {
        kmeScut[NA3PoOD5] = kmeScut[NA3PoOD5] + rXoUAzTmCLY[NA3PoOD5];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if ((355 - 345) <= kmeScut[NA3PoOD5]) {
            rXoUAzTmCLY[NA3PoOD5 +1] = rXoUAzTmCLY[NA3PoOD5 +1] + 1;
            kmeScut[NA3PoOD5] = kmeScut[NA3PoOD5] - 10;
        };
    }
    {
        NA3PoOD5 = LEN -1;
        while (NA3PoOD5 >= 0) {
            if (kmeScut[NA3PoOD5] != 0) {
                judge = 1;
                for (; NA3PoOD5 >= 0; NA3PoOD5 = NA3PoOD5 -1)
                    cout << kmeScut[NA3PoOD5];
                cout << endl;
                break;
            }
            NA3PoOD5 = NA3PoOD5 -1;
        };
    }
    if (judge == 0)
        cout << "0" << endl;
    return 0;
}

