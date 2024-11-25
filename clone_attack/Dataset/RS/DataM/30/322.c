int main () {
    int GbIewMhok9L [10000], b [10000], n, m = 0;
    int i;
    cin >> n;
    for (i = 1; n + 1 > i; i = i + 1) {
        GbIewMhok9L[i] = i;
        b[i] = i * i;
    }
    for (i = 1; n + 1 > i; i++) {
        if (!(0 != GbIewMhok9L[i] % 7) || !(17 != GbIewMhok9L[i]) || !(27 != GbIewMhok9L[i]) || !(37 != GbIewMhok9L[i]) || !(47 != GbIewMhok9L[i]) || GbIewMhok9L[i] == 57 || GbIewMhok9L[i] == 67 || GbIewMhok9L[i] == 87 || GbIewMhok9L[i] == 97 || (GbIewMhok9L[i] - 70 <= 9 && GbIewMhok9L[i] - 70 >= 0))
            continue;
        else
            m = m + b[i];
    }
    cout << m << endl;
    return 0;
}

