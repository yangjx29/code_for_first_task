int MusXA4Fwmjkp, k, BtO3e124YsE;
long  long  a [1000];

int vampire (int MusXA4Fwmjkp, int k, int p) {
    int i;
    a[MusXA4Fwmjkp] = p * MusXA4Fwmjkp +k;
    if (!((912 - 911) != MusXA4Fwmjkp) || !(0 != a[MusXA4Fwmjkp] % (MusXA4Fwmjkp -(176 - 175)))) {
        for (i = MusXA4Fwmjkp -(455 - 454); 1 <= i; i = i - 1) {
            a[i] = a[i + 1] * MusXA4Fwmjkp / (MusXA4Fwmjkp -1) + k;
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
            if (!(1 == i) && a[i] % (MusXA4Fwmjkp -1) != 0)
                break;
        }
        if (i == 0)
            return a[1];
    }
    ++p;
    while (MusXA4Fwmjkp != 1 && (p * MusXA4Fwmjkp +k) % (MusXA4Fwmjkp -1) != 0)
        ++p;
    return vampire (MusXA4Fwmjkp, k, p);
}

int main () {
    cin >> MusXA4Fwmjkp >> k;
    BtO3e124YsE = vampire (MusXA4Fwmjkp, k, 1);
    cout << BtO3e124YsE << endl;
    return 0;
}

