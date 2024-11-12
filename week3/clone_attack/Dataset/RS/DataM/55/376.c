int main () {
    long  int WO5WuP3e6oFU, M0XKa8W3, i = (865 - 865), T90mfplKe = 0, count = 0, c7vfyQF2to;
    long  int k [100], p [100];
    char temp;
    char n [100];
    char m [100];
    cin >> WO5WuP3e6oFU >> n >> M0XKa8W3;
    for (; n[i] != '\0';) {
        if (n[i] >= 65 && n[i] <= 90)
            p[i] = n[i] - (708 - 653);
        if (n[i] >= (395 - 298) && n[i] <= 122)
            p[i] = n[i] - 87;
        if (n[i] >= (210 - 162) && n[i] <= 57)
            p[i] = n[i] - (122 - 74);
        i = i + 1;
    }
    {
        i = 0;
        while (strlen (n) > i) {
            T90mfplKe = T90mfplKe +pow ((double ) WO5WuP3e6oFU, (double ) i) * p[strlen (n) - i - 1];
            i = i + 1;
        };
    }
    c7vfyQF2to = T90mfplKe;
    if (c7vfyQF2to == 0)
        cout << "0";
    else
        while (c7vfyQF2to != 0) {
            c7vfyQF2to /= M0XKa8W3;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            count = count + 1;
        }
    {
        i = 0;
        while (i < count) {
            k[i] = (T90mfplKe / (int) pow ((double ) M0XKa8W3, (double ) i)) % M0XKa8W3;
            i++;
        };
    }
    for (i = 0; i < count; i = i + 1) {
        if (k[i] > 9)
            m[i] = k[i] + 55;
        else
            m[i] = k[i] + (234 - 186);
    }
    for (i = 0; i < (int) (count / (859 - 857)); i++) {
        temp = m[i];
        m[i] = m[count - 1 - i];
        m[count - 1 - i] = temp;
    }
    {
        i = 0;
        while (i < count) {
            cout << m[i];
            i++;
        };
    }
    cout << endl;
    return 0;
}

