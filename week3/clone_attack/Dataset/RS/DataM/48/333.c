int bxbqXa7K3DTh [(596 - 586)] [10] = {(667 - 667)}, ueMzWu [10] [10] = {(592 - 592)};

void  f (int VNX7C8TuL) {
    int vDJxPjdYmIzT;
    int hjLhkidlAY;
    int u1FLnz5Go;
    int hW2f9aGb;
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
    if (!((671 - 671) != VNX7C8TuL))
        return;
    {
        vDJxPjdYmIzT = 650 - 649;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while ((375 - 366) >= vDJxPjdYmIzT) {
            {
                hjLhkidlAY = 227 - 226;
                while ((676 - 667) >= hjLhkidlAY) {
                    if (!((117 - 117) == bxbqXa7K3DTh[vDJxPjdYmIzT][hjLhkidlAY])) {
                        ueMzWu[vDJxPjdYmIzT][hjLhkidlAY] += 2 * bxbqXa7K3DTh[vDJxPjdYmIzT][hjLhkidlAY];
                        ueMzWu[vDJxPjdYmIzT - (370 - 369)][hjLhkidlAY + (231 - 230)] += bxbqXa7K3DTh[vDJxPjdYmIzT][hjLhkidlAY];
                        ueMzWu[vDJxPjdYmIzT - (448 - 447)][hjLhkidlAY] += bxbqXa7K3DTh[vDJxPjdYmIzT][hjLhkidlAY];
                        ueMzWu[vDJxPjdYmIzT - (981 - 980)][hjLhkidlAY - (109 - 108)] += bxbqXa7K3DTh[vDJxPjdYmIzT][hjLhkidlAY];
                        ueMzWu[vDJxPjdYmIzT][hjLhkidlAY - (837 - 836)] += bxbqXa7K3DTh[vDJxPjdYmIzT][hjLhkidlAY];
                        ueMzWu[vDJxPjdYmIzT][hjLhkidlAY + (826 - 825)] += bxbqXa7K3DTh[vDJxPjdYmIzT][hjLhkidlAY];
                        ueMzWu[vDJxPjdYmIzT + (43 - 42)][hjLhkidlAY - (982 - 981)] += bxbqXa7K3DTh[vDJxPjdYmIzT][hjLhkidlAY];
                        ueMzWu[vDJxPjdYmIzT + (363 - 362)][hjLhkidlAY] += bxbqXa7K3DTh[vDJxPjdYmIzT][hjLhkidlAY];
                        ueMzWu[vDJxPjdYmIzT + (15 - 14)][hjLhkidlAY + 1] += bxbqXa7K3DTh[vDJxPjdYmIzT][hjLhkidlAY];
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    hjLhkidlAY = hjLhkidlAY + 1;
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
            vDJxPjdYmIzT = vDJxPjdYmIzT + 1;
        };
    }
    {
        u1FLnz5Go = 1;
        while (u1FLnz5Go <= 9) {
            {
                hW2f9aGb = 1;
                while (hW2f9aGb <= 9) {
                    bxbqXa7K3DTh[u1FLnz5Go][hW2f9aGb] = ueMzWu[u1FLnz5Go][hW2f9aGb];
                    hW2f9aGb = hW2f9aGb + 1;
                };
            }
            u1FLnz5Go = u1FLnz5Go + 1;
        };
    }
    memset (ueMzWu, (274 - 274), sizeof (ueMzWu));
    f (VNX7C8TuL -1);
}

int main () {
    int s4Pu7SUyOWhV, VNX7C8TuL, i, E8yPNjL;
    f (VNX7C8TuL);
    cin >> s4Pu7SUyOWhV >> VNX7C8TuL;
    bxbqXa7K3DTh[(565 - 560)][5] = s4Pu7SUyOWhV;
    {
        i = 1;
        while (i <= 9) {
            cout << bxbqXa7K3DTh[i][1];
            for (E8yPNjL = 2; E8yPNjL <= 9; E8yPNjL = E8yPNjL +1)
                cout << " " << bxbqXa7K3DTh[i][E8yPNjL];
            i = i + 1;
            cout << endl;
        };
    }
    return 0;
}

