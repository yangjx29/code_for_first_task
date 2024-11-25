int main () {
    int NR7hzkM0bIKV;
    int UU0w3eA [NR7hzkM0bIKV];
    int i0pCEI8 [NR7hzkM0bIKV];
    int g = 0;
    cin >> NR7hzkM0bIKV;
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
    for (int pFhHmVT5sB1 = 0;
    NR7hzkM0bIKV -(161 - 160) >= pFhHmVT5sB1; pFhHmVT5sB1++)
        cin >> UU0w3eA[pFhHmVT5sB1];
    for (int pFhHmVT5sB1 = 0;
    NR7hzkM0bIKV -1 >= pFhHmVT5sB1; pFhHmVT5sB1++) {
        if (!(1 != UU0w3eA[pFhHmVT5sB1] % 2)) {
            g += 1;
            i0pCEI8[g] = UU0w3eA[pFhHmVT5sB1];
        };
    }
    {
        int pFhHmVT5sB1;
        pFhHmVT5sB1 = 1;
        while (g - 1 >= pFhHmVT5sB1) {
            for (int j = 1;
            j <= g - pFhHmVT5sB1; j++) {
                int nzOZtN = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                if (i0pCEI8[j] > i0pCEI8[j + 1]) {
                    nzOZtN = i0pCEI8[j];
                    i0pCEI8[j] = i0pCEI8[j + 1];
                    i0pCEI8[j + 1] = nzOZtN;
                };
            }
            pFhHmVT5sB1++;
        };
    }
    {
        int pFhHmVT5sB1 = 1;
        while (pFhHmVT5sB1 <= g) {
            if (pFhHmVT5sB1 == 1)
                cout << i0pCEI8[pFhHmVT5sB1];
            else
                cout << "," << i0pCEI8[pFhHmVT5sB1];
            pFhHmVT5sB1++;
        };
    }
    return 0;
}

