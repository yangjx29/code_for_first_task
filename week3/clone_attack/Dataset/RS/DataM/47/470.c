int main (int IVu6xLzI9e, const  char *hB8nrJURC []) {
    int huo9ryOAX;
    int SsSfYnFqP;
    int Sex16T;
    int knVLab;
    int FyrI8ks5 [huo9ryOAX + 3];
    int *p = FyrI8ks5;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    cin >> huo9ryOAX;
    for (SsSfYnFqP = (122 - 122); SsSfYnFqP < huo9ryOAX; SsSfYnFqP = SsSfYnFqP +1)
        cin >> FyrI8ks5[SsSfYnFqP];
    for (SsSfYnFqP = (189 - 189); SsSfYnFqP < huo9ryOAX / 2; SsSfYnFqP = SsSfYnFqP +1) {
        Sex16T = *(p + SsSfYnFqP);
        *(p + SsSfYnFqP) = *(p + huo9ryOAX - SsSfYnFqP -1);
        *(p + huo9ryOAX - SsSfYnFqP -1) = Sex16T;
    }
    {
        SsSfYnFqP = 0;
        while (huo9ryOAX - 1 > SsSfYnFqP) {
            cout << *(FyrI8ks5 +SsSfYnFqP) << ' ';
            SsSfYnFqP++;
        };
    }
    cout << *(FyrI8ks5 +huo9ryOAX - 1);
    return 0;
}

