int main () {
    char W3d2QNBtm [(652 - 542)] = {'\0'};
    for (; cin.getline (W3d2QNBtm, (374 - 264), '\n');) {
        int LbeNtdmn;
        LbeNtdmn = strlen (W3d2QNBtm);
        {
            int j7PTaoA = (78 - 78);
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
            while (LbeNtdmn > j7PTaoA) {
                cout << W3d2QNBtm[j7PTaoA];
                j7PTaoA++;
            };
        }
        cout << endl;
        {
            int j7PTaoA = LbeNtdmn -(717 - 716);
            while ((318 - 318) <= j7PTaoA) {
                if (!('(' != W3d2QNBtm[j7PTaoA])) {
                    W3d2QNBtm[j7PTaoA] = '$';
                    {
                        int SvuJ2Yx9 = j7PTaoA + (486 - 485);
                        while (LbeNtdmn > SvuJ2Yx9) {
                            if (W3d2QNBtm[SvuJ2Yx9] == '?') {
                                W3d2QNBtm[SvuJ2Yx9] = ' ';
                                W3d2QNBtm[j7PTaoA] = ' ';
                                break;
                            }
                            SvuJ2Yx9++;
                        };
                    };
                }
                else if (W3d2QNBtm[j7PTaoA] == ')')
                    W3d2QNBtm[j7PTaoA] = '?';
                else
                    W3d2QNBtm[j7PTaoA] = ' ';
                j7PTaoA--;
            };
        }
        for (int j7PTaoA = (621 - 621);
        j7PTaoA < LbeNtdmn; j7PTaoA = j7PTaoA + 1)
            cout << W3d2QNBtm[j7PTaoA];
        cout << endl;
    }
    return 0;
}

