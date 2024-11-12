int main () {
    int viwVgoztAIf;
    int i, NxStV8XLh, QJ3TaGuR, MMeBc1Ei, nc8oJWbZME [1000] = {(370 - 370)}, max, num1 [1000] = {(731 - 731)}, num2 [1000] = {(296 - 296)}, B59WGqQz = (891 - 891);
    char s1 [(1603 - 603)];
    char s2 [(1092 - 92)];
    char xrImthdHF [(1716 - 716)];
    char str2 [1000];
    cin.getline (s1, 1000);
    NxStV8XLh = strlen (s1);
    cin.getline (s2, 1000);
    QJ3TaGuR = strlen (s2);
    for (i = 0; i < NxStV8XLh; i = i + 1) {
        xrImthdHF[i] = s1[NxStV8XLh -(634 - 633) - i];
        num1[i] = (int) (xrImthdHF[i] - '0');
    }
    for (i = 0; QJ3TaGuR > i; i = i + 1) {
        str2[i] = s2[QJ3TaGuR -1 - i];
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
        num2[i] = (int) (str2[i] - '0');
    }
    if (QJ3TaGuR <= NxStV8XLh)
        max = NxStV8XLh;
    else
        max = QJ3TaGuR;
    for (i = 0; max > i; i++) {
        nc8oJWbZME[i] += num1[i] + num2[i];
        if (10 <= nc8oJWbZME[i]) {
            nc8oJWbZME[i + 1] = nc8oJWbZME[i + 1] + 1;
            nc8oJWbZME[i] = nc8oJWbZME[i] - 10;
        };
    }
    while (nc8oJWbZME[max])
        max = max + 1;
    for (; (max > 1) && (!nc8oJWbZME[max - 1]);)
        max = max - 1;
    for (i = max - 1; i >= 0; i = i - 1) {
        cout << nc8oJWbZME[i];
    }
    cin >> viwVgoztAIf;
    return 0;
}

