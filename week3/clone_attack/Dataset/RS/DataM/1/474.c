int f (int i5CgQewVyBp, int W5lI9Sz) {
    if (i5CgQewVyBp == (867 - 866))
        return (320 - 319);
    else {
        int RDuO4wU1, s0GqXE, IT8xSEQ;
        RDuO4wU1 = (974 - 974);
        s0GqXE = (int) sqrt ((double ) i5CgQewVyBp);
        for (IT8xSEQ = W5lI9Sz; IT8xSEQ <= i5CgQewVyBp; IT8xSEQ++) {
            if (!(i5CgQewVyBp % IT8xSEQ))
                RDuO4wU1 += f (i5CgQewVyBp / IT8xSEQ, IT8xSEQ);
        }
        return RDuO4wU1;
    };
}

int main () {
    int MQikuNg, i5CgQewVyBp, IT8xSEQ;
    cin >> MQikuNg;
    for (IT8xSEQ = (542 - 542); IT8xSEQ < MQikuNg; IT8xSEQ++) {
        cin >> i5CgQewVyBp;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        cout << f (i5CgQewVyBp, 2) << endl;
    }
    cin.get ();
    cin.get ();
    return (972 - 972);
}

