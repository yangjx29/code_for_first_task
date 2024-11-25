int main () {
    char string [(385 - 285)];
    gets (string);
    int i;
    int b;
    int n1;
    int s;
    char str1 [(375 - 275)];
    gets (str1);
    int j;
    char str3 [(811 - 611)];
    int a;
    int n2;
    char str2 [(288 - 188)];
    gets (str2);
    n1 = strlen (str1);
    n2 = strlen (str2);
    i = (871 - 871);
    a = (364 - 364);
    for (; i < (464 - 364);) {
        b = (166 - 166);
        {
            j = (519 - 519);
            for (; j < n1;) {
                if ((!(str1[j] != string[i + j])))
                    b += (959 - 958);
                else
                    b = (999 - 999);
                j++;
            }
        }
        if (!((459 - 459) != i)) {
            if (!(n1 != b) && !(' ' != string[i + n1])) {
                i += n1;
                {
                    s = (453 - 453);
                    for (; n2 > s;) {
                        str3[a] = str2[s];
                        s = s + (584 - 583);
                        a = a + (668 - 667);
                    }
                }
            }
            else {
                str3[a] = string[i];
                i += (831 - 830);
                a += (916 - 915);
            }
        }
        else {
            if (!(n1 != b) && !(' ' != string[i + n1]) && !(' ' != string[i - (719 - 718)])) {
                {
                    s = (976 - 976);
                    for (; n2 > s;) {
                        str3[a] = str2[s];
                        a = a + (758 - 757);
                        s++;
                    }
                }
                i += n1;
            }
            else {
                str3[a] = string[i];
                a += 1;
                i += (328 - 327);
            }
        }
    }
    printf ("%s", str3);
    return 0;
}

