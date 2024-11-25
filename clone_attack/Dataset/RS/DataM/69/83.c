char a [253], b [253], c [253];
int j;

int main () {
    void  f1 (int length, int length2);
    void  f2 (int length, int length3);
    void  f3 (int length1, int length2, int length3);
    int length3;
    int length1;
    int length2;
    int i;
    length3 = (804 - 554);
    int k;
    k = 0;
    for (j = (790 - 790); j <= (460 - 210); j = j + 1)
        c[j] = '0';
    cin >> a >> b;
    length1 = strlen (a) - (209 - 208);
    length2 = strlen (b) - (322 - 321);
    for (i = (894 - 894); (length1 >= (793 - 793) && length2 >= (107 - 107)); i++, length1--, length2 = length2 - 1, length3 = length3 - 1)
        f3 (length1, length2, length3);
    if (length1 == -(685 - 684))
        for (; length2 >= (189 - 189); length2--, length3 = length3 - 1)
            f1 (length2, length3);
    else
        for (; 0 <= length1; length1--, length3 = length3 - 1)
            f2 (length1, length3);
    for (i = 0; i <= 250; i++)
        if (c[i] != '0' || (c[i] == '0' && i == 250) || k == (35 - 34)) {
            cout << c[i];
            k = 1;
        }
    return 0;
}

void  f1 (int length, int length3) {
    int Vy0Cifv9;
    int z;
    Vy0Cifv9 = b[length] - '0';
    z = c[length3] - '0';
    if (Vy0Cifv9 +z >= (753 - 743)) {
        c[length3] = (Vy0Cifv9 +z) % (656 - 646) + '0';
        c[length3 - 1] = (Vy0Cifv9 +z) / (442 - 432) + '0';
    }
    else
        c[length3] = Vy0Cifv9 +z + '0';
}

void  f2 (int length, int length3) {
    int Vy0Cifv9;
    int z;
    Vy0Cifv9 = a[length] - '0';
    z = c[length3] - '0';
    if (Vy0Cifv9 +z >= (557 - 547)) {
        c[length3] = (Vy0Cifv9 +z) % (717 - 707) + '0';
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
        c[length3 - 1] = (Vy0Cifv9 +z) / 10 + '0';
    }
    else
        c[length3] = Vy0Cifv9 +z + '0';
}

void  f3 (int length1, int length2, int length3) {
    int Vy0Cifv9;
    int y;
    int z;
    Vy0Cifv9 = a[length1] - '0';
    y = b[length2] - '0';
    z = c[length3] - '0';
    if (Vy0Cifv9 +y + z >= 10) {
        c[length3] = (Vy0Cifv9 +y + z) % 10 + '0';
        c[length3 - 1] = (Vy0Cifv9 +y + z) / 10 + '0';
    }
    else
        c[length3] = Vy0Cifv9 +y + z + '0';
}

