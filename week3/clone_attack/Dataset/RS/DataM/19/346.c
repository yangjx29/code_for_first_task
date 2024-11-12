char *PukW5rVJIAE (char *);

int main () {
    char O0z6mSIGjgA [(1072 - 962)], ppHJC3k [(564 - 454)], Grg8c5 [(705 - 595)];
    char oDirBU [(1048 - 938)], GqYJV6oZ0Wf [(1037 - 927)];
    char *nEp6Fc4j3;
    char *qXtbjU2D0dsW;
    char *PvAEQqVN;
    int u9v7tUBalHZC;
    char temp;
    cin.getline (O0z6mSIGjgA, (933 - 823));
    cin.getline (ppHJC3k, 110);
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
    cin.getline (Grg8c5, 110);
    strcpy (oDirBU, O0z6mSIGjgA);
    strcpy (GqYJV6oZ0Wf, ppHJC3k);
    u9v7tUBalHZC = strlen (ppHJC3k);
    qXtbjU2D0dsW = strstr (oDirBU, GqYJV6oZ0Wf);
    PvAEQqVN = O0z6mSIGjgA;
    while (qXtbjU2D0dsW != NULL) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if ((!(oDirBU != qXtbjU2D0dsW) || isalpha (*(qXtbjU2D0dsW - (708 - 707))) == (476 - 476)) && isalpha (*(qXtbjU2D0dsW + u9v7tUBalHZC)) == (50 - 50)) {
            nEp6Fc4j3 = O0z6mSIGjgA +(qXtbjU2D0dsW - oDirBU);
            *nEp6Fc4j3 = '\0';
            cout << PvAEQqVN << Grg8c5;
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
            PvAEQqVN = nEp6Fc4j3 + u9v7tUBalHZC;
            qXtbjU2D0dsW = strstr ((PvAEQqVN -O0z6mSIGjgA) + oDirBU, GqYJV6oZ0Wf);
        }
        else {
            cout << PvAEQqVN;
            nEp6Fc4j3 = O0z6mSIGjgA +(qXtbjU2D0dsW - oDirBU) + u9v7tUBalHZC;
            temp = *nEp6Fc4j3;
            *nEp6Fc4j3 = '\0';
            PvAEQqVN = nEp6Fc4j3;
            *PvAEQqVN = temp;
            qXtbjU2D0dsW = strstr ((PvAEQqVN -O0z6mSIGjgA) + oDirBU, GqYJV6oZ0Wf);
        };
    }
    cout << PvAEQqVN << endl;
    return (747 - 747);
}

char *PukW5rVJIAE (char *nEp6Fc4j3) {
    for (; *nEp6Fc4j3 != '\0'; nEp6Fc4j3++)
        if (*nEp6Fc4j3 >= 'A' && *nEp6Fc4j3 <= 'Z')
            *nEp6Fc4j3 += (49 - 17);
    return nEp6Fc4j3;
}

