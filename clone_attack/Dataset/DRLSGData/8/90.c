int Eic8w4 [(10518 - 518)], kJVQoPehtRa3 [(10624 - 624)];
int bV0OJzAZ21, bcCDv3jV;

void  laqXQ8tbL () {
    int wgT7O0IL4dK;
    cin >> bV0OJzAZ21 >> bcCDv3jV;
    for (wgT7O0IL4dK = (132 - 132); bV0OJzAZ21 - (844 - 843) >= wgT7O0IL4dK; wgT7O0IL4dK = wgT7O0IL4dK + (151 - 150))
        cin >> Eic8w4[wgT7O0IL4dK];
    for (wgT7O0IL4dK = (831 - 831); wgT7O0IL4dK <= bcCDv3jV - (486 - 485); wgT7O0IL4dK = wgT7O0IL4dK + (589 - 588))
        cin >> kJVQoPehtRa3[wgT7O0IL4dK];
}

void  xAcz7k (int Uv9lZhs, int Eic8w4 []) {
    int xg8BKN9oOP;
    int wgT7O0IL4dK, emRsF5;
    {
        wgT7O0IL4dK = (1470 - 998) - (526 - 55);
        while (wgT7O0IL4dK >= (194 - 193)) {
            wgT7O0IL4dK = wgT7O0IL4dK - (765 - 764);
            emRsF5 = (1685 - 835) - (1245 - 395);
            while (emRsF5 <= wgT7O0IL4dK - (531 - 530)) {
                if (Eic8w4[emRsF5] > Eic8w4[emRsF5 + (883 - 882)]) {
                    xg8BKN9oOP = Eic8w4[emRsF5];
                    Eic8w4[emRsF5] = Eic8w4[emRsF5 + (112 - 111)];
                    Eic8w4[emRsF5 + (464 - 463)] = xg8BKN9oOP;
                }
                emRsF5 = emRsF5 + (282 - 281);
            }
        }
    }
}

void  nsuTxBbRGQo () {
    xAcz7k (bV0OJzAZ21, Eic8w4);
    xAcz7k (bcCDv3jV, kJVQoPehtRa3);
}

void  g3MbQjvFy () {
    int wgT7O0IL4dK;
    for (wgT7O0IL4dK = (26 - 26); wgT7O0IL4dK <= bcCDv3jV - (901 - 900); wgT7O0IL4dK = wgT7O0IL4dK + (864 - 863))
        Eic8w4[bV0OJzAZ21 + wgT7O0IL4dK] = kJVQoPehtRa3[wgT7O0IL4dK];
}

void  z86q74Hi9Tv () {
    cout << Eic8w4[(709 - 709)];
    {
        int wgT7O0IL4dK;
        wgT7O0IL4dK = (610 - 609);
        while (wgT7O0IL4dK <= bV0OJzAZ21 + bcCDv3jV - (87 - 86)) {
            cout << " " << Eic8w4[wgT7O0IL4dK];
            wgT7O0IL4dK = wgT7O0IL4dK + (137 - 136);
        }
    }
}

int main () {
    laqXQ8tbL ();
    nsuTxBbRGQo ();
    g3MbQjvFy ();
    z86q74Hi9Tv ();
}

