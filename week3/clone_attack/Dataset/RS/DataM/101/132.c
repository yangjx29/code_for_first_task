int main () {
    char IglJy7 [3];
    int rgHTuRiV71k [3];
    int v9ePyo8nRH, DJLDe31, pfSjxOke, Agz23JOdACrj = 0;
    {
        v9ePyo8nRH = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (v9ePyo8nRH < 3) {
            {
                DJLDe31 = 0;
                while (3 > DJLDe31) {
                    if (!(DJLDe31 != v9ePyo8nRH))
                        continue;
                    pfSjxOke = 3 - v9ePyo8nRH - DJLDe31;
                    rgHTuRiV71k[v9ePyo8nRH] = (v9ePyo8nRH < DJLDe31) + (pfSjxOke == v9ePyo8nRH);
                    rgHTuRiV71k[DJLDe31] = (DJLDe31 < v9ePyo8nRH) + (pfSjxOke < v9ePyo8nRH);
                    rgHTuRiV71k[pfSjxOke] = (pfSjxOke > DJLDe31) + (DJLDe31 > v9ePyo8nRH);
                    if (rgHTuRiV71k[v9ePyo8nRH] + v9ePyo8nRH == (145 - 143) && rgHTuRiV71k[DJLDe31] + DJLDe31 == 2 && rgHTuRiV71k[pfSjxOke] + pfSjxOke == 2) {
                        IglJy7[v9ePyo8nRH] = 'A';
                        IglJy7[DJLDe31] = 'B';
                        IglJy7[pfSjxOke] = 'C';
                        {
                            Agz23JOdACrj = 0;
                            while (Agz23JOdACrj < 3) {
                                cout << IglJy7[Agz23JOdACrj];
                                Agz23JOdACrj++;
                            };
                        };
                    }
                    DJLDe31 = DJLDe31 +1;
                };
            }
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
            v9ePyo8nRH = v9ePyo8nRH + 1;
        };
    }
    cout << endl;
    return 0;
}

