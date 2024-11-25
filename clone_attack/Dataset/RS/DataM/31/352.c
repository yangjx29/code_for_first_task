struct   stu {
    char PZJHXr [100];
    struct   stu *GeVn8S2xt;
};
struct   stu *y1pYuVq9c8F () {
    struct   stu *moYlb6qXs, *WaCKbHusX, *EqSs81;
    EqSs81 = WaCKbHusX = (struct   stu *) malloc (sizeof (struct   stu));
    gets (WaCKbHusX->PZJHXr);
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
    WaCKbHusX->GeVn8S2xt = 0;
    for (; !(!(101 != WaCKbHusX->PZJHXr[0]) && !(110 != WaCKbHusX->PZJHXr[1]) && WaCKbHusX->PZJHXr[2] == 100);) {
        WaCKbHusX = (struct   stu *) malloc (sizeof (struct   stu));
        gets (WaCKbHusX->PZJHXr);
        WaCKbHusX->GeVn8S2xt = EqSs81;
        EqSs81 = WaCKbHusX;
    }
    return WaCKbHusX->GeVn8S2xt;
}

void  YRloDy (struct   stu *p) {
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
    for (; p != 0;) {
        printf ("%s\n", p->PZJHXr);
        p = p->GeVn8S2xt;
    };
}

int main () {
    struct   stu *p;
    YRloDy (p);
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    p = y1pYuVq9c8F ();
    return 0;
}

