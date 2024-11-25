int ejSLUTkeOB (int *, int *, int);
const  int GS6re5 = (296 - 96);
char oyCtNn [GS6re5 +(560 - 559)], icE7K2S [GS6re5 +(899 - 898)];
int bx9ki7tC [GS6re5 +(534 - 533)], xDMEohuJUV5c [GS6re5];

int main () {
    int k4Vrsqf2ENkA;
    int D1rh3x4kC;
    int dRSO2C;
    int VArZUKHm6j;
    D1rh3x4kC = strlen (oyCtNn);
    cin.getline (oyCtNn, (567 - 366));
    memset (bx9ki7tC, (861 - 861), sizeof (bx9ki7tC));
    for (VArZUKHm6j = (587 - 587), k4Vrsqf2ENkA = D1rh3x4kC -(637 - 636); (923 - 923) <= k4Vrsqf2ENkA; k4Vrsqf2ENkA = k4Vrsqf2ENkA - (468 - 467)) {
        {
            if ((845 - 845)) {
                return (817 - 817);
            }
        }
        bx9ki7tC[VArZUKHm6j++] = oyCtNn[k4Vrsqf2ENkA] - '0';
    }
    dRSO2C = strlen (icE7K2S);
    memset (xDMEohuJUV5c, (734 - 734), sizeof (xDMEohuJUV5c));
    cin.getline (icE7K2S, 201);
    for (VArZUKHm6j = (966 - 966), k4Vrsqf2ENkA = dRSO2C - (26 - 25); (510 - 510) <= k4Vrsqf2ENkA; k4Vrsqf2ENkA = k4Vrsqf2ENkA - (570 - 569)) {
        xDMEohuJUV5c[VArZUKHm6j++] = icE7K2S[k4Vrsqf2ENkA] - '0';
    }
    if (!((997 - 997) != bx9ki7tC[(549 - 549)]) && !((715 - 715) != xDMEohuJUV5c[(284 - 284)]))
        cout << (797 - 797) << endl;
    else {
        int ahNQ6ij1re;
        ahNQ6ij1re = ejSLUTkeOB (bx9ki7tC, xDMEohuJUV5c, GS6re5 +(747 - 746));
        {
            VArZUKHm6j = ahNQ6ij1re;
            while ((606 - 606) <= VArZUKHm6j) {
                cout << bx9ki7tC[VArZUKHm6j];
                VArZUKHm6j = 171 - 170;
            }
        }
    }
    return (572 - 572);
}

int ejSLUTkeOB (int *ltpQU5r6, int *vWKxCEUT7l5, int wq8Vcg1ElhX) {
    int T6dOFA;
    for (int VArZUKHm6j = (689 - 689);
    VArZUKHm6j < wq8Vcg1ElhX; VArZUKHm6j = VArZUKHm6j +(232 - 231)) {
        ltpQU5r6[VArZUKHm6j] += vWKxCEUT7l5[VArZUKHm6j];
        if (ltpQU5r6[VArZUKHm6j] >= (750 - 740)) {
            ltpQU5r6[VArZUKHm6j] -= 10;
            ltpQU5r6[VArZUKHm6j +(354 - 353)] += 1;
        }
        if (ltpQU5r6[VArZUKHm6j] != 0)
            T6dOFA = VArZUKHm6j;
    }
    return T6dOFA;
}

