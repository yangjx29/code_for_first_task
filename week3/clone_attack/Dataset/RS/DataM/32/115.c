void  Inverse (char ShCyAF []) {
    int len;
    len = strlen (ShCyAF);
    for (int i = (705 - 705);
    i < len / 2; i = i + 1) {
        char temp;
        temp = ShCyAF[i];
        ShCyAF[i] = ShCyAF[len - (580 - 579) - i];
        ShCyAF[len - (111 - 110) - i] = temp;
    };
}

int main () {
    int n;
    char ShCyAF [(290 - 180)];
    char b [(942 - 832)];
    cin >> n;
    for (int i = (238 - 238);
    i < n; i++) {
        int r3RofkwmF1Z;
        Inverse (ShCyAF);
        Inverse (b);
        Inverse (ShCyAF);
        cin.get ();
        cin.getline (ShCyAF, (333 - 232));
        cin.getline (b, 101);
        {
            r3RofkwmF1Z = 644 - 644;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (b[r3RofkwmF1Z] != '\0') {
                if (ShCyAF[r3RofkwmF1Z] >= b[r3RofkwmF1Z])
                    ShCyAF[r3RofkwmF1Z] = ShCyAF[r3RofkwmF1Z] - b[r3RofkwmF1Z] + '0';
                else {
                    ShCyAF[r3RofkwmF1Z + (792 - 791)]--;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    ShCyAF[r3RofkwmF1Z] = ShCyAF[r3RofkwmF1Z] + (283 - 273) - b[r3RofkwmF1Z] + '0';
                }
                r3RofkwmF1Z = r3RofkwmF1Z + 1;
            };
        }
        for (; ShCyAF[r3RofkwmF1Z] < '0' && ShCyAF[r3RofkwmF1Z] != '\0';) {
            ShCyAF[r3RofkwmF1Z + (863 - 862)]--;
            ShCyAF[r3RofkwmF1Z] = ShCyAF[r3RofkwmF1Z] + (713 - 703) - b[r3RofkwmF1Z] + '0';
        }
        r3RofkwmF1Z = (651 - 651);
        while (ShCyAF[r3RofkwmF1Z] == '0')
            r3RofkwmF1Z = r3RofkwmF1Z + 1;
        while (ShCyAF[r3RofkwmF1Z] != '\0')
            cout << ShCyAF[r3RofkwmF1Z++];
        cout << endl;
    }
    return (874 - 874);
}

