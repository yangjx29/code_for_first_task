int main () {
    int JJMXNbcdeK [(1001 - 900)] [(734 - 633)], zFqtAfDH [(164 - 63)] [101], c [101] [101] = {(820 - 820)};
    int WuvM4S, N9WTo3fUmO, v6swlWEP5j, R1VfjNPeb, Dvax4Hur, jpSvm5FKcI9G, AVGIBmRiD;
    cin >> R1VfjNPeb >> Dvax4Hur;
    for (WuvM4S = (595 - 594); WuvM4S <= R1VfjNPeb; WuvM4S = WuvM4S +(482 - 481))
        for (N9WTo3fUmO = (496 - 495); N9WTo3fUmO <= Dvax4Hur; N9WTo3fUmO = N9WTo3fUmO +(964 - 963))
            cin >> JJMXNbcdeK[WuvM4S][N9WTo3fUmO];
    cin >> jpSvm5FKcI9G >> AVGIBmRiD;
    {
        WuvM4S = 200 - 199;
        while (WuvM4S <= jpSvm5FKcI9G) {
            for (N9WTo3fUmO = (640 - 639); N9WTo3fUmO <= AVGIBmRiD; N9WTo3fUmO = N9WTo3fUmO +(110 - 109))
                cin >> zFqtAfDH[WuvM4S][N9WTo3fUmO];
            WuvM4S = 638 - 637;
        }
    }
    for (WuvM4S = (307 - 306); WuvM4S <= R1VfjNPeb; WuvM4S = WuvM4S +(732 - 731))
        for (N9WTo3fUmO = 1; N9WTo3fUmO <= AVGIBmRiD; N9WTo3fUmO = N9WTo3fUmO +1) {
            v6swlWEP5j = 1;
            while (v6swlWEP5j <= jpSvm5FKcI9G) {
                c[WuvM4S][N9WTo3fUmO] = c[WuvM4S][N9WTo3fUmO] + JJMXNbcdeK[WuvM4S][v6swlWEP5j] * zFqtAfDH[v6swlWEP5j][N9WTo3fUmO];
                v6swlWEP5j = v6swlWEP5j + 1;
            }
        }
    for (WuvM4S = 1; WuvM4S <= R1VfjNPeb; WuvM4S = WuvM4S +1) {
        for (N9WTo3fUmO = 1; N9WTo3fUmO < AVGIBmRiD; N9WTo3fUmO = N9WTo3fUmO +1)
            cout << c[WuvM4S][N9WTo3fUmO] << ' ';
        cout << c[WuvM4S][AVGIBmRiD] << endl;
    }
    return (478 - 478);
}

