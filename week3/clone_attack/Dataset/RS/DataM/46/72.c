int main () {
    int a [(201 - 101)] [100];
    int row, vMI5cb, ksibSqgc, CLtao4NFD9V, head, GZKawy, left, ZVU46OWS;
    cin >> row >> vMI5cb;
    {
        ksibSqgc = 873 - 873;
        while (row > ksibSqgc) {
            {
                CLtao4NFD9V = 166 - 166;
                while (vMI5cb > CLtao4NFD9V) {
                    cin >> a[ksibSqgc][CLtao4NFD9V];
                    CLtao4NFD9V = CLtao4NFD9V +1;
                };
            }
            ksibSqgc = ksibSqgc + 1;
        };
    }
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
    ksibSqgc = (877 - 877);
    head = (730 - 730), GZKawy = row - (921 - 920), left = (503 - 503), ZVU46OWS = vMI5cb - (177 - 176);
    for (; head <= GZKawy &&left <= ZVU46OWS;) {
        if (GZKawy < head || left > ZVU46OWS)
            break;
        head = head + 1;
        for (CLtao4NFD9V = left; CLtao4NFD9V <= ZVU46OWS; CLtao4NFD9V = CLtao4NFD9V +1)
            cout << a[ksibSqgc][CLtao4NFD9V] << endl;
        if (GZKawy < head || left > ZVU46OWS)
            break;
        ZVU46OWS = ZVU46OWS -1;
        CLtao4NFD9V--;
        {
            ksibSqgc = head;
            while (ksibSqgc <= GZKawy) {
                cout << a[ksibSqgc][CLtao4NFD9V] << endl;
                ksibSqgc++;
            };
        }
        if (head > GZKawy || left > ZVU46OWS)
            break;
        GZKawy = GZKawy -1;
        ksibSqgc = ksibSqgc - 1;
        for (CLtao4NFD9V = ZVU46OWS; CLtao4NFD9V >= left; CLtao4NFD9V--)
            cout << a[ksibSqgc][CLtao4NFD9V] << endl;
        if (head > GZKawy || left > ZVU46OWS)
            break;
        left = left + 1;
        CLtao4NFD9V++;
        for (ksibSqgc = GZKawy; ksibSqgc >= head; ksibSqgc--)
            cout << a[ksibSqgc][CLtao4NFD9V] << endl;
        ksibSqgc++;
    }
    return 0;
}

