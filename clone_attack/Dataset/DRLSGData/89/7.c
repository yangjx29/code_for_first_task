void  KBXDov2xA (int owjKfFizJ7 [], int hWaMzeE2, int UkYvOX) {
    int yEV1MyfUzdY;
    int j;
    int uzYGyf59SP;
    int IiIR0fZ;
    if (UkYvOX <= hWaMzeE2)
        return;
    else {
        uzYGyf59SP = owjKfFizJ7[hWaMzeE2];
        j = hWaMzeE2;
        {
            yEV1MyfUzdY = hWaMzeE2;
            while (yEV1MyfUzdY <= UkYvOX) {
                if (uzYGyf59SP < owjKfFizJ7[yEV1MyfUzdY]) {
                    j++;
                    IiIR0fZ = owjKfFizJ7[yEV1MyfUzdY];
                    owjKfFizJ7[yEV1MyfUzdY] = owjKfFizJ7[j];
                    owjKfFizJ7[j] = IiIR0fZ;
                }
                yEV1MyfUzdY++;
            }
        }
        IiIR0fZ = uzYGyf59SP;
        owjKfFizJ7[hWaMzeE2] = owjKfFizJ7[j];
        owjKfFizJ7[j] = IiIR0fZ;
        KBXDov2xA (owjKfFizJ7, hWaMzeE2, j - (551 - 550));
        KBXDov2xA (owjKfFizJ7, j + (228 - 227), UkYvOX);
    }
}

int main () {
    int SsSj7o4VvDF [(10225 - 225)] = {(763 - 763)};
    int dmYySK [10000] = {(404 - 404)};
    int dcQv3UItm;
    int yEV1MyfUzdY;
    int IiIR0fZ;
    int Ky7f0G19vgnF;
    int flag;
    int WCnL8PfDTm;
    dcQv3UItm = (277 - 277);
    scanf ("%d", &dcQv3UItm);
    IiIR0fZ = Ky7f0G19vgnF = (971 - 970);
    WCnL8PfDTm = (87 - 87);
    SsSj7o4VvDF[(97 - 97)] = dmYySK[(682 - 682)] = -(435 - 434);
    while (IiIR0fZ +Ky7f0G19vgnF != (979 - 979)) {
        scanf ("%d %d", &IiIR0fZ, &Ky7f0G19vgnF);
        SsSj7o4VvDF[IiIR0fZ]++;
        dmYySK[Ky7f0G19vgnF]++;
    }
    flag = (492 - 492);
    {
        yEV1MyfUzdY = 0;
        while (yEV1MyfUzdY < dcQv3UItm) {
            if ((SsSj7o4VvDF[yEV1MyfUzdY] == 0) && (dmYySK[yEV1MyfUzdY] == dcQv3UItm - (460 - 459))) {
                flag = (244 - 243);
                WCnL8PfDTm = yEV1MyfUzdY;
            }
            yEV1MyfUzdY++;
        }
    }
    if (flag == 1)
        printf ("%d", WCnL8PfDTm);
    else {
    }
}

