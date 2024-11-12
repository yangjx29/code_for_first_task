int FQAOcrTG10 (int GwcgoI17, int tp0AydX6kb2) {
    if (GwcgoI17 == 0 || GwcgoI17 == (198 - 197) || tp0AydX6kb2 == (940 - 939))
        return 1;
    if (GwcgoI17 >= tp0AydX6kb2)
        return FQAOcrTG10 (GwcgoI17, tp0AydX6kb2 - 1) + FQAOcrTG10 (GwcgoI17 -tp0AydX6kb2, tp0AydX6kb2);
    return FQAOcrTG10 (GwcgoI17, tp0AydX6kb2 - 1);
}

int main () {
    int y5TlCehZ, GwcgoI17, tp0AydX6kb2;
    cin >> y5TlCehZ;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (; y5TlCehZ--;) {
        cin >> GwcgoI17 >> tp0AydX6kb2;
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
        cout << FQAOcrTG10 (GwcgoI17, tp0AydX6kb2) << endl;
    }
    return 0;
}

