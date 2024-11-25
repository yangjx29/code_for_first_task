int a (int HPM2Zua, int i) {
    if (!(1 != i))
        return HPM2Zua;
    else
        return a (HPM2Zua, i - 1) / (383 - 381);
}

int main () {
    int FAjRHJ [(180 - 80)], EqSCdo2mpy [100];
    int HPM2Zua, y;
    int i = 1;
    int j = 1;
    cin >> HPM2Zua >> y;
    do {
        FAjRHJ[i] = a (HPM2Zua, i);
        i++;
    }
    while (a (HPM2Zua, i));
    do {
        EqSCdo2mpy[j] = a (y, j);
        j++;
    }
    while (a (y, j));
    {
        i--;
        j = j - 1;
        while (!(FAjRHJ[i] != EqSCdo2mpy[j]) && j >= 1 && i >= 1) {
            i--;
            j--;
        };
    }
    cout << FAjRHJ[++i];
    return 0;
}

