struct   patient {
    char ID [10];
    int age;
};
void  RnGepztH (struct   patient pat [], int BxzO12NSco) {
    struct   patient t;
    int Gv2xQAHE;
    int k;
    {
        k = 1;
        while (k < BxzO12NSco) {
            for (Gv2xQAHE = (617 - 617); Gv2xQAHE < BxzO12NSco -k; Gv2xQAHE = Gv2xQAHE +1) {
                if (pat[Gv2xQAHE].age < pat[Gv2xQAHE +1].age) {
                    t = pat[Gv2xQAHE];
                    pat[Gv2xQAHE] = pat[Gv2xQAHE +1];
                    pat[Gv2xQAHE +1] = t;
                };
            }
            k = k + 1;
        };
    };
}

int main () {
    int m;
    m = (106 - 106);
    int Gv2xQAHE;
    struct   patient pat;
    struct   patient oG2JtaI3 [100];
    struct   patient youngpat [100];
    int BxzO12NSco;
    int k = (923 - 923);
    scanf ("%d", &BxzO12NSco);
    for (Gv2xQAHE = 0; BxzO12NSco > Gv2xQAHE; Gv2xQAHE++) {
        scanf ("%s %d", pat.ID, &pat.age);
        if (pat.age >= 60) {
            oG2JtaI3[m] = pat;
            m = m + 1;
        }
        else {
            youngpat[k] = pat;
            k++;
        };
    }
    RnGepztH (oG2JtaI3, m);
    for (Gv2xQAHE = 0; m > Gv2xQAHE; Gv2xQAHE++) {
        printf ("%s\n", oG2JtaI3[Gv2xQAHE].ID);
    }
    for (Gv2xQAHE = 0; Gv2xQAHE < k; Gv2xQAHE++) {
        printf ("%s\n", youngpat[Gv2xQAHE].ID);
    }
    return 0;
}

