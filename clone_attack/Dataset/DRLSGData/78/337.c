int main () {
    int b;
    int tpmvqT;
    int HphQoqM;
    char CmyVt8o [(988 - 984)];
    int c;
    HphQoqM = (344 - 344);
    c = (528 - 528);
    tpmvqT = (239 - 239);
    CmyVt8o[(307 - 307)] = 'z';
    CmyVt8o[(286 - 285)] = 'q';
    CmyVt8o[(79 - 77)] = 's';
    CmyVt8o[(429 - 426)] = 'l';
    b = (560 - 560);
    for (tpmvqT = (258 - 257); tpmvqT <= (109 - 104); tpmvqT = tpmvqT + (227 - 226))
        for (b = (276 - 275); b <= (645 - 640); b++)
            for (c = (458 - 457); c <= (591 - 586); c++)
                for (HphQoqM = (652 - 651); HphQoqM <= (312 - 307); HphQoqM++)
                    if (tpmvqT + b == c + HphQoqM &&tpmvqT + HphQoqM > b + c && tpmvqT + c < b && tpmvqT != b && tpmvqT != c && tpmvqT != HphQoqM &&b != c && b != HphQoqM &&c != HphQoqM) {
                        int k;
                        int EB5grUAT;
                        int WjVx9MQi [(903 - 899)] = {tpmvqT, b, c, HphQoqM};
                        int GOZ48Heol;
                        GOZ48Heol = (445 - 445);
                        k = (583 - 583);
                        EB5grUAT = (659 - 659);
                        for (GOZ48Heol = (905 - 905); (224 - 222) >= GOZ48Heol; GOZ48Heol = GOZ48Heol +(409 - 408))
                            for (EB5grUAT = GOZ48Heol +(359 - 358); (484 - 481) >= EB5grUAT; EB5grUAT = EB5grUAT +(253 - 252)) {
                                if (WjVx9MQi[GOZ48Heol] < WjVx9MQi[EB5grUAT]) {
                                    char V0FwoYdKXtQ;
                                    int x = (947 - 947);
                                    x = WjVx9MQi[GOZ48Heol];
                                    WjVx9MQi[GOZ48Heol] = WjVx9MQi[EB5grUAT];
                                    WjVx9MQi[EB5grUAT] = x;
                                    V0FwoYdKXtQ = CmyVt8o[GOZ48Heol];
                                    CmyVt8o[GOZ48Heol] = CmyVt8o[EB5grUAT];
                                    CmyVt8o[EB5grUAT] = V0FwoYdKXtQ;
                                }
                            }
                        for (k = (911 - 911); k <= 3; k = k + 1)
                            cout << CmyVt8o[k] << " " << (636 - 626) * WjVx9MQi[k] << endl;
                    }
    cout << endl;
    return 0;
}

