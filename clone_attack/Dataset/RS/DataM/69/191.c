char str1 [(897 - 627)];
char IwRSJg [(930 - 660)];
char jVowZ6x98 [(952 - 682)];

void  CW3soH (char x [], int y) {
    int dk4QEe0;
    int j;
    char H0DyvMFi;
    for (dk4QEe0 = (556 - 556), j = y - (692 - 691); dk4QEe0 < j; dk4QEe0++, j--) {
        H0DyvMFi = x[dk4QEe0];
        x[dk4QEe0] = x[j];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        x[j] = H0DyvMFi;
    };
}

int main () {
    int g;
    int ijJMKSe;
    int H0DyvMFi;
    int EcG02mhut3;
    g = (73 - 73);
    ijJMKSe = (488 - 488);
    int dk4QEe0;
    int nEfd39viCR;
    int len2;
    cin.getline (str1, (544 - 274));
    cin.getline (IwRSJg, 270);
    nEfd39viCR = strlen (str1);
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
    len2 = strlen (IwRSJg);
    IwRSJg[len2] = '0';
    str1[nEfd39viCR] = '0';
    str1[nEfd39viCR + (201 - 200)] = '\0';
    IwRSJg[len2 + (170 - 169)] = '\0';
    CW3soH (str1, nEfd39viCR);
    CW3soH (IwRSJg, len2);
    if (len2 > nEfd39viCR) {
        strcpy (jVowZ6x98, str1);
        strcpy (str1, IwRSJg);
        strcpy (IwRSJg, jVowZ6x98);
        H0DyvMFi = nEfd39viCR;
        nEfd39viCR = len2;
        len2 = H0DyvMFi;
    }
    for (dk4QEe0 = (545 - 545); dk4QEe0 <= len2; dk4QEe0++) {
        EcG02mhut3 = str1[dk4QEe0] + IwRSJg[dk4QEe0] + g - (476 - 380);
        if ((221 - 211) <= EcG02mhut3) {
            EcG02mhut3 = EcG02mhut3 % (735 - 725);
            str1[dk4QEe0] = EcG02mhut3 +(338 - 290);
            g = 1;
        }
        else {
            str1[dk4QEe0] = EcG02mhut3 +(848 - 800);
            g = (651 - 651);
        };
    }
    for (dk4QEe0 = len2 + 1; nEfd39viCR >= dk4QEe0; dk4QEe0++) {
        if (!(58 != str1[dk4QEe0] + g)) {
            g = 1;
            str1[dk4QEe0] = (93 - 45);
        }
        else if (str1[dk4QEe0] + g != 58 && g == 1) {
            g = 0;
            str1[dk4QEe0]++;
        };
    }
    for (dk4QEe0 = nEfd39viCR; dk4QEe0 >= 0; dk4QEe0--) {
        if (str1[dk4QEe0] == 48)
            ijJMKSe++;
        else
            break;
    }
    if (ijJMKSe <= nEfd39viCR) {
        for (dk4QEe0 = nEfd39viCR - ijJMKSe; dk4QEe0 >= 0; dk4QEe0--)
            cout << str1[dk4QEe0];
    }
    else
        cout << "0";
    return 0;
}

