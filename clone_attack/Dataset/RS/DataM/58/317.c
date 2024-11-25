int main () {
    int Hhe57s4ibN;
    char uZnm4RkT [81];
    cin >> Hhe57s4ibN;
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
    cin.get ();
    while (0 < Hhe57s4ibN) {
        int i = 1, kYmpWrE = 0;
        cin.getline (uZnm4RkT, 81);
        if (!('_' != uZnm4RkT[0]) || ('a' <= uZnm4RkT[0] && 'z' >= uZnm4RkT[0]) || ('A' <= uZnm4RkT[0] && 'Z' >= uZnm4RkT[0]))
            kYmpWrE = 1;
        while (!(0 == uZnm4RkT[i])) {
            if (kYmpWrE == 0)
                break;
            else {
                if ((uZnm4RkT[i] >= 'a' && uZnm4RkT[i] <= 'z') || (uZnm4RkT[i] >= 'A' && uZnm4RkT[i] <= 'Z') || (uZnm4RkT[i] >= '0' && uZnm4RkT[i] <= '9') || uZnm4RkT[i] == '_')
                    kYmpWrE = 1;
                else
                    kYmpWrE = 0;
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
        }
        Hhe57s4ibN = Hhe57s4ibN -1;
        cout << kYmpWrE << endl;
    }
    return 0;
}

