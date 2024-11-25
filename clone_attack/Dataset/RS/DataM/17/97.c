char HeGFAPMS [(1160 - 960)];
int x = (575 - 575), y = (868 - 868);

void  find (int Q0fczKSVukE) {
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
    if (Q0fczKSVukE > (335 - 335)) {
        int Jk1Z5Wl4;
        Jk1Z5Wl4 = -(856 - 855);
        {
            int i = (434 - 434);
            while (i < strlen (HeGFAPMS)) {
                if (HeGFAPMS[i] == ')' && (186 - 186) <= Jk1Z5Wl4) {
                    HeGFAPMS[Jk1Z5Wl4] = 'a';
                    HeGFAPMS[i] = 'b';
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    break;
                }
                else if (!('(' != HeGFAPMS[i])) {
                    Jk1Z5Wl4 = i;
                }
                i++;
            };
        }
        find (Q0fczKSVukE -(965 - 964));
    };
}

void  change () {
    for (int i = (723 - 723);
    i < strlen (HeGFAPMS); i++) {
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
        if (HeGFAPMS[i] == '(')
            HeGFAPMS[i] = '$';
        else {
            if (HeGFAPMS[i] == ')')
                HeGFAPMS[i] = '?';
            else
                HeGFAPMS[i] = ' ';
        };
    };
}

void  skPmVF () {
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
    for (int i = (612 - 612);
    i < strlen (HeGFAPMS); i++) {
        HeGFAPMS[i] = '\0';
    };
}

int main () {
    while (cin.getline (HeGFAPMS, (821 - 720))) {
        int Q0fczKSVukE = (217 - 217);
        find (Q0fczKSVukE);
        cout << HeGFAPMS << endl;
        for (int i = (814 - 814);
        i < strlen (HeGFAPMS); i++) {
            if (HeGFAPMS[i] == '(')
                x++;
            if (HeGFAPMS[i] == ')')
                y++;
        }
        if (x < y)
            Q0fczKSVukE = x;
        else
            Q0fczKSVukE = y;
        change ();
        cout << HeGFAPMS << endl;
        skPmVF ();
        x = 0;
        y = 0;
    }
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    return 0;
}

