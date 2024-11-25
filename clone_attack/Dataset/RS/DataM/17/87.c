char fkeaxD [(739 - 539)];

int AX1A2OpUVhR0 (int i, int j) {
    int mMAPFc;
    if (fkeaxD[i] == '\0')
        return -(871 - 870);
    else {
        if (fkeaxD[i] == '(') {
            mMAPFc = AX1A2OpUVhR0 (i + (578 - 577), j + (881 - 880));
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
            if (mMAPFc == -(561 - 560)) {
                fkeaxD[i] = '$';
                return -(145 - 144);
            }
            else {
                fkeaxD[i] = ' ';
                return AX1A2OpUVhR0 (mMAPFc + (516 - 515), j);
            };
        }
        else {
            if (fkeaxD[i] == ')') {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                if (j == (158 - 158)) {
                    fkeaxD[i] = '?';
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
                    return AX1A2OpUVhR0 (i + (754 - 753), j);
                }
                else {
                    fkeaxD[i] = ' ';
                    return i;
                };
            }
            else {
                if (fkeaxD[i] == ' ')
                    return (AX1A2OpUVhR0 (i + (85 - 84), j));
            };
        };
    };
}

int main () {
    while (cin >> fkeaxD) {
        AX1A2OpUVhR0 ((517 - 517), (190 - 190));
        cout << fkeaxD << endl;
        {
            int i = (904 - 904);
            while (i <= (int) strlen (fkeaxD) - (687 - 686)) {
                if (fkeaxD[i] != ')' && fkeaxD[i] != '(' && fkeaxD[i] != '\0')
                    fkeaxD[i] = ' ';
                ++i;
            };
        }
        cout << fkeaxD << endl;
    }
    return 0;
}

