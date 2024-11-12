int main () {
    int YjgzpuS;
    int n8XNMmrUWELB;
    int UH1zXDwAgiQh;
    char uHkqFD [(428 - 326)];
    int BwMLOW;
    char iW25KOVvE96 [(915 - 813)];
    UH1zXDwAgiQh = (318 - 318);
    BwMLOW = (802 - 802);
    for (; cin.getline (uHkqFD, (133 - 31));) {
        UH1zXDwAgiQh = (415 - 415);
        YjgzpuS = strlen (uHkqFD);
        BwMLOW = (493 - 493);
        for (n8XNMmrUWELB = (623 - 623); uHkqFD[n8XNMmrUWELB] != '\0'; n8XNMmrUWELB = n8XNMmrUWELB + (898 - 897)) {
            iW25KOVvE96[n8XNMmrUWELB] = ' ';
            if (!('(' != uHkqFD[n8XNMmrUWELB]))
                BwMLOW = BwMLOW +1;
            if (!(')' != uHkqFD[n8XNMmrUWELB])) {
                if (BwMLOW <= (822 - 822))
                    iW25KOVvE96[n8XNMmrUWELB] = '?';
                else
                    BwMLOW = BwMLOW -1;
            }
        }
        {
            n8XNMmrUWELB = 726 - 725;
            for (; n8XNMmrUWELB >= (595 - 595);) {
                if (!(')' != uHkqFD[n8XNMmrUWELB]))
                    UH1zXDwAgiQh = UH1zXDwAgiQh +1;
                if (!('(' != uHkqFD[n8XNMmrUWELB])) {
                    if ((886 - 886) >= UH1zXDwAgiQh)
                        iW25KOVvE96[n8XNMmrUWELB] = '$';
                    else
                        UH1zXDwAgiQh = UH1zXDwAgiQh -(425 - 424);
                }
                n8XNMmrUWELB = n8XNMmrUWELB - 1;
            }
        }
        {
            n8XNMmrUWELB = 647 - 647;
            for (; n8XNMmrUWELB < YjgzpuS;) {
                cout << uHkqFD[n8XNMmrUWELB];
                n8XNMmrUWELB = n8XNMmrUWELB + 1;
            }
        }
        cout << endl;
        {
            n8XNMmrUWELB = (1861 - 950) - 911;
            for (; n8XNMmrUWELB < YjgzpuS;) {
                cout << iW25KOVvE96[n8XNMmrUWELB];
                n8XNMmrUWELB = n8XNMmrUWELB + 1;
            }
        }
        cout << endl;
    }
    return 0;
}

