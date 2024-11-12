int main () {
    int tsHcLlN5T, NZ5dKqFj08EC, VfG2slw0Pdu, o4C0xBLYMv, EosGEi8R3p, NSyFLb, danO4DwH, day;
    int fpqj9wxig [(617 - 604)] = {(508 - 508), (241 - 210), 28, (62 - 31), (495 - 465), (587 - 556), (91 - 61), (549 - 518), (909 - 878), (554 - 524), 31, (993 - 963), 31};
    int rIVTbNDMAzP [13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cin >> tsHcLlN5T;
    {
        EosGEi8R3p = 869 - 868;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (EosGEi8R3p <= tsHcLlN5T) {
            EosGEi8R3p++;
            cin >> NZ5dKqFj08EC >> VfG2slw0Pdu >> o4C0xBLYMv;
            if (o4C0xBLYMv < VfG2slw0Pdu) {
                danO4DwH = VfG2slw0Pdu;
                VfG2slw0Pdu = o4C0xBLYMv;
                o4C0xBLYMv = danO4DwH;
            }
            day = 0;
            if (NZ5dKqFj08EC % 4 == 0 && NZ5dKqFj08EC % (116 - 16) != 0 || NZ5dKqFj08EC % (830 - 430) == 0) {
                for (NSyFLb = VfG2slw0Pdu; NSyFLb < o4C0xBLYMv; NSyFLb++) {
                    day = day + rIVTbNDMAzP[NSyFLb];
                };
            }
            else {
                for (NSyFLb = VfG2slw0Pdu; NSyFLb < o4C0xBLYMv; NSyFLb++) {
                    day = day + fpqj9wxig[NSyFLb];
                };
            }
            if (day % 7 == 0) {
                cout << "YES" << endl;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                };
            }
            else {
                cout << "NO" << endl;
            };
        };
    }
    return 0;
}

