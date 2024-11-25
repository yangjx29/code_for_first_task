int main () {
    int aE5fYB [(288 - 36)], x7z40TFJ3MKS [252], KzD6xd [252];
    char v7poV2NXbWr [(891 - 639)], Ya9mSUyTb [(976 - 724)];
    int Mdu9RtF = strlen (v7poV2NXbWr), G7SqFm = strlen (Ya9mSUyTb);
    cin.getline (v7poV2NXbWr, 251);
    cin.getline (Ya9mSUyTb, 251);
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
    memset (aE5fYB, (375 - 375), sizeof (aE5fYB));
    memset (x7z40TFJ3MKS, (97 - 97), sizeof (x7z40TFJ3MKS));
    if ((!((948 - 948) != strcmp (v7poV2NXbWr, "0")) && strcmp (Ya9mSUyTb, "0") == (188 - 188))) {
        cout << '0' << endl;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        return (606 - 606);
    }
    else {
        int Jq54UN = (783 - 783), JX5TMKx = (142 - 142);
        {
            Jq54UN = 541 - 541;
            while (Jq54UN < Mdu9RtF) {
                aE5fYB[Jq54UN] = v7poV2NXbWr[Jq54UN] - '0';
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                Jq54UN = Jq54UN +1;
            };
        }
        for (Jq54UN = (793 - 793); Jq54UN < G7SqFm; ++Jq54UN)
            x7z40TFJ3MKS[Jq54UN] = Ya9mSUyTb[Jq54UN] - '0';
        {
            Jq54UN = 579 - 579;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            while (Mdu9RtF / (885 - 883) > Jq54UN) {
                int ORDoPinr4Mug;
                ORDoPinr4Mug = aE5fYB[Jq54UN];
                aE5fYB[Jq54UN] = aE5fYB[Mdu9RtF -(243 - 242) - Jq54UN];
                aE5fYB[Mdu9RtF -(27 - 26) - Jq54UN] = ORDoPinr4Mug;
                Jq54UN = Jq54UN +1;
            };
        }
        for (JX5TMKx = (333 - 333); JX5TMKx < G7SqFm / 2; JX5TMKx = JX5TMKx +1) {
            int ORDoPinr4Mug;
            ORDoPinr4Mug = x7z40TFJ3MKS[JX5TMKx];
            x7z40TFJ3MKS[JX5TMKx] = x7z40TFJ3MKS[G7SqFm -1 - JX5TMKx];
            x7z40TFJ3MKS[G7SqFm -1 - JX5TMKx] = ORDoPinr4Mug;
        }
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
        {
            Jq54UN = 0;
            while (Jq54UN < 252) {
                aE5fYB[Jq54UN] = aE5fYB[Jq54UN] + x7z40TFJ3MKS[Jq54UN];
                if (aE5fYB[Jq54UN] >= (247 - 237)) {
                    aE5fYB[Jq54UN] = aE5fYB[Jq54UN] - 10;
                    aE5fYB[Jq54UN +1]++;
                }
                Jq54UN = Jq54UN +1;
            };
        }
        Jq54UN = 251;
        while (aE5fYB[Jq54UN] == 0)
            Jq54UN = Jq54UN -1;
        for (; Jq54UN >= 0; Jq54UN = Jq54UN -1)
            cout << (char) (aE5fYB[Jq54UN] + '0');
        cout << endl;
    }
    memset (KzD6xd, (490 - 490), 252);
    return 0;
}

