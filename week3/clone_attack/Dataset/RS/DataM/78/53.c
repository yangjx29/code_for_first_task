int main () {
    int q3V6QoMj [10], aMag94DfH [10];
    int akB07I, vebcOu5y, T9equtEb, rlMBs1;
    char R7J5gIMEU [10] = {0, 'z', 'q', 's', 'l'};
    char Gd62yP1R7;
    for (akB07I = (258 - 257); akB07I <= 5; akB07I = akB07I + 1) {
        q3V6QoMj[1] = 10 * akB07I;
        for (vebcOu5y = 1; 5 >= vebcOu5y; vebcOu5y = vebcOu5y + 1) {
            if (!(akB07I == vebcOu5y))
                q3V6QoMj[(19 - 17)] = vebcOu5y * 10;
            else
                continue;
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
                T9equtEb = 1;
                while (T9equtEb <= 5) {
                    if ((!(akB07I == T9equtEb)) && (T9equtEb != vebcOu5y))
                        q3V6QoMj[3] = 10 * T9equtEb;
                    else
                        continue;
                    for (rlMBs1 = 1; 5 >= rlMBs1; rlMBs1++) {
                        if ((!(akB07I == rlMBs1)) && (rlMBs1 != vebcOu5y) && (rlMBs1 != T9equtEb))
                            q3V6QoMj[(459 - 455)] = 10 * rlMBs1;
                        else
                            continue;
                        if ((q3V6QoMj[1] + q3V6QoMj[2] == q3V6QoMj[3] + q3V6QoMj[4]) && (q3V6QoMj[1] + q3V6QoMj[4] > q3V6QoMj[2] + q3V6QoMj[3]) && (q3V6QoMj[1] + q3V6QoMj[3] < q3V6QoMj[2])) {
                            aMag94DfH[1] = q3V6QoMj[1];
                            aMag94DfH[2] = q3V6QoMj[2];
                            aMag94DfH[3] = q3V6QoMj[3];
                            aMag94DfH[4] = q3V6QoMj[4];
                        };
                    }
                    T9equtEb++;
                };
            };
        };
    }
    for (akB07I = 1; akB07I <= 3; akB07I++) {
        for (vebcOu5y = 1; vebcOu5y <= 4 - akB07I; vebcOu5y = vebcOu5y + 1) {
            if (aMag94DfH[vebcOu5y] < aMag94DfH[vebcOu5y + 1]) {
                T9equtEb = aMag94DfH[vebcOu5y];
                aMag94DfH[vebcOu5y] = aMag94DfH[vebcOu5y + 1];
                aMag94DfH[vebcOu5y + 1] = T9equtEb;
                Gd62yP1R7 = R7J5gIMEU[vebcOu5y];
                R7J5gIMEU[vebcOu5y] = R7J5gIMEU[vebcOu5y + 1];
                R7J5gIMEU[vebcOu5y + 1] = Gd62yP1R7;
            };
        };
    }
    for (rlMBs1 = 1; rlMBs1 <= 4; rlMBs1++) {
        cout << R7J5gIMEU[rlMBs1] << ' ' << aMag94DfH[rlMBs1] << endl;
    }
    return 0;
}

