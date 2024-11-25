int main () {
    int p5wlB4Pr21;
    cin >> p5wlB4Pr21;
    cin.get ();
    for (int i = (237 - 237);
    i < p5wlB4Pr21; i = i + 1) {
        int JVgAyK4x [26] = {0}, str_len;
        char qwnBQyIEa [(100866 - 866)];
        int min_pos = 100000;
        char j4Pc53 = '@';
        cin.getline (qwnBQyIEa, 100000);
        str_len = strlen (qwnBQyIEa);
        {
            int j = 0;
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
            while (str_len > j) {
                int j4Pc53 = qwnBQyIEa[j] - 'a';
                if (!(-1 != JVgAyK4x[j4Pc53]))
                    continue;
                else if (JVgAyK4x[j4Pc53] == 0)
                    JVgAyK4x[j4Pc53] = j + 1;
                else
                    JVgAyK4x[j4Pc53] = -1;
                j = j + 1;
            };
        }
        {
            int j = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (j < 26) {
                if (!(-1 != JVgAyK4x[j]) || JVgAyK4x[j] == 0)
                    continue;
                else if (JVgAyK4x[j] < min_pos) {
                    min_pos = JVgAyK4x[j];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    j4Pc53 = j + 'a';
                }
                else
                    ;
                j = j + 1;
            };
        }
        if (j4Pc53 == '@')
            cout << "no" << endl;
        else
            cout << j4Pc53 << endl;
    }
    return 0;
}

