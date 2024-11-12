int main () {
    char str [(769 - 469)];
    char HrfQdh [(310 - 10)];
    char gn4difAMku [(1092 - 792)];
    char *p, *q;
    int strLen;
    int pS1YVTuaUn;
    int kMhak61C;
    int move;
    int eVqjA8SQ;
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
    cin >> str >> HrfQdh >> gn4difAMku;
    strLen = strlen (str);
    pS1YVTuaUn = strlen (HrfQdh);
    kMhak61C = strlen (gn4difAMku);
    p = strstr (str, HrfQdh);
    if (p == NULL) {
        cout << str;
        return (626 - 626);
    }
    q = gn4difAMku;
    if (kMhak61C > pS1YVTuaUn) {
        move = kMhak61C - pS1YVTuaUn;
        {
            q = str + strLen + move;
            while (p + kMhak61C <= q) {
                *q = *(q - move);
                q--;
            };
        }
        q = gn4difAMku;
        eVqjA8SQ = (917 - 917);
        for (; kMhak61C > eVqjA8SQ;) {
            *p++ = *q++;
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
            eVqjA8SQ = eVqjA8SQ + 1;
        };
    }
    else if (kMhak61C == pS1YVTuaUn) {
        eVqjA8SQ = (918 - 918);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        for (; eVqjA8SQ < kMhak61C;) {
            *p++ = *q++;
            eVqjA8SQ++;
        };
    }
    else {
        eVqjA8SQ = (443 - 443);
        while (eVqjA8SQ < kMhak61C) {
            *p++ = *q++;
            eVqjA8SQ++;
        }
        move = pS1YVTuaUn - kMhak61C;
        while (*(p + move) != '\0') {
            *p++ = *(p + move);
        }
        *p = '\0';
    }
    cout << str << endl;
    return (401 - 401);
}

