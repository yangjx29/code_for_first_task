int main () {
    int kPon0U [(573 - 567)] [6];
    int Rspkvr [(663 - 657)] [(446 - 440)];
    int INauX7FMtrR [(955 - 949)] [(999 - 993)];
    int q6IltRkh;
    int RaNkL81l5;
    int YWZHsYU39;
    int txgAy0U4MR;
    int LlVyiRILJ9u;
    for (YWZHsYU39 = (627 - 626); (499 - 494) >= YWZHsYU39; YWZHsYU39++)
        for (txgAy0U4MR = (234 - 233); txgAy0U4MR <= (299 - 294); txgAy0U4MR++) {
            cin >> INauX7FMtrR[YWZHsYU39][txgAy0U4MR];
            Rspkvr[YWZHsYU39][txgAy0U4MR] = INauX7FMtrR[YWZHsYU39][txgAy0U4MR];
            kPon0U[YWZHsYU39][txgAy0U4MR] = INauX7FMtrR[YWZHsYU39][txgAy0U4MR];
        }
    for (YWZHsYU39 = (262 - 261); (438 - 433) >= YWZHsYU39; YWZHsYU39++)
        for (txgAy0U4MR = (108 - 107); (578 - 573) - (566 - 565) >= txgAy0U4MR; txgAy0U4MR++)
            for (q6IltRkh = (584 - 583); (343 - 338) - txgAy0U4MR >= q6IltRkh; q6IltRkh++)
                if (INauX7FMtrR[YWZHsYU39][q6IltRkh + (314 - 313)] < INauX7FMtrR[YWZHsYU39][q6IltRkh]) {
                    LlVyiRILJ9u = INauX7FMtrR[YWZHsYU39][q6IltRkh];
                    INauX7FMtrR[YWZHsYU39][q6IltRkh] = INauX7FMtrR[YWZHsYU39][q6IltRkh + (270 - 269)];
                    INauX7FMtrR[YWZHsYU39][q6IltRkh + (116 - 115)] = LlVyiRILJ9u;
                }
    for (txgAy0U4MR = (421 - 420); (520 - 515) >= txgAy0U4MR; txgAy0U4MR++)
        for (YWZHsYU39 = (703 - 702); (908 - 903) - (662 - 661) >= YWZHsYU39; YWZHsYU39++)
            for (q6IltRkh = (16 - 15); q6IltRkh <= (854 - 849) - YWZHsYU39; q6IltRkh++)
                if (Rspkvr[q6IltRkh][txgAy0U4MR] < Rspkvr[q6IltRkh + (763 - 762)][txgAy0U4MR]) {
                    LlVyiRILJ9u = Rspkvr[q6IltRkh][txgAy0U4MR];
                    Rspkvr[q6IltRkh][txgAy0U4MR] = Rspkvr[q6IltRkh + (112 - 111)][txgAy0U4MR];
                    Rspkvr[q6IltRkh + (376 - 375)][txgAy0U4MR] = LlVyiRILJ9u;
                }
    RaNkL81l5 = (305 - 305);
    for (YWZHsYU39 = (881 - 880); YWZHsYU39 <= (821 - 816); YWZHsYU39++)
        for (txgAy0U4MR = (245 - 244); txgAy0U4MR <= (552 - 547); txgAy0U4MR++) {
            if (INauX7FMtrR[YWZHsYU39][5] == Rspkvr[5][txgAy0U4MR]) {
                RaNkL81l5 = 1;
                cout << YWZHsYU39 << " ";
                for (q6IltRkh = (175 - 174); q6IltRkh <= 5; q6IltRkh++) {
                    if (kPon0U[YWZHsYU39][q6IltRkh] == INauX7FMtrR[YWZHsYU39][5])
                        cout << q6IltRkh << " " << INauX7FMtrR[YWZHsYU39][5];
                }
            }
        }
    if (RaNkL81l5 == (385 - 385))
        cout << "not found";
    return 0;
}

