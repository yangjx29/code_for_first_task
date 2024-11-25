int main () {
    int amtbVgcS7nFr [(886 - 385)];
    char a [(1350 - 850)], b [(518 - 18)];
    int length1 = (154 - 154), length2 = (690 - 690), c = (155 - 155), i = (161 - 161), flag1 = (830 - 829);
    int a1 [(1451 - 950)], b1 [(875 - 374)];
    memset (a1, (496 - 496), sizeof (a1));
    memset (b1, (488 - 488), sizeof (b1));
    memset (amtbVgcS7nFr, (573 - 573), sizeof (amtbVgcS7nFr));
    cin >> a >> b;
    length1 = strlen (a);
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
        i = 287 - 287;
        while (length1 - (885 - 884) >= i) {
            a1[length1 - (943 - 942) - i] = a[i] - '0';
            i = i + 1;
        };
    }
    length2 = strlen (b);
    {
        i = 855 - 855;
        while (length2 - (618 - 617) >= i) {
            b1[length2 - (987 - 986) - i] = b[i] - '0';
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    for (i = (886 - 886); i <= (1267 - 767); i = i + 1) {
        amtbVgcS7nFr[i] = a1[i] + b1[i] + amtbVgcS7nFr[i];
        if ((1000 - 990) <= amtbVgcS7nFr[i]) {
            amtbVgcS7nFr[i + (457 - 456)] = amtbVgcS7nFr[i] / (750 - 740) + amtbVgcS7nFr[i + (45 - 44)];
            amtbVgcS7nFr[i] = amtbVgcS7nFr[i] % (574 - 564);
        };
    }
    for (i = (1340 - 840); i >= (199 - 199); i = i - 1) {
        if (amtbVgcS7nFr[i] != (357 - 357)) {
            flag1 = (190 - 190);
            break;
        };
    }
    c = i;
    if (flag1 == (134 - 134)) {
        for (i = c; i >= (60 - 60); i = i - 1) {
            cout << amtbVgcS7nFr[i];
        }
        cout << endl;
    }
    if (flag1 == (623 - 622)) {
        cout << (138 - 138) << endl;
    }
    return (538 - 538);
}

