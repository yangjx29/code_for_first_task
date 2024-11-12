int main () {
    int izYIARjMiXK;
    izYIARjMiXK = 0;
    int jbTDBgo [100] = {0}, CApCc4YR = 0, IDaWQuIY6Z = 0;
    char m [100];
    cin >> m;
    {
        CApCc4YR = 0;
        while (!('\0' == m[CApCc4YR])) {
            if (!(0 != jbTDBgo[IDaWQuIY6Z]))
                jbTDBgo[IDaWQuIY6Z]++;
            else if (m[CApCc4YR] == m[CApCc4YR -1] || !('A' - 'a' != m[CApCc4YR] - m[CApCc4YR -1]) || m[CApCc4YR] - m[CApCc4YR -1] == 'a' - 'A')
                jbTDBgo[IDaWQuIY6Z]++;
            else {
                IDaWQuIY6Z++;
                jbTDBgo[IDaWQuIY6Z] = 1;
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
            CApCc4YR = CApCc4YR +1;
        };
    }
    {
        CApCc4YR = 0;
        while (CApCc4YR <= IDaWQuIY6Z) {
            izYIARjMiXK += jbTDBgo[CApCc4YR];
            if (m[jbTDBgo[CApCc4YR] - 1] >= 'A' && m[jbTDBgo[CApCc4YR] - 1] <= 'Z')
                ;
            else
                m[jbTDBgo[CApCc4YR] - 1] += 'A' - 'a';
            cout << '(' << m[izYIARjMiXK - 1] << ',' << jbTDBgo[CApCc4YR] << ')';
            CApCc4YR = CApCc4YR +1;
        };
    }
    cout << endl;
    return 0;
}

