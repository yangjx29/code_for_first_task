int main () {
    char TbX9BAF [11], eIFvB7T [4];
    for (; cin >> TbX9BAF;) {
        char *CRnCkwBJ = TbX9BAF, GcywS8mNje;
        int rePyampGu;
        for (rePyampGu = 0; rePyampGu < strlen (TbX9BAF); rePyampGu = rePyampGu + 1)
            if (TbX9BAF[rePyampGu] > *CRnCkwBJ) {
                CRnCkwBJ = &TbX9BAF[rePyampGu];
                GcywS8mNje = *CRnCkwBJ;
            }
        *CRnCkwBJ = 0;
        cin >> eIFvB7T;
        cout << TbX9BAF << GcywS8mNje << eIFvB7T << CRnCkwBJ +1 << endl;
    }
    return 0;
}

