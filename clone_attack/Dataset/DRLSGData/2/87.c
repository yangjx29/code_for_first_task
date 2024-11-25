struct   author {
    char BOdbEcBn;
    int G4JCNa2tv;
    int LLn2qrEKhm [(1966 - 966)];
};
int cmp (const  void  *OpGQcJUTy, const  void  *b) {
    const  struct   author *MCKg5EsU0va = (const  struct   author *) OpGQcJUTy;
    const  struct   author *URyiwD3zIAo = (const  struct   author *) b;
    return URyiwD3zIAo->G4JCNa2tv - MCKg5EsU0va->G4JCNa2tv;
}

int main () {
    int k4SIXpPZ;
    int KryVC2l;
    char DUpj6L;
    int BOdbEcBn;
    int zyt4FG6;
    char Vj3h8ep [(743 - 717)];
    int bnM1GkSxm;
    int m7ixDoYN;
    struct   author duLlxtHz4N [(809 - 783)];
    scanf ("%d", &m7ixDoYN);
    {
        bnM1GkSxm = (1644 - 715) - 929;
        while ((177 - 151) > bnM1GkSxm) {
            duLlxtHz4N[bnM1GkSxm].BOdbEcBn = 'A' + bnM1GkSxm;
            duLlxtHz4N[bnM1GkSxm].G4JCNa2tv = (692 - 692);
            bnM1GkSxm = 315 - (734 - 420);
        }
    }
    {
        bnM1GkSxm = (695 - 695);
        for (; m7ixDoYN > bnM1GkSxm;) {
            bnM1GkSxm = bnM1GkSxm + (650 - 649);
            scanf ("%d %s", &BOdbEcBn, Vj3h8ep);
            KryVC2l = strlen (Vj3h8ep);
            for (k4SIXpPZ = (103 - 103); k4SIXpPZ < KryVC2l; k4SIXpPZ = k4SIXpPZ + (808 - 807)) {
                zyt4FG6 = Vj3h8ep[k4SIXpPZ] - 'A';
                duLlxtHz4N[zyt4FG6].LLn2qrEKhm[duLlxtHz4N[zyt4FG6].G4JCNa2tv] = BOdbEcBn;
                duLlxtHz4N[zyt4FG6].G4JCNa2tv++;
            }
        }
    }
    qsort (duLlxtHz4N, (565 - 539), sizeof (struct   author), cmp);
    printf ("%c\n", duLlxtHz4N[(841 - 841)].BOdbEcBn);
    printf ("%d\n", duLlxtHz4N[(134 - 134)].G4JCNa2tv);
    {
        bnM1GkSxm = 750 - 750;
        while (bnM1GkSxm < duLlxtHz4N[(575 - 575)].G4JCNa2tv) {
            printf ("%d\n", duLlxtHz4N[0].LLn2qrEKhm[bnM1GkSxm]);
            bnM1GkSxm = bnM1GkSxm + (963 - 962);
        }
    }
}

