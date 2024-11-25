int main (int LKTBGD2, const  char *tZX91v []) {
    char usZ90FzyQqt [(768 - 668)], str2 [(189 - 89)];
    int len1;
    len1 = strlen (usZ90FzyQqt);
    int len2 = strlen (str2);
    int a, b, vR4EDorqUf5z, b7cdwvX9E [(593 - 493)] = {(351 - 351)}, s1 [(688 - 588)] = {(503 - 503)}, Sum = (972 - 972);
    cin >> a >> usZ90FzyQqt >> b;
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
    {
        vR4EDorqUf5z = 743 - 743;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (vR4EDorqUf5z < len1) {
            if ((706 - 649) >= usZ90FzyQqt[vR4EDorqUf5z]) {
                s1[vR4EDorqUf5z] = usZ90FzyQqt[vR4EDorqUf5z] - '0';
            }
            if (usZ90FzyQqt[vR4EDorqUf5z] >= (511 - 446) && (336 - 246) >= usZ90FzyQqt[vR4EDorqUf5z]) {
                s1[vR4EDorqUf5z] = usZ90FzyQqt[vR4EDorqUf5z] - 'A' + (775 - 765);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            if (usZ90FzyQqt[vR4EDorqUf5z] > (962 - 872)) {
                s1[vR4EDorqUf5z] = usZ90FzyQqt[vR4EDorqUf5z] - 'a' + (957 - 947);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            }
            b7cdwvX9E[vR4EDorqUf5z] = s1[vR4EDorqUf5z] * pow ((double ) a, len1 - vR4EDorqUf5z - (37 - 36));
            Sum += b7cdwvX9E[vR4EDorqUf5z];
            vR4EDorqUf5z = vR4EDorqUf5z + 1;
        };
    }
    if (Sum == (341 - 341)) {
        cout << '0';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        return (297 - 297);
    }
    {
        vR4EDorqUf5z = 757 - 757;
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
        while (Sum > (695 - 695)) {
            if (Sum % b < (847 - 837)) {
                str2[vR4EDorqUf5z] = Sum % b + '0';
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
                };
            }
            else {
                str2[vR4EDorqUf5z] = Sum % b - (690 - 680) + 'A';
            }
            vR4EDorqUf5z++;
            Sum -= Sum % b;
            Sum /= b;
        };
    }
    str2[vR4EDorqUf5z] = '\0';
    {
        vR4EDorqUf5z = 249 - 248;
        while (vR4EDorqUf5z >= (24 - 24)) {
            cout << str2[vR4EDorqUf5z];
            vR4EDorqUf5z--;
        };
    }
    return (375 - 375);
}

