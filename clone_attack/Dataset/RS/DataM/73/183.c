int main () {
    int IFYAvWj;
    int zu3Jwahnsyp;
    int XjN3t2D7b9;
    int YBHQj8nmTP3;
    int Kfiequ0Gvx8N;
    int FDuJRZ6Tb [5] [5];
    Kfiequ0Gvx8N = (217 - 217);
    {
        IFYAvWj = 0;
        while (5 > IFYAvWj) {
            {
                zu3Jwahnsyp = 0;
                while (5 > zu3Jwahnsyp) {
                    cin >> FDuJRZ6Tb[IFYAvWj][zu3Jwahnsyp];
                    zu3Jwahnsyp++;
                };
            }
            IFYAvWj = IFYAvWj +1;
        };
    }
    for (IFYAvWj = 0; 5 > IFYAvWj; IFYAvWj = IFYAvWj +1) {
        for (zu3Jwahnsyp = 0; 5 > zu3Jwahnsyp; zu3Jwahnsyp = zu3Jwahnsyp + 1) {
            if (FDuJRZ6Tb[IFYAvWj][0] <= FDuJRZ6Tb[IFYAvWj][zu3Jwahnsyp] && FDuJRZ6Tb[IFYAvWj][1] <= FDuJRZ6Tb[IFYAvWj][zu3Jwahnsyp] && FDuJRZ6Tb[IFYAvWj][2] <= FDuJRZ6Tb[IFYAvWj][zu3Jwahnsyp] && FDuJRZ6Tb[IFYAvWj][3] <= FDuJRZ6Tb[IFYAvWj][zu3Jwahnsyp] && FDuJRZ6Tb[IFYAvWj][4] <= FDuJRZ6Tb[IFYAvWj][zu3Jwahnsyp]) {
                if (FDuJRZ6Tb[IFYAvWj][zu3Jwahnsyp] <= FDuJRZ6Tb[0][zu3Jwahnsyp] && FDuJRZ6Tb[IFYAvWj][zu3Jwahnsyp] <= FDuJRZ6Tb[1][zu3Jwahnsyp] && FDuJRZ6Tb[IFYAvWj][zu3Jwahnsyp] <= FDuJRZ6Tb[2][zu3Jwahnsyp] && FDuJRZ6Tb[IFYAvWj][zu3Jwahnsyp] <= FDuJRZ6Tb[3][zu3Jwahnsyp] && FDuJRZ6Tb[IFYAvWj][zu3Jwahnsyp] <= FDuJRZ6Tb[4][zu3Jwahnsyp]) {
                    YBHQj8nmTP3 = zu3Jwahnsyp + 1;
                    XjN3t2D7b9 = IFYAvWj +1;
                    cout << XjN3t2D7b9 << " " << YBHQj8nmTP3 << " " << FDuJRZ6Tb[IFYAvWj][zu3Jwahnsyp];
                }
                else
                    Kfiequ0Gvx8N = Kfiequ0Gvx8N +1;
            }
            else
                Kfiequ0Gvx8N++;
        };
    }
    if (Kfiequ0Gvx8N == 25)
        cout << "not found";
    return 0;
}

