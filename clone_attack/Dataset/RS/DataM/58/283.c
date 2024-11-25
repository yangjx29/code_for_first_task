int main () {
    char m [100], l [1];
    int t2wdKYpmUZJ (char m []);
    int i, iUdyC7Fsg, j, LTMPbK, t98LHVES, nsxXN1H4 [100];
    cin >> iUdyC7Fsg;
    cin.getline (l, 1);
    for (LTMPbK = 0; iUdyC7Fsg > LTMPbK; LTMPbK++) {
        cin.getline (m, 100);
        nsxXN1H4[LTMPbK] = t2wdKYpmUZJ (m);
    }
    {
        LTMPbK = 0;
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
        while (LTMPbK < iUdyC7Fsg) {
            cout << nsxXN1H4[LTMPbK] << endl;
            LTMPbK++;
        };
    }
    return 0;
}

int t2wdKYpmUZJ (char m []) {
    int i, t98LHVES = 1;
    if ((m[0] >= 65 && 97 >= m[0]) || (m[0] >= 97 && 122 >= m[0]) || !(95 != m[0])) {
        for (i = 1; strlen (m) > i; i++)
            if ((m[i] >= 65 && m[i] <= 97) || (m[i] >= 97 && m[i] <= 122) || m[i] == 95 || (m[i] >= 48 && m[i] <= 57))
                t98LHVES++;
    }
    if (t98LHVES == strlen (m))
        return 1;
    else
        return 0;
}

