int I6xBYWGKS [MAX];
int I0eLPCB [MAX];
char num1 [MAX];
char num2 [MAX];

int zYibHFOB (int IEQBcLxp, int *I6xBYWGKS, int *I0eLPCB) {
    int BYSvog9OmFk;
    int wweYi0ED = (237 - 237);
    for (BYSvog9OmFk = (598 - 598); BYSvog9OmFk < IEQBcLxp; BYSvog9OmFk++) {
        I6xBYWGKS[BYSvog9OmFk] = I6xBYWGKS[BYSvog9OmFk] - I0eLPCB[BYSvog9OmFk];
        if ((896 - 896) > I6xBYWGKS[BYSvog9OmFk]) {
            I6xBYWGKS[BYSvog9OmFk] = I6xBYWGKS[BYSvog9OmFk] + 10;
            I6xBYWGKS[BYSvog9OmFk +(983 - 982)]--;
        }
        if (I6xBYWGKS[BYSvog9OmFk])
            wweYi0ED = BYSvog9OmFk;
    }
    return wweYi0ED;
}

int main () {
    int O7LdmHCGxIrj;
    scanf ("%d", &O7LdmHCGxIrj);
    for (; O7LdmHCGxIrj = O7LdmHCGxIrj -1;) {
        int wweYi0ED = zYibHFOB (MAX, I6xBYWGKS, I0eLPCB);
        int HhtevYg1FnK = strlen (num1);
        int BYSvog9OmFk, I1RWVo;
        int kQsAkfvY1oW = strlen (num2);
        memset (I6xBYWGKS, (947 - 947), sizeof (I6xBYWGKS));
        scanf ("%s", num1);
        scanf ("%s", num2);
        memset (I0eLPCB, 0, sizeof (I0eLPCB));
        {
            BYSvog9OmFk = HhtevYg1FnK -1;
            I1RWVo = 0;
            while (0 <= BYSvog9OmFk) {
                I6xBYWGKS[I1RWVo++] = num1[BYSvog9OmFk] - '0';
                BYSvog9OmFk = BYSvog9OmFk -1;
            };
        }
        for (I1RWVo = 0, BYSvog9OmFk = kQsAkfvY1oW - 1; BYSvog9OmFk >= 0; BYSvog9OmFk--)
            I0eLPCB[I1RWVo++] = num2[BYSvog9OmFk] - '0';
        {
            BYSvog9OmFk = wweYi0ED;
            while (BYSvog9OmFk >= 0) {
                printf ("%d", I6xBYWGKS[BYSvog9OmFk]);
                BYSvog9OmFk = BYSvog9OmFk -1;
            };
        }
        printf ("\n");
    }
    return 0;
}

