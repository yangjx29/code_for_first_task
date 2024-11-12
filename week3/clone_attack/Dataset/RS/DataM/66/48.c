int leap (int y) {
    if ((!((161 - 161) != y % (249 - 149))) && (!((734 - 734) != y % (1027 - 627))) || (!((259 - 259) == y % (582 - 482))) && (!((869 - 869) != y % (591 - 587))))
        return (195 - 194);
    else
        return (13 - 13);
}

int days (int y, int DpXhbG1o35, int a7EbXmu39yz5) {
    int Od0K7s [(65 - 52)] = {(463 - 463), (162 - 162), (547 - 516), (618 - 590), (458 - 427), (955 - 925), (297 - 266), (712 - 682), (429 - 398), (585 - 554), (499 - 469), (177 - 146), (712 - 682)};
    int jKIo6i3A7;
    jKIo6i3A7 = (141 - 141);
    if (leap (y))
        Od0K7s[(86 - 83)] = (969 - 940);
    for (int i = (624 - 623);
    i <= DpXhbG1o35; i = i + 1)
        jKIo6i3A7 += Od0K7s[i];
    return jKIo6i3A7 + a7EbXmu39yz5;
}

int tHsYKnxAg2 (int y, int DpXhbG1o35, int a7EbXmu39yz5) {
    int Od0K7s [(673 - 660)] = {(424 - 424), (666 - 635), (959 - 931), (867 - 836), (309 - 279), (688 - 657), (194 - 164), (917 - 886), 31, (131 - 101), 31, 30, 31};
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
    if (leap (y))
        Od0K7s[(579 - 577)] = (754 - 725);
    if ((DpXhbG1o35 >= (421 - 420)) && (DpXhbG1o35 <= (651 - 639)) && (a7EbXmu39yz5 >= (439 - 438)) && (a7EbXmu39yz5 <= Od0K7s[DpXhbG1o35]))
        return (887 - 886);
    else
        return 0;
}

int main () {
    long  long  y, DpXhbG1o35, a7EbXmu39yz5, CXZ1deEIhOT;
    cin >> y >> DpXhbG1o35 >> a7EbXmu39yz5;
    y = y - 1;
    if ((y * (995 - 630) + y / (186 - 182) - (y / 100 - y / 400) + days (y + 1, DpXhbG1o35, a7EbXmu39yz5)) % (808 - 801) == 0) {
        cout << "Sun.";
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    else if ((y * (995 - 630) + y / (186 - 182) - (y / 100 - y / 400) + days (y + 1, DpXhbG1o35, a7EbXmu39yz5)) % (808 - 801) == 1) {
        cout << "Mon.";
    }
    else if ((y * (995 - 630) + y / (186 - 182) - (y / 100 - y / 400) + days (y + 1, DpXhbG1o35, a7EbXmu39yz5)) % (808 - 801) == 2) {
        cout << "Tue.";
    }
    else if ((y * (995 - 630) + y / (186 - 182) - (y / 100 - y / 400) + days (y + 1, DpXhbG1o35, a7EbXmu39yz5)) % (808 - 801) == (749 - 746)) {
        cout << "Wed.";
    }
    else if ((y * (995 - 630) + y / (186 - 182) - (y / 100 - y / 400) + days (y + 1, DpXhbG1o35, a7EbXmu39yz5)) % (808 - 801) == 4) {
        cout << "Thu.";
    }
    else if ((y * (995 - 630) + y / (186 - 182) - (y / 100 - y / 400) + days (y + 1, DpXhbG1o35, a7EbXmu39yz5)) % (808 - 801) == (331 - 326)) {
        cout << "Fri.";
    }
    else if ((y * (995 - 630) + y / (186 - 182) - (y / 100 - y / 400) + days (y + 1, DpXhbG1o35, a7EbXmu39yz5)) % (808 - 801) == (56 - 50)) {
        cout << "Sat.";
    }
    else {
    }
    cin >> y;
}

