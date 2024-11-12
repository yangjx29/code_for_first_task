int main () {
    int in8V1Iu [4] = {0};
    int qkUWstb7oIY8, j, vtEu5o2TZb, l, z, EHGMq6O, s, uAsZWJ;
    char ch [4] = {0};
    int x, y, sPx3YgT, YEBxcT2N;
    for (qkUWstb7oIY8 = 1; 5 >= qkUWstb7oIY8; qkUWstb7oIY8 = qkUWstb7oIY8 + 1) {
        for (j = 1; j <= 5; j = j + 1) {
            if (j == qkUWstb7oIY8)
                continue;
            {
                vtEu5o2TZb = 1;
                while (vtEu5o2TZb <= 5) {
                    if (!(j != vtEu5o2TZb) || !(qkUWstb7oIY8 != vtEu5o2TZb))
                        continue;
                    {
                        uAsZWJ = 1;
                        while (5 >= uAsZWJ) {
                            if (uAsZWJ == vtEu5o2TZb || uAsZWJ == j || uAsZWJ == qkUWstb7oIY8)
                                continue;
                            if ((qkUWstb7oIY8 + j) == (vtEu5o2TZb + uAsZWJ) && (qkUWstb7oIY8 + uAsZWJ) > (vtEu5o2TZb + j) && (qkUWstb7oIY8 + vtEu5o2TZb) < j) {
                                s = vtEu5o2TZb;
                                EHGMq6O = j;
                                z = qkUWstb7oIY8;
                                l = uAsZWJ;
                            }
                            uAsZWJ = uAsZWJ + 1;
                        };
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    vtEu5o2TZb++;
                };
            };
        };
    }
    ch[0] = 'z';
    ch[1] = 'q';
    ch[2] = 's';
    ch[3] = 'l';
    in8V1Iu[0] = z;
    in8V1Iu[1] = EHGMq6O;
    in8V1Iu[2] = s;
    in8V1Iu[3] = l;
    for (x = 0; x < 3; x++)
        for (y = 0; y < 3 - x; y = y + 1)
            if (in8V1Iu[y] < in8V1Iu[y + 1]) {
                sPx3YgT = in8V1Iu[y];
                in8V1Iu[y] = in8V1Iu[y + 1];
                in8V1Iu[y + 1] = sPx3YgT;
                YEBxcT2N = ch[y];
                ch[y] = ch[y + 1];
                ch[y + 1] = YEBxcT2N;
            }
    for (qkUWstb7oIY8 = 0; qkUWstb7oIY8 < 4; qkUWstb7oIY8++)
        cout << ch[qkUWstb7oIY8] << " " << in8V1Iu[qkUWstb7oIY8] * 10 << '\n' << endl;
    return 0;
}

