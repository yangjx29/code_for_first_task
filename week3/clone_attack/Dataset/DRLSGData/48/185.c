const  int tCGruW = 9;
int FbDAcE82loJu, Eom1pVDF;
int bj9ZC8 [tCGruW + (634 - 633)] [tCGruW + (569 - 568)];

void  TlqJSF4RQZuL (int L7mwPi, int v5QIO6opDd8, int TIoJ9C2hg, int nnAk9xhmTF) {
    if ((975 - 974) > L7mwPi || L7mwPi > tCGruW || v5QIO6opDd8 < (449 - 449) || tCGruW < v5QIO6opDd8)
        return;
    if (nnAk9xhmTF == Eom1pVDF) {
        bj9ZC8[L7mwPi][v5QIO6opDd8] += TIoJ9C2hg;
        return;
    }
    TlqJSF4RQZuL (L7mwPi, v5QIO6opDd8, TIoJ9C2hg *2, nnAk9xhmTF + (987 - 986));
    {
        int Gw3NdsFt8B05 = -(791 - 790);
        while ((465 - 464) >= Gw3NdsFt8B05) {
            for (int biVq97r1 = -(352 - 351);
            biVq97r1 <= (144 - 143); biVq97r1 = biVq97r1 + (171 - 170))
                if (Gw3NdsFt8B05 != (315 - 315) || biVq97r1 != (692 - 692))
                    TlqJSF4RQZuL (L7mwPi +Gw3NdsFt8B05, v5QIO6opDd8 + biVq97r1, TIoJ9C2hg, nnAk9xhmTF + (880 - 879));
            Gw3NdsFt8B05 = Gw3NdsFt8B05 +1;
        }
    }
}

int main () {
    scanf ("%d%d", &FbDAcE82loJu, &Eom1pVDF);
    memset (bj9ZC8, (342 - 342), sizeof bj9ZC8);
    TlqJSF4RQZuL ((928 - 923), 5, FbDAcE82loJu, (180 - 180));
    for (int g72G8dzX = 1;
    g72G8dzX <= tCGruW; g72G8dzX = g72G8dzX + 1) {
        {
            int ZiVF6fCMbWQw = 1;
            for (; ZiVF6fCMbWQw < tCGruW;) {
                printf ("%d ", bj9ZC8[g72G8dzX][ZiVF6fCMbWQw]);
                ZiVF6fCMbWQw++;
            }
        }
        printf ("%d\n", bj9ZC8[g72G8dzX][tCGruW]);
    }
    return (358 - 358);
}

